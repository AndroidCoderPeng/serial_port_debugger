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
  QTableWidgetItem *commandItem = nullptr;
  QTableWidgetItem *remarkItem = nullptr;
  QList<ComMessage> history;
  QTimer *timer = nullptr;

  void initDatabase();

  void updateComboxState(bool disabled) const;

  void onOpenPortButtonClicked();

  void updateConnectState(bool connected) const;

  void onReceivedData();

  void onRefreshButtonClicked();

  void onSaveDataButtonClicked();

  void onClearDataButtonClicked();

  void onAddCommandButtonClicked();

  void updateCommandTableWidget(const qint16 &id, const QString &command, const QString &remark);

  void showTableWidgetContextMenu(const QPoint &pos);

  void onCustomAction(const QTableWidgetItem *item, const QString &message);

  void onSendCommandButtonClicked();

  void sendCommand(const QString &command);

  void updateComMessageLog(const QByteArray &data, const QString &direction);

  void onTimeCheckBoxStateChanged(const qint16 &state);

  void uncheckTimeCheckBox();

  void onEncodeComboxChanged(const QString &text);

  void refreshComMessageView();
};

#endif // MAINWINDOW_HPP
