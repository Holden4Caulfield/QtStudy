#include "carleftpark.h"
#include "ui_carleftpark.h"
#include"QMessageBox"
CarLeftPark::CarLeftPark(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarLeftPark)
{
    ui->setupUi(this);
}

CarLeftPark::~CarLeftPark()
{
    delete ui;
}

void CarLeftPark::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void CarLeftPark::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"ok","The car has come out the park");
   // this->show();
}
