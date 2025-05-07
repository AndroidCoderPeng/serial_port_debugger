cmake_minimum_required(VERSION 3.1)
project(serial_port_debugger)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if (WIN32)
    #set(CMAKE_PREFIX_PATH "D:/Dev/Qt/Qt5.12.12/5.12.12/mingw73_64")
    set(CMAKE_PREFIX_PATH "D:/Dev/Qt5.12.12/5.12.12/mingw73_64")
endif ()

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        SerialPort
        Sql
        REQUIRED)

set(UI_FILES ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.ui ${CMAKE_CURRENT_SOURCE_DIR}/savecommanddialog.ui)

qt5_wrap_ui(UI_HEADERS ${UI_FILES})

add_executable(serial_port_debugger main.cpp
        mainwindow.cpp
        combo_box_item_delegate.cpp
        savecommanddialog.cpp
        command.cpp
        utils.cpp
        com_message.cpp
)

# 指定 .qrc 文件路径
set(QRC_FILE ${CMAKE_CURRENT_SOURCE_DIR}/qt_res.qrc)

# 使用 Qt 的 rcc 工具将 .qrc 转换为 qrc_.cpp 文件
qt5_add_resources(QRC_CPP ${QRC_FILE}) # 如果是 Qt6，则改为 qt6_add_resources

# 将生成的资源文件链接到目标
target_sources(${PROJECT_NAME} PRIVATE ${QRC_CPP})

target_link_libraries(serial_port_debugger
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::SerialPort
        Qt5::Sql
)