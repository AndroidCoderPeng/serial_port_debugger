#include <QApplication>
#include <QScreen>

#include "mainwindow.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow mainWindow;

    const QRect screenRect = QApplication::primaryScreen()->availableGeometry();
    const int screenWidth = screenRect.width();
    const int screenHeight = screenRect.height();
    const int x = (screenWidth - mainWindow.width()) / 2;
    const int y = (screenHeight - mainWindow.height()) / 2;

    mainWindow.move(x, y);
    mainWindow.show();
    return QApplication::exec();
}
