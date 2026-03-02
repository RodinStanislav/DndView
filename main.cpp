#include "main.h"

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    dnd::view::Backend backend;
    backend.loadProject();

    engine.rootContext()->setContextProperty("backend", &backend);

    engine.loadFromModule("DndView", "Main");

    return app.exec();
}
