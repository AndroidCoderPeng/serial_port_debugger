//
// Created by Administrator on 2025/5/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_SaveCommandDialog.h" resolved

#include "savecommanddialog.hpp"
#include "ui_SaveCommandDialog.h"

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
}

QString SaveCommandDialog::getInputValue() const {
}

SaveCommandDialog::~SaveCommandDialog() {
    delete ui;
}
