/****************************************************************************
** Meta object code from reading C++ file 'AudioInfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../AudioInfo.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAudioInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAudioInfoENDCLASS = QtMocHelpers::stringData(
    "AudioInfo",
    "QML.Element",
    "auto",
    "songIndexChanged",
    "",
    "titleChanged",
    "authorNameChanged",
    "imageSourceChanged",
    "videoSourceChanged",
    "audioSourceChanged",
    "songIndex",
    "title",
    "authorName",
    "imageSource",
    "videoSource",
    "audioSource"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAudioInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       6,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   52,    4, 0x06,    7 /* Public */,
       5,    0,   53,    4, 0x06,    8 /* Public */,
       6,    0,   54,    4, 0x06,    9 /* Public */,
       7,    0,   55,    4, 0x06,   10 /* Public */,
       8,    0,   56,    4, 0x06,   11 /* Public */,
       9,    0,   57,    4, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x01015103, uint(0), 0,
      11, QMetaType::QString, 0x00015103, uint(1), 0,
      12, QMetaType::QString, 0x00015103, uint(2), 0,
      13, QMetaType::QUrl, 0x00015103, uint(3), 0,
      14, QMetaType::QUrl, 0x00015103, uint(4), 0,
      15, QMetaType::QUrl, 0x01015103, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AudioInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAudioInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAudioInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'songIndex'
        int,
        // property 'title'
        QString,
        // property 'authorName'
        QString,
        // property 'imageSource'
        QUrl,
        // property 'videoSource'
        QUrl,
        // property 'audioSource'
        QUrl,
        // Q_OBJECT / Q_GADGET
        AudioInfo,
        // method 'songIndexChanged'
        void,
        // method 'titleChanged'
        void,
        // method 'authorNameChanged'
        void,
        // method 'imageSourceChanged'
        void,
        // method 'videoSourceChanged'
        void,
        // method 'audioSourceChanged'
        void
    >,
    nullptr
} };

void AudioInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->songIndexChanged(); break;
        case 1: _t->titleChanged(); break;
        case 2: _t->authorNameChanged(); break;
        case 3: _t->imageSourceChanged(); break;
        case 4: _t->videoSourceChanged(); break;
        case 5: _t->audioSourceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioInfo::*)();
            if (_t _q_method = &AudioInfo::songIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioInfo::*)();
            if (_t _q_method = &AudioInfo::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioInfo::*)();
            if (_t _q_method = &AudioInfo::authorNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioInfo::*)();
            if (_t _q_method = &AudioInfo::imageSourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AudioInfo::*)();
            if (_t _q_method = &AudioInfo::videoSourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AudioInfo::*)();
            if (_t _q_method = &AudioInfo::audioSourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->songIndex(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->authorName(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->imageSource(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->videoSource(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->audioSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSongIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAuthorName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setImageSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 4: _t->setVideoSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 5: _t->setAudioSource(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *AudioInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAudioInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AudioInfo::songIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioInfo::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AudioInfo::authorNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AudioInfo::imageSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AudioInfo::videoSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AudioInfo::audioSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
