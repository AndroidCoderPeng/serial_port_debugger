//
// Created by Administrator on 2025/5/2.
//

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QSerialPort>
#include <QSqlQuery>
#include <QTableWidgetItem>

#include "com_message.hpp"

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
    QSqlQuery *sqlQuery;
    QTableWidgetItem *commandItem;
    QTableWidgetItem *remarkItem;
    QList<ComMessage> history;

    void initDatabase();

    void updateComboxState(bool disabled) const;

    void onOpenPortButtonClicked();

    void updateConnectState(bool connected) const;

    void onReceivedData();

    void onEncodeComboxChanged(const QString &text);

    void onSaveDataButtonClicked();

    void onClearDataButtonClicked();

    void onAddCommandButtonClicked();

    void updateCommandTableWidget(const QString &command, const QString &remark);

    void onCommandItemDoubleClicked(const QTableWidgetItem *item);

    void showTableWidgetContextMenu(const QPoint &pos);

    void onCustomAction(const QTableWidgetItem *item, const QString &message);

    void onSendCommandButtonClicked();

    void updateComMessageLog(const QByteArray &data, const QString &direction);

    void onTimeCheckBoxStateChanged(const qint16 &state);
};


#endif //MAINWINDOW_HPP
