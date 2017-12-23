#include "carleftdeque.h"
#include "ui_carleftdeque.h"
#include<QMessageBox>
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
    //QMessageBox::about(this,"车辆离开","该车辆已经离开停车场");
    QMessageBox::about(this,"ok","The car has come out the deque");
   // this->show();
}
