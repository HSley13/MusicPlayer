#include "AudioInfo.h"

AudioInfo::AudioInfo(QObject *parent)
    : QObject{parent} {}

int AudioInfo::songIndex() const
{
    return _song_index;
}

void AudioInfo::setSongIndex(int new_song_index)
{
    if (_song_index == new_song_index)
        return;

    _song_index = new_song_index;

    emit songIndexChanged();
}

QString AudioInfo::title() const
{
    return _title;
}

void AudioInfo::setTitle(const QString &new_title)
{
    if (_title == new_title)
        return;

    _title = new_title;

    emit titleChanged();
}

QString AudioInfo::authorName() const
{
    return _author_name;
}

void AudioInfo::setAuthorName(const QString &new_author_name)
{
    if (_author_name == new_author_name)
        return;

    _author_name = new_author_name;

    emit authorNameChanged();
}

QUrl AudioInfo::imageSource() const
{
    return _image_source;
}

void AudioInfo::setImageSource(const QUrl &new_image_source)
{
    if (_image_source == new_image_source)
        return;

    _image_source = new_image_source;

    emit imageSourceChanged();
}

QUrl AudioInfo::videoSource() const
{
    return _video_source;
}

void AudioInfo::setVideoSource(const QUrl &new_video_source)
{
    if (_video_source == new_video_source)
        return;

    _video_source = new_video_source;

    emit videoSourceChanged();
}

QUrl AudioInfo::audioSource() const
{
    return _audio_source;
}

void AudioInfo::setAudioSource(const QUrl &new_audio_source)
{
    if (_audio_source == new_audio_source)
        return;

    _audio_source = new_audio_source;

    emit audioSourceChanged();
}