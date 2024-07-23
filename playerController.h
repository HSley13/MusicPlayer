#pragma once

#include <QtQuick>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QAbstractListModel>
#include <QMediaDevices>
#include <QAudioDevice>
#include <QAudioOutput>
#include "AudioSearchModel.h"
#include "AudioInfo.h"
class PlayerController : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(bool playing READ playing NOTIFY playingChanged)
    Q_PROPERTY(AudioInfo *currentSong READ currentSong WRITE setCurrentSong NOTIFY currentSongChanged)

public:
    enum Role
    {
        AudioTitleRole = Qt::UserRole + 1,
        AudioAuthorNameRole,
        AudioSourceRole,
        AudioImageSourceRole,
        AudioVideoSourceRole
    };

    explicit PlayerController(QObject *parent = nullptr);

    bool playing() const;

    virtual int rowCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    virtual QHash<int, QByteArray> roleNames() const override;

    AudioInfo *currentSong() const;
    void setCurrentSong(AudioInfo *new_current_song);

public slots:
    void switchToNextSong();
    void switchToPreviousSong();
    void playPause();

    void changeAudioSource(const QUrl &source);
    void addAudio(const QString &title, const QString &author_ame, const QUrl &audio_source, const QUrl &image_source, const QUrl &video_source = QUrl());
    void removeAudio(int index);
    void switchToAudioByIndex(int index);

private:
    bool _playing{false};

    QMediaPlayer _media_player;
    QList<AudioInfo *> _audio_list;
    AudioInfo *_current_song{nullptr};

signals:
    void currentSongChanged();
    void playingChanged();
};