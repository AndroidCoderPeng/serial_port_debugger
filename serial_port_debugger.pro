TARGET = SerialPortDebugger
TEMPLATE = app

QT       += core gui widgets serialport sql

CONFIG += c++11

SOURCES += \
    com_message.cpp \
    combo_box_item_delegate.cpp \
    command.cpp \
    main.cpp \
    mainwindow.cpp \
    savecommanddialog.cpp \
    utils.cpp

HEADERS += \
    com_message.hpp \
    combo_box_item_delegate.hpp \
    command.hpp \
    mainwindow.hpp \
    savecommanddialog.hpp \
    utils.hpp

FORMS += \
    mainwindow.ui \
    savecommanddialog.ui

RESOURCES += \
    image.qrc \
    SerialPortDebugger.desktop \
    SerialPortDebugger.png
