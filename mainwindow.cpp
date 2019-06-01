#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "help.h"
#include "practice.h"
#include "play.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    play play;
    play.setModal(true);
    play.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    help help;
    help.setModal(true);
    help.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    practice practice;
    practice.setModal(true);
    practice.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    close();
}
