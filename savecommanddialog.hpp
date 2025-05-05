//
// Created by Administrator on 2025/5/5.
//

#ifndef SAVECOMMANDDIALOG_HPP
#define SAVECOMMANDDIALOG_HPP

#include <QDialog>

#include "command.hpp"

QT_BEGIN_NAMESPACE

namespace Ui {
    class SaveCommandDialog;
}

QT_END_NAMESPACE

class SaveCommandDialog : public QDialog {
    Q_OBJECT

public:
    explicit SaveCommandDialog(QWidget *parent = nullptr);

    ~SaveCommandDialog() override;

    void onSaveCommandButtonClicked();

    void onCancelButtonClicked();

    Command getInputValue() const;

private:
    Ui::SaveCommandDialog *ui;
};


#endif //SAVECOMMANDDIALOG_HPP
