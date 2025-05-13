//
// Created by Administrator on 2025/5/5.
//

#include "savecommanddialog.hpp"
#include "ui_savecommanddialog.h"

#include <QMessageBox>

#include "utils.hpp"

SaveCommandDialog::SaveCommandDialog(QWidget *parent,
                                     const QString &defaultValue,
                                     const QString &defaultRemark)
    : QDialog(parent), ui(new Ui::SaveCommandDialog) {
  ui->setupUi(this);

  // 如果有初始值，则设置为编辑模式
  if (!defaultValue.isEmpty()) {
    ui->commandValueView->setPlainText(defaultValue);
    ui->remarkValueView->setText(defaultRemark);
    setWindowTitle(QString("编辑扩展指令"));
  }

  connect(ui->saveCommandButton, &QPushButton::clicked, this,
          &SaveCommandDialog::onSaveCommandButtonClicked);
  connect(ui->cancelButton, &QPushButton::clicked, this,
          &SaveCommandDialog::onCancelButtonClicked);
}

void SaveCommandDialog::onSaveCommandButtonClicked() {
  const QString commandValue = ui->commandValueView->toPlainText();
  if (commandValue.isEmpty()) {
    QMessageBox::warning(this, "提示", "请输入指令值为空");
    return;
  }

  if (!Utils::isHexString(commandValue)) {
    QMessageBox::warning(this, "提示", "请输入合法的十六进制指令值");
    return;
  }

  accept();
}

void SaveCommandDialog::onCancelButtonClicked() { close(); }

Command SaveCommandDialog::getInputValue() const {
  Command command;
  // 返回输入的值，并转换为大写，并添加空格 格式化
  const auto hex = ui->commandValueView->toPlainText().toUpper();
  if (hex.contains(" ")) {
    command.setValue(hex);
  } else {
    QStringList parts;
    for (int i = 0; i < hex.length(); i += 2) {
      parts << hex.mid(i, 2);
    }
    const QString value = parts.join(" ");
    command.setValue(value);
  }

  const auto remark = ui->remarkValueView->text();
  command.setRemark(remark);
  return command;
}

SaveCommandDialog::~SaveCommandDialog() { delete ui; }
