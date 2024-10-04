#pragma once

#include <QObject>
#include <QUrl>
#include <QtQml>
class AudioInfo : public QObject
{
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(int songIndex READ songIndex WRITE setSongIndex NOTIFY songIndexChanged REQUIRED)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QString authorName READ authorName WRITE setAuthorName NOTIFY authorNameChanged)
    Q_PROPERTY(QUrl imageSource READ imageSource WRITE setImageSource NOTIFY imageSourceChanged)
    Q_PROPERTY(QUrl videoSource READ videoSource WRITE setVideoSource NOTIFY videoSourceChanged)
    Q_PROPERTY(QUrl audioSource READ audioSource WRITE setAudioSource NOTIFY audioSourceChanged REQUIRED)

public:
    explicit AudioInfo(QObject *parent = nullptr);

    int songIndex() const;
    void setSongIndex(int new_song_index);

    QString title() const;
    void setTitle(const QString &new_title);

    QString authorName() const;
    void setAuthorName(const QString &new_author_name);

    QUrl imageSource() const;
    void setImageSource(const QUrl &new_image_source);

    QUrl videoSource() const;
    void setVideoSource(const QUrl &new_video_source);

    QUrl audioSource() const;
    void setAudioSource(const QUrl &new_audio_source);

signals:
    void songIndexChanged();
    void titleChanged();
    void authorNameChanged();
    void imageSourceChanged();
    void videoSourceChanged();

    void audioSourceChanged();

private:
    int _song_index{0};
    QString _title{};
    QString _author_name{};
    QUrl _image_source{};
    QUrl _video_source{};
    QUrl _audio_source{};
};