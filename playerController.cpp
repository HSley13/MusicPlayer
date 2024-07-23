#include "playerController.h"

PlayerController::PlayerController(QObject *parent)
    : QAbstractListModel(parent)
{
    const auto &audio_outputs = QMediaDevices::audioOutputs();

    if (!audio_outputs.isEmpty())
        _media_player.setAudioOutput(new QAudioOutput(&_media_player));
}

int PlayerController::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return _audio_list.length();
}

QVariant PlayerController::data(const QModelIndex &index, int role) const
{
    if (index.isValid() && index.row() >= 0 && index.row() < _audio_list.length())
    {
        AudioInfo *audioInfo = _audio_list[index.row()];

        switch ((Role)role)
        {
        case AudioTitleRole:
            return audioInfo->title();
        case AudioAuthorNameRole:
            return audioInfo->authorName();
        case AudioSourceRole:
            return audioInfo->audioSource();
        case AudioImageSourceRole:
            return audioInfo->imageSource();
        case AudioVideoSourceRole:
            return audioInfo->videoSource();
        }
    }

    return {};
}

QHash<int, QByteArray> PlayerController::roleNames() const
{
    QHash<int, QByteArray> result;

    result[AudioAuthorNameRole] = "audioAuthorName";
    result[AudioTitleRole] = "audioTitle";
    result[AudioSourceRole] = "audioSource";
    result[AudioImageSourceRole] = "audioImageSource";
    result[AudioVideoSourceRole] = "audioVideoSource";

    return result;
}

bool PlayerController::playing() const
{
    return _playing;
}

void PlayerController::switchToPreviousSong()
{
    const int index = _audio_list.indexOf(_current_song);

    (index - 1 < 0) ? setCurrentSong(_audio_list.last()) : setCurrentSong(_audio_list[index - 1]);
}

void PlayerController::switchToNextSong()
{
    const int index = _audio_list.indexOf(_current_song);

    (index + 1 >= _audio_list.length()) ? setCurrentSong(_audio_list.first()) : setCurrentSong(_audio_list[index + 1]);
}

void PlayerController::switchToAudioByIndex(int index)
{
    if (index >= 0 && index < _audio_list.length())
        setCurrentSong(_audio_list[index]);
}

void PlayerController::playPause()
{
    _playing = !_playing;
    emit playingChanged();

    (_playing) ? _media_player.play() : _media_player.pause();
}

void PlayerController::changeAudioSource(const QUrl &source)
{
    _media_player.stop();
    _media_player.setSource(source);

    if (_playing)
        _media_player.play();
}

void PlayerController::addAudio(const QString &title, const QString &author_name, const QUrl &audio_source, const QUrl &image_source, const QUrl &video_source)
{
    beginInsertRows(QModelIndex(), _audio_list.length(), _audio_list.length());

    AudioInfo *audioInfo = new AudioInfo(this);

    audioInfo->setTitle(title);
    audioInfo->setAuthorName(author_name);
    audioInfo->setAudioSource(audio_source);
    audioInfo->setImageSource(image_source);
    audioInfo->setVideoSource(video_source);

    if (_audio_list.isEmpty())
        setCurrentSong(audioInfo);

    _audio_list << audioInfo;

    endInsertRows();
}

void PlayerController::removeAudio(int index)
{
    if (index >= 0 && index < _audio_list.length())
    {
        beginRemoveRows(QModelIndex(), index, index);

        AudioInfo *audio_to_remove = _audio_list[index];

        if (audio_to_remove == _current_song)
        {
            if (_audio_list.length() > 1)
                (index != 0) ? setCurrentSong(_audio_list[index - 1]) : setCurrentSong(_audio_list[index + 1]);
            else
                setCurrentSong(nullptr);
        }

        _audio_list.removeAt(index);

        audio_to_remove->deleteLater();

        endRemoveRows();
    }
}

AudioInfo *PlayerController::currentSong() const
{
    return _current_song;
}

void PlayerController::setCurrentSong(AudioInfo *new_current_song)
{
    if (_current_song == new_current_song)
        return;

    _current_song = new_current_song;
    emit currentSongChanged();

    if (_current_song)
        changeAudioSource(_current_song->audioSource());
    else
    {
        _media_player.stop();
        _media_player.setSource(QUrl());

        _playing = false;

        emit playingChanged();
    }
}