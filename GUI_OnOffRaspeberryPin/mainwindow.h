#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "wiringPi.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int inputValue();

private slots:
    void on_btn_on_clicked();

    void on_btn_off_clicked();

    void on_btn_quit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
