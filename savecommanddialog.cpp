//
// Created by Administrator on 2025/5/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_SaveCommandDialog.h" resolved

#include "savecommanddialog.hpp"
#include "ui_SaveCommandDialog.h"

#include <QMessageBox>
#include <QRegularExpression>

static void setLineEditStyle(const Ui::SaveCommandDialog *ui) {
    const auto materialLineEditStyle = R"(
        QLineEdit {
            border: 1px solid #757575;
            border-radius: 4px;
            padding: 3px;
            background-color: white;
            color: #212121;
            font: 10pt "微软雅黑"
        }

        QLineEdit:hover {
            border-color: #6200EE
        }

        QLineEdit:focus {
            border-color: #6200EE
        }

        QLineEdit:disabled {
            background-color: #E0E0E0;
            color: #BDBDBD;
            border-color: #BDBDBD
        }

        QLineEdit::placeholder {
            color: #757575
        }
    )";

    auto applyStyle = [=](QLineEdit *lineEdit) {
        lineEdit->setStyleSheet(materialLineEditStyle);
    };

    applyStyle(ui->commandValueView);
    applyStyle(ui->remarkValueView);
}

SaveCommandDialog::SaveCommandDialog(QWidget *parent) : QDialog(parent), ui(new Ui::SaveCommandDialog) {
    ui->setupUi(this);

    setLineEditStyle(ui);

    connect(ui->saveCommandButton, &QPushButton::clicked, this, &SaveCommandDialog::onSaveCommandButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &SaveCommandDialog::onCancelButtonClicked);
}

void SaveCommandDialog::onSaveCommandButtonClicked() {
    const QString commandValue = ui->commandValueView->text();
    if (commandValue.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入指令值为空");
        return;
    }

    const QRegularExpression regex("^([0-9A-Fa-f]{2})+$");
    if (!regex.match(commandValue).hasMatch()) {
        QMessageBox::warning(this, "提示", "请输入合法的十六进制指令值");
        return;
    }

    accept();
}

void SaveCommandDialog::onCancelButtonClicked() {
    close();
}

Command SaveCommandDialog::getInputValue() const {
    // 返回输入的值，并转换为大写，并添加空格 格式化
    const auto value = ui->commandValueView->text().toUpper();
    const auto remark = ui->remarkValueView->text();

    Command command;
    command.setValue(value);
    command.setRemark(remark);
    return command;
}

SaveCommandDialog::~SaveCommandDialog() {
    delete ui;
}
