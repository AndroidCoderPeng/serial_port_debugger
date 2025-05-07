/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *comMessageView;
    QTextEdit *userInputView;
    QPushButton *sendDataButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QPushButton *openPortButton;
    QComboBox *dataBitBox;
    QComboBox *baudRateBox;
    QLabel *label_5;
    QComboBox *stopBitBox;
    QLabel *label_2;
    QComboBox *parityBitBox;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QLabel *stateView;
    QComboBox *portNameBox;
    QLabel *label_3;
    QPushButton *addCommandButton;
    QLabel *label;
    QPushButton *clearDataButton;
    QPushButton *saveDataButton;
    QPushButton *refreshButton;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *timeCheckBox;
    QLineEdit *timeLineEdit;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QComboBox *receiveDataBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *hexCheckBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comMessageView = new QPlainTextEdit(centralwidget);
        comMessageView->setObjectName(QString::fromUtf8("comMessageView"));
        comMessageView->setGeometry(QRect(280, 10, 511, 481));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        comMessageView->setFont(font);
        comMessageView->setStyleSheet(QString::fromUtf8("QPlainTextEdit {background-color:#FFFFFF;color:#212121;border-radius:4px;padding:0px 3px;border:1px solid #BDBDBD;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPlainTextEdit:focus {border:1px solid #6200EE}\n"
"QPlainTextEdit:hover {border-color:#757575}\n"
"QPlainTextEdit:disabled {background-color:#E0E0E0;color:#9E9E9E;border-color:#BDBDBD}\n"
"QScrollBar:vertical {background-color:#F5F5F5;width:12px;margin:0px 0px 0px 0px}\n"
"QScrollBar::handle:vertical {background-color:#BDBDBD;min-height:20px;border-radius:6px}\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {background-color:transparent}\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {background-color:transparent}"));
        userInputView = new QTextEdit(centralwidget);
        userInputView->setObjectName(QString::fromUtf8("userInputView"));
        userInputView->setGeometry(QRect(280, 500, 430, 60));
        userInputView->setStyleSheet(QString::fromUtf8("QTextEdit {border:1px solid #757575;border-radius:4px;padding:0px 3px;background-color:white;color:#212121;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QTextEdit:hover {border-color:#6200EE}\n"
"QTextEdit:focus {border-color:#6200EE}\n"
"QTextEdit:disabled {background-color:#E0E0E0;color:#BDBDBD;border-color:#BDBDBD}"));
        sendDataButton = new QPushButton(centralwidget);
        sendDataButton->setObjectName(QString::fromUtf8("sendDataButton"));
        sendDataButton->setGeometry(QRect(720, 500, 71, 60));
        sendDataButton->setFont(font);
        sendDataButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#6200EE;border-radius:4px;color:white;padding:5px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPushButton:hover {background-color:#3700B3}\n"
"QPushButton:pressed {background-color:#1A005E}\n"
"QPushButton:disabled {background-color:#9E9E9E;color:#EEEEEE}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 258, 581));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        openPortButton = new QPushButton(layoutWidget);
        openPortButton->setObjectName(QString::fromUtf8("openPortButton"));
        openPortButton->setFont(font);
        openPortButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#6200EE;border-radius:4px;color:white;padding:5px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPushButton:hover {background-color:#3700B3}\n"
"QPushButton:pressed {background-color:#1A005E}\n"
"QPushButton:disabled {background-color:#9E9E9E;color:#EEEEEE}"));

        gridLayout->addWidget(openPortButton, 5, 2, 1, 3);

        dataBitBox = new QComboBox(layoutWidget);
        dataBitBox->setObjectName(QString::fromUtf8("dataBitBox"));
        QFont font1;
        font1.setPointSize(11);
        dataBitBox->setFont(font1);

        gridLayout->addWidget(dataBitBox, 2, 2, 1, 3);

        baudRateBox = new QComboBox(layoutWidget);
        baudRateBox->setObjectName(QString::fromUtf8("baudRateBox"));
        baudRateBox->setFont(font1);

        gridLayout->addWidget(baudRateBox, 1, 2, 1, 3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        stopBitBox = new QComboBox(layoutWidget);
        stopBitBox->setObjectName(QString::fromUtf8("stopBitBox"));
        stopBitBox->setFont(font1);

        gridLayout->addWidget(stopBitBox, 4, 2, 1, 3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        parityBitBox = new QComboBox(layoutWidget);
        parityBitBox->setObjectName(QString::fromUtf8("parityBitBox"));
        parityBitBox->setFont(font1);

        gridLayout->addWidget(parityBitBox, 3, 2, 1, 3);

        tableWidget = new QTableWidget(layoutWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {background-color:#FFFFFF;gridline-color:#E0E0E0;color:#212121;border:1px solid #E0E0E0;border-radius:8px;outline:0px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QTableWidget::item {padding:6px 5px}\n"
"QTableWidget::item:selected {background-color:#E3F2FD;color:#1565C0}\n"
"QHeaderView::section {background-color:#F5F5F5;padding:4px;border:none;border-bottom:1px solid #E0E0E0;color:#424242}\n"
"QScrollBar:vertical {background-color:#FAFAFA;width:10px;margin:0px 0px 0px 0px}\n"
"QScrollBar::handle:vertical {background-color:#E0E0E0;min-height:20px;border-radius:5px}\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {background-color:none}\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {background-color:none}"));
        tableWidget->setColumnCount(2);

        gridLayout->addWidget(tableWidget, 9, 0, 1, 5);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        stateView = new QLabel(layoutWidget);
        stateView->setObjectName(QString::fromUtf8("stateView"));
        stateView->setMinimumSize(QSize(16, 16));
        stateView->setMaximumSize(QSize(16, 16));
        stateView->setStyleSheet(QString::fromUtf8("QLabel {background-color:#EF5350;border-radius:8px}"));

        gridLayout->addWidget(stateView, 5, 1, 1, 1);

        portNameBox = new QComboBox(layoutWidget);
        portNameBox->setObjectName(QString::fromUtf8("portNameBox"));
        portNameBox->setFont(font1);

        gridLayout->addWidget(portNameBox, 0, 2, 1, 3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        addCommandButton = new QPushButton(layoutWidget);
        addCommandButton->setObjectName(QString::fromUtf8("addCommandButton"));
        addCommandButton->setMinimumSize(QSize(24, 24));
        addCommandButton->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        addCommandButton->setFont(font2);
        addCommandButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#8BC34A;border-radius:12px;color:white;min-width:24px;max-width:24px}\n"
"QPushButton:hover {background-color:#7CB342}\n"
"QPushButton:pressed {background-color:#689F38}\n"
"QPushButton:disabled {background-color:#BDBDBD;color:#EEEEEE}"));

        gridLayout->addWidget(addCommandButton, 8, 4, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignLeft);

        clearDataButton = new QPushButton(layoutWidget);
        clearDataButton->setObjectName(QString::fromUtf8("clearDataButton"));
        clearDataButton->setFont(font);
        clearDataButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#FF9800;border-radius:4px;color:white;padding:5px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPushButton:hover {background-color:#F57C00}\n"
"QPushButton:pressed {background-color:#EF6C00}\n"
"QPushButton:disabled {background-color:#BDBDBD;color:#EEEEEE}"));

        gridLayout->addWidget(clearDataButton, 7, 3, 1, 2);

        saveDataButton = new QPushButton(layoutWidget);
        saveDataButton->setObjectName(QString::fromUtf8("saveDataButton"));
        saveDataButton->setFont(font);
        saveDataButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#2196F3;border-radius:4px;color:white;padding:5px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPushButton:hover {background-color:#1E88E5}\n"
"QPushButton:pressed {background-color:#1976D2}\n"
"QPushButton:disabled {background-color:#BDBDBD;color:#EEEEEE}"));

        gridLayout->addWidget(saveDataButton, 7, 2, 1, 1);

        refreshButton = new QPushButton(layoutWidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color:#FF5722;border-radius:4px;color:white;padding:5px;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QPushButton:hover {background-color:#E64A19}\n"
"QPushButton:pressed {background-color:#BF360C}\n"
"QPushButton:disabled {background-color:#BDBDBD;color:#EEEEEE}"));

        gridLayout->addWidget(refreshButton, 7, 0, 1, 2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_7, 8, 0, 1, 4);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(280, 570, 511, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        timeCheckBox = new QCheckBox(layoutWidget1);
        timeCheckBox->setObjectName(QString::fromUtf8("timeCheckBox"));
        timeCheckBox->setFont(font1);

        horizontalLayout->addWidget(timeCheckBox);

        timeLineEdit = new QLineEdit(layoutWidget1);
        timeLineEdit->setObjectName(QString::fromUtf8("timeLineEdit"));
        timeLineEdit->setMinimumSize(QSize(50, 0));
        timeLineEdit->setMaximumSize(QSize(50, 16777215));
        timeLineEdit->setFont(font);
        timeLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {border:1px solid #757575;border-radius:4px;padding:1px 3px;background-color:white;color:#212121;font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\"}\n"
"QLineEdit:hover {border-color:#6200EE}\n"
"QLineEdit:focus {border-color:#6200EE}\n"
"QLineEdit:disabled {background-color:#E0E0E0;color:#BDBDBD;border-color:#BDBDBD}\n"
"QLineEdit::placeholder {color:#757575}"));
        timeLineEdit->setMaxLength(5);
        timeLineEdit->setReadOnly(false);

        horizontalLayout->addWidget(timeLineEdit);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_6);

        receiveDataBox = new QComboBox(layoutWidget1);
        receiveDataBox->setObjectName(QString::fromUtf8("receiveDataBox"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        receiveDataBox->setFont(font3);
        receiveDataBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #FFFFFF;\n"
"    color: #212121;\n"
"    border-radius: 4px;\n"
"    padding: 1px 6px;\n"
"    border: 1px solid #BDBDBD;\n"
"    selection-background-color: #6200EE;\n"
"    font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/ic_down_arrow.png);\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 30px;\n"
"    border-left: 1px solid #BDBDBD;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: #757575;\n"
"}\n"
"\n"
"QComboBox:pressed {\n"
"    background-color: #EEEEEE;\n"
"}\n"
"\n"
"QComboBox:disabled {\n"
"    background-color: #E0E0E0;\n"
"    color: #9E9E9E;\n"
"    border-color: #BDBDBD;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px;\n"
"    background-color: white;\n"
"    color: #212121;\n"
"    border: 1px solid #"
                        "BDBDBD;\n"
"    selection-background-color: #E0E0E0;\n"
"    selection-color: #212121;\n"
"}\n"
""));

        horizontalLayout->addWidget(receiveDataBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        hexCheckBox = new QCheckBox(layoutWidget1);
        hexCheckBox->setObjectName(QString::fromUtf8("hexCheckBox"));
        hexCheckBox->setFont(font1);
        hexCheckBox->setChecked(true);

        horizontalLayout->addWidget(hexCheckBox);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        sendDataButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\347\212\266\346\200\201", nullptr));
        openPortButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        stateView->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        addCommandButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        clearDataButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        saveDataButton->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        refreshButton->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\211\251\345\261\225\346\214\207\344\273\244\357\274\210\345\217\214\345\207\273\346\237\245\347\234\213\345\256\214\346\225\264\346\214\207\344\273\244\357\274\211", nullptr));
        timeCheckBox->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        timeLineEdit->setText(QApplication::translate("MainWindow", "1000", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\346\224\266\345\217\221\345\214\272\347\274\226\347\240\201", nullptr));
        hexCheckBox->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
