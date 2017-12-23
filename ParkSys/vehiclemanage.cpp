#include "vehiclemanage.h"
#include "ui_vehiclemanage.h"
#include"cartodeque.h"
#include"cartopark.h"
#include"carleftdeque.h"
#include"carleftpark.h"
VehicleManage::VehicleManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VehicleManage)
{
    ui->setupUi(this);
    ctp=new CarToPark(this);
    ctd=new CarToDeque(this);
    cld=new CarLeftDeque(this);
    clp=new CarLeftPark(this);
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
    ctd->show();
    this->hide();
}

void VehicleManage::on_carleftD_clicked()
{
    cld->show();
    this->hide();
}

void VehicleManage::on_cartoP_clicked()
{
    ctp->show();
    this->hide();
}

void VehicleManage::on_carleftP_clicked()
{
    clp->show();
    this->hide();
}
