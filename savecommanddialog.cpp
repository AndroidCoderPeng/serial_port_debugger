//
// Created by Administrator on 2025/5/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_SaveCommandDialog.h" resolved

#include "savecommanddialog.hpp"
#include "ui_SaveCommandDialog.h"

SaveCommandDialog::SaveCommandDialog(QWidget *parent) : QDialog(parent), ui(new Ui::SaveCommandDialog) {
    ui->setupUi(this);
}

QString SaveCommandDialog::getInputValue() const {

}

SaveCommandDialog::~SaveCommandDialog() {
    delete ui;
}
