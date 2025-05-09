#include <QApplication>
#include <QScreen>
#include <QFontDatabase>
#include <QIcon>

#include "mainwindow.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    int fontId = QFontDatabase::addApplicationFont(":/msyh.ttc");
    if (fontId != -1) {
        QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).at(0);
        QFont font(fontFamily);
        app.setFont(font);
    } else {
        qWarning("Failed to load font.");
    }

    MainWindow mainWindow;
    mainWindow.setWindowTitle("串口调试助手");
    mainWindow.setWindowIcon(QIcon(":/application.png"));

    const QRect screenRect = QApplication::primaryScreen()->availableGeometry();
    const int screenWidth = screenRect.width();
    const int screenHeight = screenRect.height();
    const int x = (screenWidth - mainWindow.width()) / 2;
    const int y = (screenHeight - mainWindow.height()) / 2;

    mainWindow.move(x, y);
    mainWindow.show();
    return QApplication::exec();
}
