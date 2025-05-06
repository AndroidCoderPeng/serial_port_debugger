//
// Created by Administrator on 2025/5/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_SaveCommandDialog.h" resolved

#include "savecommanddialog.hpp"
#include "ui_SaveCommandDialog.h"

#include <QMessageBox>

#include "utils.hpp"

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

SaveCommandDialog::SaveCommandDialog(QWidget *parent, const QString &defaultValue, const QString &defaultRemark)
    : QDialog(parent), ui(new Ui::SaveCommandDialog) {
    ui->setupUi(this);

    setLineEditStyle(ui);

    // 如果有初始值，则设置为编辑模式
    if (!defaultValue.isEmpty()) {
        ui->commandValueView->setText(defaultValue);
        ui->remarkValueView->setText(defaultRemark);
        setWindowTitle("编辑扩展指令");
    }

    connect(ui->saveCommandButton, &QPushButton::clicked, this, &SaveCommandDialog::onSaveCommandButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &SaveCommandDialog::onCancelButtonClicked);
}

void SaveCommandDialog::onSaveCommandButtonClicked() {
    const QString commandValue = ui->commandValueView->text();
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

void SaveCommandDialog::onCancelButtonClicked() {
    close();
}

Command SaveCommandDialog::getInputValue() const {
    Command command;
    // 返回输入的值，并转换为大写，并添加空格 格式化
    const auto hex = ui->commandValueView->text().toUpper();
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

SaveCommandDialog::~SaveCommandDialog() {
    delete ui;
}
