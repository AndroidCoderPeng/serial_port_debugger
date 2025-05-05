//
// Created by Administrator on 2025/5/2.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.hpp"
#include "ui_MainWindow.h"

#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>

#include "combo_box_item_delegate.hpp"

static void setComboxBoxStyle(const Ui::MainWindow *ui) {
    const auto materialComboBoxStyle = R"(
        QComboBox {
            background-color: #FFFFFF;
            color: #212121;
            border-radius: 4px;
            padding: 4px 6px;
            border: 1px solid #BDBDBD;
            selection-background-color: #6200EE;
            font: 9pt "微软雅黑";
        }

        QComboBox::down-arrow {
            image: url(:/ic_down_arrow.png);
            width: 16px;
            height: 16px;
        }

        QComboBox::drop-down {
            subcontrol-origin: padding;
            subcontrol-position: top right;
            width: 30px;
            border-left: 1px solid #BDBDBD;
            background-color: transparent;
        }

        QComboBox:hover {
            border-color: #757575;
        }

        QComboBox:pressed {
            background-color: #EEEEEE;
        }

        QComboBox:disabled {
            background-color: #E0E0E0;
            color: #9E9E9E;
            border-color: #BDBDBD;
        }

        QComboBox QAbstractItemView {
            outline: 0px;
            background-color: white;
            color: #212121;
            border: 1px solid #BDBDBD;
            selection-background-color: #E0E0E0;
            selection-color: #212121;
        }
    )";

    auto applyStyle = [=](QComboBox *comboBox) {
        comboBox->setStyleSheet(materialComboBoxStyle);
        comboBox->setItemDelegate(new ComboBoxItemDelegate(comboBox));
    };

    applyStyle(ui->portNameBox);
    applyStyle(ui->baudRateBox);
    applyStyle(ui->dataBitBox);
    applyStyle(ui->parityBitBox);
    applyStyle(ui->stopBitBox);
    applyStyle(ui->receiveDataBox);
}

static void setCheckBoxStyle(const Ui::MainWindow *ui) {
    const auto materialCheckBoxStyle = R"(
        QCheckBox {
            spacing: 5px;
            color: #212121;
            font: 10pt "微软雅黑";
        }

        QCheckBox::indicator {
            width: 12px;
            height: 12px;
            background-color: #FFFFFF;
            border: 1px solid #9E9E9E;
            border-radius: 4px;
            padding: 2px;
        }

        QCheckBox::indicator:checked {
            background-color: #6200EE;
            border: 1px solid #6200EE;
            image: url(:/ic_check.png);
        }

        QCheckBox::indicator:hover {
            border: 1px solid #757575;
        }

        QCheckBox::indicator:disabled {
            background-color: #E0E0E0;
            border: 1px solid #BDBDBD;
        }
    )";

    auto applyStyle = [=](QCheckBox *checkBox) {
        checkBox->setStyleSheet(materialCheckBoxStyle);
    };

    applyStyle(ui->timeCheckBox);
    applyStyle(ui->hexCheckBox);
}

static void initParam(const Ui::MainWindow *ui) {
    //获取电脑串口
    const auto &ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &port: ports) {
        ui->portNameBox->addItem(port.portName());
    }

    if (ui->portNameBox->count() == 0) {
        ui->portNameBox->addItem("No serial ports available");
    }

    // 设置波特率
    const char *baudRates[] = {
        "9600",
        "19200",
        "38400",
        "57600",
        "115200",
        "230400"
    };
    for (const QString &rate: baudRates) {
        ui->baudRateBox->addItem(rate);
    }

    // 设置数据位
    const char *dataBits[] = {
        "5",
        "6",
        "7",
        "8"
    };

    for (const QString &bit: dataBits) {
        ui->dataBitBox->addItem(bit);
    }
    // 设置默认数据位为 8
    ui->dataBitBox->setCurrentText("8");

    // 设置奇偶校验
    const char *parityBits[] = {
        "None",
        "Even",
        "Odd",
        "Mark",
        "Space"
    };

    for (const QString &parity: parityBits) {
        ui->parityBitBox->addItem(parity);
    }

    // 设置停止位
    const char *stopBits[] = {
        "1",
        "1.5",
        "2"
    };

    for (const QString &stopBit: stopBits) {
        ui->stopBitBox->addItem(stopBit);
    }

    // 设置文本编码方式
    const char *encodeTypes[] = {
        "UTF-8",
        "UTF-16",
        "GBK2312",
        "GBK"
    };

    for (const QString &encodeType: encodeTypes) {
        ui->receiveDataBox->addItem(encodeType);
    }
}

static void setDefaultButtonStyle(QPushButton *button) {
    const auto style = R"(
        QPushButton {
            background-color: #4CAF50;
            border-radius: 4px;
            color: white;
            padding: 5px;
            font: 10pt "微软雅黑"
        }

        QPushButton:hover {
            background-color: #388E3C
        }

        QPushButton:pressed {
            background-color: #2E7D32
        }

        QPushButton:disabled {
            background-color: #BDBDBD;
            color: #EEEEEE
        }
    )";
    button->setStyleSheet(style);
}

static void setOpenButtonStyle(QPushButton *button) {
    const auto style = R"(
        QPushButton {
            background-color: #D32F2F;
            border-radius: 4px;
            color: white;
            padding: 5px;
            font: 10pt "微软雅黑";
        }

        QPushButton:hover {
            background-color: #B71C1C;
        }

        QPushButton:pressed {
            background-color: #8C0000;
        }

        QPushButton:disabled {
            background-color: #BDBDBD;
            color: #EEEEEE;
        }
    )";
    button->setStyleSheet(style);
}

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    setComboxBoxStyle(ui);
    setCheckBoxStyle(ui);

    initParam(ui);

    connect(ui->openPortButton, &QPushButton::clicked, this, &MainWindow::onOpenPortButtonClicked);
}

void MainWindow::updateComboxState(const bool disabled) const {
    auto updateState = [=](QComboBox *comboBox) {
        comboBox->setDisabled(disabled);
    };

    updateState(ui->portNameBox);
    updateState(ui->baudRateBox);
    updateState(ui->dataBitBox);
    updateState(ui->parityBitBox);
    updateState(ui->stopBitBox);
}

void MainWindow::onOpenPortButtonClicked() {
    if (serialPort.isOpen()) {
        serialPort.close();
        ui->openPortButton->setText("打开串口");
        setDefaultButtonStyle(ui->openPortButton);
        updateComboxState(false);
        updateConnectState(false);
    } else {
        serialPort.setPortName(ui->portNameBox->currentText());
        bool ok;
        const int baudRate = ui->baudRateBox->currentText().toInt(&ok);
        if (ok) {
            serialPort.setBaudRate(baudRate);
        } else {
            qDebug() << "波特率转换失败，使用默认值 9600";
            serialPort.setBaudRate(9600);
        }

        const QString dataBitsStr = ui->dataBitBox->currentText();
        QSerialPort::DataBits dataBits;
        if (dataBitsStr == "5") {
            dataBits = QSerialPort::Data5;
        } else if (dataBitsStr == "6") {
            dataBits = QSerialPort::Data6;
        } else if (dataBitsStr == "7") {
            dataBits = QSerialPort::Data7;
        } else if (dataBitsStr == "8") {
            dataBits = QSerialPort::Data8;
        } else {
            dataBits = QSerialPort::UnknownDataBits;
        }
        serialPort.setDataBits(dataBits);

        const QString parityStr = ui->parityBitBox->currentText();
        QSerialPort::Parity parity;
        if (parityStr == "None") {
            parity = QSerialPort::NoParity;
        } else if (parityStr == "Even") {
            parity = QSerialPort::EvenParity;
        } else if (parityStr == "Odd") {
            parity = QSerialPort::OddParity;
        } else if (parityStr == "Mark") {
            parity = QSerialPort::MarkParity;
        } else if (parityStr == "Space") {
            parity = QSerialPort::SpaceParity;
        } else {
            parity = QSerialPort::UnknownParity;
        }
        serialPort.setParity(parity);

        const QString stopBitsStr = ui->stopBitBox->currentText();
        QSerialPort::StopBits stopBits;
        if (stopBitsStr == "1") {
            stopBits = QSerialPort::OneStop;
        } else if (stopBitsStr == "1.5") {
            stopBits = QSerialPort::OneAndHalfStop;
        } else if (stopBitsStr == "2") {
            stopBits = QSerialPort::TwoStop;
        } else {
            stopBits = QSerialPort::UnknownStopBits;
        }
        serialPort.setStopBits(stopBits);

        // 以读写模式打开串口
        if (serialPort.open(QIODevice::ReadWrite)) {
            ui->openPortButton->setText("关闭串口");
            setOpenButtonStyle(ui->openPortButton);
            updateComboxState(true);
            updateConnectState(true);
            // connect(&serialPort, &QSerialPort::readyRead, this, &MainWindow::read_SerialPort_Data);
        } else {
            QMessageBox::critical(this, "错误", serialPort.errorString());
        }
    }
}

void MainWindow::updateConnectState(const bool connected) const {
    QString materialLabelStyle;
    if (connected) {
        //已连接
        materialLabelStyle = R"(
            QLabel {
                background-color: #66BB6A;
                border-radius: 8px;
            }
        )";
    } else {
        //已断开
        materialLabelStyle = R"(
            QLabel {
                background-color: #EF5350;
                border-radius: 8px;
            }
        )";
    }
    ui->stateView->setStyleSheet(materialLabelStyle);
}


MainWindow::~MainWindow() {
    if (serialPort.isOpen()) {
        serialPort.close();
    }
    delete ui;
}
