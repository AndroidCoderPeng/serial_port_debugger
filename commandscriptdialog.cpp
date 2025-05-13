#include "commandscriptdialog.hpp"
#include "ui_commandscriptdialog.h"

CommandScriptDialog::CommandScriptDialog(QWidget *parent,
                                         const QList<Command> commands)
    : QDialog(parent), ui(new Ui::CommandScriptDialog) {
  ui->setupUi(this);

  setWindowTitle(QString("指令执行脚本（鼠标拖动指令项可设置指令执行顺序）"));

  int index = 1;
  for (const Command &cmd : commands) {
    QString itemText = QString("%1.【%2】%3")
                           .arg(index++)
                           .arg(cmd.getRemark())
                           .arg(cmd.getValue());

    // 创建 item 并添加到 listWidget
    QListWidgetItem *item = new QListWidgetItem(itemText);
    item->setData(Qt::UserRole, cmd.getId());
    ui->listWidget->addItem(item);
  }

  QIntValidator *validator = new QIntValidator(1, 99999);
  ui->timeLineEdit->setValidator(validator);

  connect(ui->confirmButton, &QPushButton::clicked, this,
          &CommandScriptDialog::onConfirmButtonClicked);
  connect(ui->cancelButton, &QPushButton::clicked, this,
          &CommandScriptDialog::onCancelButtonClicked);
}

void CommandScriptDialog::onConfirmButtonClicked() { accept(); }

void CommandScriptDialog::onCancelButtonClicked() { close(); }

CommandScriptDialog::~CommandScriptDialog() { delete ui; }
