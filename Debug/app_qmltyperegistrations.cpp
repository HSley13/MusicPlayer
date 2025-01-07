/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <AudioInfo.h>
#include <AudioSearchModel.h>
#include <PlayerController.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_MusicPlayer()
{
    qmlRegisterTypesAndRevisions<AudioInfo>("MusicPlayer", 1);
    qmlRegisterTypesAndRevisions<AudioSearchModel>("MusicPlayer", 1);
    qmlRegisterAnonymousType<QAbstractItemModel, 254>("MusicPlayer", 1);
    qmlRegisterTypesAndRevisions<PlayerController>("MusicPlayer", 1);
    qmlRegisterModule("MusicPlayer", 1, 0);
}

static const QQmlModuleRegistration musicPlayerRegistration("MusicPlayer", qml_register_types_MusicPlayer);
