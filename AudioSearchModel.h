#pragma once

#include <QAbstractListModel>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonObject>
#include <QJsonArray>
#include <QtQml>

#include "AudioInfo.h"
class AudioSearchModel : public QAbstractListModel
{
    Q_OBJECT
    QML_ELEMENT

public:
    enum Role
    {
        AudioNameRole = Qt::UserRole + 1,
        AudioAuthorRole,
        AudioImageSourceRole,
        AudioSourceRole
    };

    explicit AudioSearchModel(QObject *parent = nullptr);

    virtual int rowCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    virtual QHash<int, QByteArray> roleNames() const override;

    bool isSearching() const;
    void setIsSearching(bool new_is_searching);

public slots:
    void searchSong(const QString &name);
    void parseData();

private:
    QList<AudioInfo *> _audio_list;
    QNetworkAccessManager _network_manager;
    QNetworkReply *_reply{nullptr};
    bool _is_searching;

signals:
    void isSearchingChanged();
};