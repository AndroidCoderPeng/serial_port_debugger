//
// Created by Administrator on 2025/5/2.
//

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QSerialPort>

QT_BEGIN_NAMESPACE

namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QMainWindow *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QSerialPort serialPort;

    void updateComboxState(bool disabled) const;

    void onOpenPortButtonClicked();

    void updateConnectState(bool connected) const;
};


#endif //MAINWINDOW_HPP
