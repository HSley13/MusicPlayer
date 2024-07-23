#include "AudioSearchModel.h"

namespace
{
    const QString &_request_url = "https://api.jamendo.com/v3.0/tracks/";
    const QString &_client_ID = "0b85f6fc";
}

AudioSearchModel::AudioSearchModel(QObject *parent)
    : QAbstractListModel(parent) {}

int AudioSearchModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return _audio_list.size();
}

QVariant AudioSearchModel::data(const QModelIndex &index, int role) const
{
    if (index.isValid() && index.row() >= 0 && index.row() < _audio_list.size())
    {
        AudioInfo *audioInfo = _audio_list[index.row()];

        switch ((Role)role)
        {
        case AudioNameRole:
            return audioInfo->title();
        case AudioAuthorRole:
            return audioInfo->authorName();
        case AudioImageSourceRole:
            return audioInfo->imageSource();
        case AudioSourceRole:
            return audioInfo->audioSource();
        }
    }

    return {};
}

QHash<int, QByteArray> AudioSearchModel::roleNames() const
{
    QHash<int, QByteArray> names{};

    names[AudioNameRole] = "audioName";
    names[AudioAuthorRole] = "audioAuthor";
    names[AudioImageSourceRole] = "audioImageSource";
    names[AudioSourceRole] = "audioSource";

    return names;
}

void AudioSearchModel::searchSong(const QString &name)
{
    if (!name.trimmed().isEmpty())
    {
        if (_reply)
        {
            _reply->abort();
            _reply->deleteLater();
            _reply = nullptr;
        }

        QUrlQuery query;
        query.addQueryItem("client_id", _client_ID);
        query.addQueryItem("namesearch", name);
        query.addQueryItem("format", "json");

        setIsSearching(true);

        _reply = _network_manager.get(QNetworkRequest(_request_url + "?" + query.toString()));
        connect(_reply, &QNetworkReply::finished, this, &AudioSearchModel::parseData);
    }
}

void AudioSearchModel::parseData()
{
    if (_reply->error() == QNetworkReply::NoError)
    {
        beginResetModel();

        qDeleteAll(_audio_list);
        _audio_list.clear();

        QByteArray data = _reply->readAll();

        QJsonDocument jsonDocument = QJsonDocument::fromJson(data);
        QJsonObject headers = jsonDocument["headers"].toObject();

        if (headers["status"].toString() == "success")
        {
            QJsonArray results = jsonDocument["results"].toArray();

            for (const auto &result : results)
            {
                QJsonObject entry = result.toObject();

                if (entry["audiodownload_allowed"].toBool())
                {
                    AudioInfo *audioInfo = new AudioInfo(this);

                    audioInfo->setTitle(entry["name"].toString());
                    audioInfo->setAuthorName(entry["artist_name"].toString());
                    audioInfo->setImageSource(entry["image"].toString());
                    audioInfo->setAudioSource(entry["audiodownload"].toString());

                    _audio_list << audioInfo;
                }
            }
        }
        else
            qWarning() << headers["error_string"];

        endResetModel();
    }
    else if (_reply->error() != QNetworkReply::OperationCanceledError)
        qCritical() << "Reply failed, error: " << _reply->errorString();

    setIsSearching(false);

    _reply->deleteLater();
    _reply = nullptr;
}

bool AudioSearchModel::isSearching() const
{
    return _is_searching;
}

void AudioSearchModel::setIsSearching(bool new_is_searching)
{
    if (_is_searching == new_is_searching)
        return;

    _is_searching = new_is_searching;
    emit isSearchingChanged();
}
