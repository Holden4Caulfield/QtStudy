#include "carleftdeque.h"
#include "ui_carleftdeque.h"
#include<QMessageBox>
#include"vehiclemanage.h"
CarLeftDeque::CarLeftDeque(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarLeftDeque)
{
    ui->setupUi(this);
}

CarLeftDeque::~CarLeftDeque()
{
    delete ui;
}

void CarLeftDeque::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void CarLeftDeque::on_pushButton_2_clicked()
{
    VehicleManage *m=(VehicleManage *)parentWidget();
    QString sd=ui->lineEdit->text();
    QString sb=ui->lineEdit_2->text();
    int l=sb.toInt();
    m->car_left_deque_c(sd,l);

}
