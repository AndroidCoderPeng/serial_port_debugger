#include "commandscriptdialog.hpp"
#include "ui_commandscriptdialog.h"

#include <QDebug>
#include <QMessageBox>

CommandScriptDialog::CommandScriptDialog(QWidget *parent,
                                         const QList<Command> commands)
    : QDialog(parent), ui(new Ui::CommandScriptDialog) {
  ui->setupUi(this);

  setWindowTitle(QString("指令执行脚本（鼠标左键选择需要执行的指令）"));
  QIntValidator *validator = new QIntValidator(1, 99999);
  ui->timeLineEdit->setValidator(validator);

  commandItemModel = new QStandardItemModel(this);
  ui->listView->setModel(commandItemModel);

  int index = 1;
  for (const Command &cmd : commands) {
    QString itemText = QString("%1.【%2】%3")
                           .arg(index++)
                           .arg(cmd.getRemark())
                           .arg(cmd.getValue());
    QStandardItem *item = new QStandardItem(itemText);
    // 保存到Qt默认缓存体系，方便后面取用
    item->setData(cmd.getRemark(), Qt::UserRole);
    item->setData(cmd.getValue(), Qt::UserRole + 1);
    item->setEditable(false);
    commandItemModel->appendRow(item);
  }

  connect(ui->listView->selectionModel(),
          &QItemSelectionModel::selectionChanged, this,
          &CommandScriptDialog::onCommandSelectionChanged);

  connect(ui->confirmButton, &QPushButton::clicked, this,
          &CommandScriptDialog::onConfirmButtonClicked);
  connect(ui->cancelButton, &QPushButton::clicked, this,
          &CommandScriptDialog::onCancelButtonClicked);
}

void CommandScriptDialog::onCommandSelectionChanged(
    const QItemSelection &selected, const QItemSelection &deselected) {
  ui->listWidget->clear();
  QModelIndexList indexes = ui->listView->selectionModel()->selectedIndexes();
  const QModelIndexList &indexRef = indexes;
  for (const QModelIndex &index : indexRef) {
    // 处理选中的项
    QString remarkStr = index.data(Qt::UserRole).toString();      // 备注
    QString commandStr = index.data(Qt::UserRole + 1).toString(); // 指令值

    QListWidgetItem *item = new QListWidgetItem(remarkStr);
    // 缓存数据
    item->setData(Qt::UserRole, commandStr);
    ui->listWidget->addItem(item);
  }
}

void CommandScriptDialog::onConfirmButtonClicked() {
  // 获取listWidget里面的数据
  if (ui->listWidget->count() == 0) {
    QMessageBox::warning(this, "警告", "未选择任何指令");
    return;
  }

  for (int i = 0; i < ui->listWidget->count(); ++i) {
    QListWidgetItem *item = ui->listWidget->item(i);
    QString remark = item->text();                         // 备注
    QString command = item->data(Qt::UserRole).toString(); // 对应的指令值

    qDebug() << "备注：" << remark << " | 指令：" << command;
  }

  accept();
}

void CommandScriptDialog::onCancelButtonClicked() { close(); }

CommandScriptDialog::~CommandScriptDialog() { delete ui; }
