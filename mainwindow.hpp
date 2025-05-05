//
// Created by Administrator on 2025/5/2.
//

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>


QT_BEGIN_NAMESPACE

namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QMainWindow *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    bool is_opened = false;

    void onOpenPortButtonClicked();
};


#endif //MAINWINDOW_HPP
