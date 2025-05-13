TARGET = SerialPortDebugger
TEMPLATE = app
win32 {
    RC_ICONS = application.ico
}

QT       += core gui widgets serialport sql

CONFIG += c++11

SOURCES += \
    com_message.cpp \
    combo_box_item_delegate.cpp \
    command.cpp \
    commandscriptdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    savecommanddialog.cpp \
    utils.cpp

HEADERS += \
    com_message.hpp \
    combo_box_item_delegate.hpp \
    command.hpp \
    commandscriptdialog.hpp \
    mainwindow.hpp \
    savecommanddialog.hpp \
    utils.hpp

FORMS += \
    commandscriptdialog.ui \
    mainwindow.ui \
    savecommanddialog.ui

RESOURCES += \
    font.qrc \
    image.qrc
