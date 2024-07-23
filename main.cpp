#include "playerController.h"

int main(int argc, char **argv)
{
    QCoreApplication::setOrganizationName("QM_modules");
    QGuiApplication app(argc, argv);

    PlayerController *playerController = new PlayerController(&app);
    qmlRegisterSingletonInstance("Controller", 1, 0, "PlayerController", playerController);

    AudioSearchModel *audioSearchModel = new AudioSearchModel(&app);
    qmlRegisterSingletonInstance("Searcher", 1, 0, "AudioSearchModel", audioSearchModel);

    QQmlApplicationEngine engine;
    engine.addImportPath(":/QML_modules/");

    const QUrl url("qrc:/QML_modules/SongPlayer/customModules/Main.qml");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated, &app, [url](QObject *obj, const QUrl &objUrl)
                     { if (!obj && url == objUrl) QCoreApplication::exit(-1); }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}