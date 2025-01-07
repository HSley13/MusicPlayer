/****************************************************************************
** Meta object code from reading C++ file 'PlayerController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PlayerController.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPlayerControllerENDCLASS = QtMocHelpers::stringData(
    "PlayerController",
    "QML.Element",
    "auto",
    "currentSongChanged",
    "",
    "playingChanged",
    "switchToNextSong",
    "switchToPreviousSong",
    "playPause",
    "changeAudioSource",
    "source",
    "addAudio",
    "title",
    "author_ame",
    "audio_source",
    "image_source",
    "video_source",
    "removeAudio",
    "index",
    "switchToAudioByIndex",
    "playing",
    "currentSong",
    "AudioInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlayerControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       2,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   76,    4, 0x06,    3 /* Public */,
       5,    0,   77,    4, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   78,    4, 0x0a,    5 /* Public */,
       7,    0,   79,    4, 0x0a,    6 /* Public */,
       8,    0,   80,    4, 0x0a,    7 /* Public */,
       9,    1,   81,    4, 0x0a,    8 /* Public */,
      11,    5,   84,    4, 0x0a,   10 /* Public */,
      11,    4,   95,    4, 0x2a,   16 /* Public | MethodCloned */,
      17,    1,  104,    4, 0x0a,   21 /* Public */,
      19,    1,  107,    4, 0x0a,   23 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QUrl,   12,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl, QMetaType::QUrl,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00015001, uint(1), 0,
      21, 0x80000000 | 22, 0x0001510b, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlayerController::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlayerControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlayerControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'playing'
        bool,
        // property 'currentSong'
        AudioInfo*,
        // Q_OBJECT / Q_GADGET
        PlayerController,
        // method 'currentSongChanged'
        void,
        // method 'playingChanged'
        void,
        // method 'switchToNextSong'
        void,
        // method 'switchToPreviousSong'
        void,
        // method 'playPause'
        void,
        // method 'changeAudioSource'
        void,
        const QUrl &,
        // method 'addAudio'
        void,
        const QString &,
        const QString &,
        const QUrl &,
        const QUrl &,
        const QUrl &,
        // method 'addAudio'
        void,
        const QString &,
        const QString &,
        const QUrl &,
        const QUrl &,
        // method 'removeAudio'
        void,
        int,
        // method 'switchToAudioByIndex'
        void,
        int
    >,
    nullptr
} };

void PlayerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentSongChanged(); break;
        case 1: _t->playingChanged(); break;
        case 2: _t->switchToNextSong(); break;
        case 3: _t->switchToPreviousSong(); break;
        case 4: _t->playPause(); break;
        case 5: _t->changeAudioSource((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 6: _t->addAudio((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[5]))); break;
        case 7: _t->addAudio((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[4]))); break;
        case 8: _t->removeAudio((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->switchToAudioByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayerController::*)();
            if (_t _q_method = &PlayerController::currentSongChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlayerController::*)();
            if (_t _q_method = &PlayerController::playingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioInfo* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->playing(); break;
        case 1: *reinterpret_cast< AudioInfo**>(_v) = _t->currentSong(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentSong(*reinterpret_cast< AudioInfo**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *PlayerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlayerControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int PlayerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PlayerController::currentSongChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerController::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
