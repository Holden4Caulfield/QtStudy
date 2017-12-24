#include "cartopark.h"
#include "ui_cartopark.h"
#include<QMessageBox>
#include"vehiclemanage.h"
CarToPark::CarToPark(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarToPark)
{
    ui->setupUi(this);
}

CarToPark::~CarToPark()
{
    delete ui;
}

void CarToPark::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void CarToPark::on_pushButton_2_clicked()
{
    VehicleManage *m=(VehicleManage *)parentWidget();
    QString sd=ui->lineEdit->text();
    QString sb=ui->lineEdit_2->text();
    int l=sb.toInt();
    m->car_to_Park_c(sd,l);
   // this->show();
}
