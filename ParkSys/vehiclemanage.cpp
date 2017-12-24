#include "vehiclemanage.h"
#include "ui_vehiclemanage.h"
#include"mainwindow.h"
#include"cartodeque.h"
#include"cartopark.h"
#include"carleftdeque.h"
#include"carleftpark.h"
VehicleManage::VehicleManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VehicleManage)
{
    ui->setupUi(this);
}

VehicleManage::~VehicleManage()
{
    delete ui;
}

void VehicleManage::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void VehicleManage::on_cartoD_clicked()
{
    CarToDeque *ctd=new CarToDeque(this);
    ctd->show();
    this->hide();
}

void VehicleManage::on_carleftD_clicked()
{
    CarLeftDeque *cld=new CarLeftDeque(this);
    cld->show();
    this->hide();
}

void VehicleManage::on_cartoP_clicked()
{
    CarToPark *ctp=new CarToPark(this);
    ctp->show();
    this->hide();
}

void VehicleManage::on_carleftP_clicked()
{
     CarLeftPark *clp=new CarLeftPark(this);
    clp->show();
    this->hide();
}

void VehicleManage::car_to_deque_c(QString s, int location)
{
    MainWindow *m=(MainWindow *)parentWidget();
    m->car_to_deque(s,location);
}

void VehicleManage::car_left_deque_c(QString s, int location)
{
    MainWindow *m=(MainWindow *)parentWidget();
    m->car_left_deque(s,location);
}
