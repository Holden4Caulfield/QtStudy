#include "cartodeque.h"
#include "ui_cartodeque.h"
#include"vehiclemanage.h"
#include<QMessageBox>
CarToDeque::CarToDeque(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarToDeque)
{
    ui->setupUi(this);
}

CarToDeque::~CarToDeque()
{
    delete ui;
}

void CarToDeque::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void CarToDeque::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"ok","The car has in deque");
    VehicleManage *m=(VehicleManage *)parentWidget();
    QString sd=ui->lineEdit->text();
    QString sb=ui->lineEdit_2->text();
    int l=sb.toInt();
    m->car_to_deque_c(sd,l);
}
