#include "mainwindow.h"
#include "./ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_lineEdit_returnPressed()
{
    QString str = ui -> lineEdit -> text();
    NewValidator valid("^[\\w_]{6,64}@gmail.com$");
    if (valid.isValid(str))
    {
        ui -> label -> setText("e-mail може існувати");
    }
    else
    {
        ui -> label -> setText("e-mail не може існувати");
    }
}

