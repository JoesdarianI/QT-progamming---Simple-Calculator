#include "mainwindow.h"
#include "ui_mainwindow.h"

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

double MainWindow :: getLineEditNum()
{
    num1 = ui->bilangan1->text().toDouble();
    num2 = ui->bilangan2->text().toDouble();
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->radioButtonPlus->isChecked()){
        getLineEditNum();
        result = num1+num2;
        ui->hasil->setText(QString::number(result));
        result = 0;
    }
    if(ui->radioButtonMin->isChecked()){
        getLineEditNum();
        result = num1-num2;
        ui->hasil->setText(QString::number(result));
        result = 0;
    }
    if(ui->radioButtonMult->isChecked()){
        getLineEditNum();
        result = num1*num2;
        ui->hasil->setText(QString::number(result));
        result = 0;
    }
    if(ui->radioButtonDiv->isChecked()){
        getLineEditNum();
        result = num1/num2;
        ui->hasil->setText(QString::number(result));
        result = 0;
    }
}

void MainWindow::on_close_clicked()
{
    close();
}

