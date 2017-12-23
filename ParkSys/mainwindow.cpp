#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"information.h"
#include"vehiclemanage.h"
#include"viplogin.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inf=new Information(this);
    vehm=new VehicleManage(this);
    viplog=new VipLogin(this);
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

void MainWindow::on_VehMana_clicked()
{
    vehm->show();
    this->hide();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_LogVip_clicked()
{
    viplog->show();
    this->hide();
}

