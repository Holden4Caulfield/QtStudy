#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"information.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inf=new Information(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_InforSearch_clicked()
{
    //inf=new Information(this);
    inf->show();
    this->hide();
}
