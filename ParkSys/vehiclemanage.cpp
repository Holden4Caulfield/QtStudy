#include "vehiclemanage.h"
#include "ui_vehiclemanage.h"

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
