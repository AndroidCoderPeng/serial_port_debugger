/********************************************************************************
** Form generated from reading UI file 'savecommanddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECOMMANDDIALOG_H
#define UI_SAVECOMMANDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveCommandDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *commandValueView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *remarkValueView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveCommandButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SaveCommandDialog)
    {
        if (SaveCommandDialog->objectName().isEmpty())
            SaveCommandDialog->setObjectName(QString::fromUtf8("SaveCommandDialog"));
        SaveCommandDialog->resize(400, 200);
        layoutWidget = new QWidget(SaveCommandDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 24, 341, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(64, 0));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label);

        commandValueView = new QLineEdit(layoutWidget);
        commandValueView->setObjectName(QString::fromUtf8("commandValueView"));
        commandValueView->setClearButtonEnabled(true);

        horizontalLayout->addWidget(commandValueView);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(64, 0));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_2);

        remarkValueView = new QLineEdit(layoutWidget);
        remarkValueView->setObjectName(QString::fromUtf8("remarkValueView"));
        remarkValueView->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(remarkValueView);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        saveCommandButton = new QPushButton(layoutWidget);
        saveCommandButton->setObjectName(QString::fromUtf8("saveCommandButton"));
        saveCommandButton->setMinimumSize(QSize(90, 0));
        saveCommandButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#2196F3;border-radius:4px;color:white;padding:5px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPushButton:hover {background-color:#1E88E5}\n"
"QPushButton:pressed {background-color:#1976D2}\n"
"QPushButton:disabled {background-color:#BDBDBD;color:#EEEEEE}"));

        horizontalLayout_3->addWidget(saveCommandButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(90, 0));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#FF9800;border-radius:4px;color:white;padding:5px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPushButton:hover {background-color:#F57C00}\n"
"QPushButton:pressed {background-color:#EF6C00}\n"
"QPushButton:disabled {background-color:#BDBDBD;color:#EEEEEE}"));

        horizontalLayout_3->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(SaveCommandDialog);

        QMetaObject::connectSlotsByName(SaveCommandDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveCommandDialog)
    {
        SaveCommandDialog->setWindowTitle(QApplication::translate("SaveCommandDialog", "\346\267\273\345\212\240\346\211\251\345\261\225\346\214\207\344\273\244", nullptr));
        label->setText(QApplication::translate("SaveCommandDialog", "\346\214\207\344\273\244\345\200\274", nullptr));
        commandValueView->setText(QString());
        commandValueView->setPlaceholderText(QApplication::translate("SaveCommandDialog", "\350\257\267\350\276\223\345\205\24516\350\277\233\345\210\266\346\240\274\345\274\217\347\232\204\346\214\207\344\273\244", nullptr));
        label_2->setText(QApplication::translate("SaveCommandDialog", "\345\244\207\346\263\250", nullptr));
        remarkValueView->setText(QString());
        remarkValueView->setPlaceholderText(QApplication::translate("SaveCommandDialog", "\345\217\257\351\200\211", nullptr));
        saveCommandButton->setText(QApplication::translate("SaveCommandDialog", "\344\277\235\345\255\230", nullptr));
        cancelButton->setText(QApplication::translate("SaveCommandDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveCommandDialog: public Ui_SaveCommandDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECOMMANDDIALOG_H
