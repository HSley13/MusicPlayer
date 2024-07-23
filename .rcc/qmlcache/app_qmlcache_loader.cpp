#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _0x5f_QML_modules_SongPlayer_customModules_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_QML_modules_SongPlayer_customModules_AudioInfoBox_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_QML_modules_SongPlayer_customModules_ImageButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_QML_modules_SongPlayer_customModules_PlayListPanel_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_QML_modules_SongPlayer_customModules_SearchField_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_QML_modules_SongPlayer_customModules_SearchPanel_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/QML_modules/SongPlayer/customModules/Main.qml"), &QmlCacheGeneratedCode::_0x5f_QML_modules_SongPlayer_customModules_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/QML_modules/SongPlayer/customModules/AudioInfoBox.qml"), &QmlCacheGeneratedCode::_0x5f_QML_modules_SongPlayer_customModules_AudioInfoBox_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/QML_modules/SongPlayer/customModules/ImageButton.qml"), &QmlCacheGeneratedCode::_0x5f_QML_modules_SongPlayer_customModules_ImageButton_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/QML_modules/SongPlayer/customModules/PlayListPanel.qml"), &QmlCacheGeneratedCode::_0x5f_QML_modules_SongPlayer_customModules_PlayListPanel_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/QML_modules/SongPlayer/customModules/SearchField.qml"), &QmlCacheGeneratedCode::_0x5f_QML_modules_SongPlayer_customModules_SearchField_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/QML_modules/SongPlayer/customModules/SearchPanel.qml"), &QmlCacheGeneratedCode::_0x5f_QML_modules_SongPlayer_customModules_SearchPanel_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_app)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_app))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_app)() {
    return 1;
}
