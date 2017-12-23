#include "cartopark.h"
#include "ui_cartopark.h"
#include<QMessageBox>
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
    QMessageBox::about(this,"ok","The car has in park");
   // this->show();
}
