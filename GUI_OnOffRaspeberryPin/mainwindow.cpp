#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegularExpression>

#define DEFAULT_PIN 7

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    int PIN;



    wiringPiSetup();
    pinMode(PIN, OUTPUT);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_on_clicked()
{
    int aPin = this->inputValue();
    digitalWrite(aPin, HIGH);
}

void MainWindow::on_btn_off_clicked()
{
    int aPin = this->inputValue();
    digitalWrite(aPin, LOW);
}

void MainWindow::on_btn_quit_clicked()
{
    QApplication::quit();
}

int MainWindow::inputValue()
{
    QString pinNumber = ui->lineEdit->text();

    QRegExp re("\\d");

    if (re.exactMatch(pinNumber))
        return pinNumber.toInt();
    else return DEFAULT_PIN;
}
