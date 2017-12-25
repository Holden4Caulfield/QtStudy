#include "idsearch.h"
#include "ui_idsearch.h"
#include"information.h"
#include<iterator>
#include<QMessageBox>
IDSearch::IDSearch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IDSearch)
{
    ui->setupUi(this);
}

IDSearch::~IDSearch()
{
    delete ui;
}

void IDSearch::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void IDSearch::on_pushButton_2_clicked()
{
    Information *inf=(Information *)parentWidget();
    QString s=ui->lineEdit->text();
    QString carID=inf->his_car_c(s).ID;
    QString l=QString::number(inf->his_car_c(s).locate,10);
    if(carID=="nocar")
    {
        QMessageBox::about(this,"sorry","no such car");
        this->show();

    }
    else
    {
        ui->lineEdit_2->setText(s+"  location :"+l);
    }
}

void IDSearch::on_pushButton_3_clicked()
{
    Information *inf=(Information *)parentWidget();
    QString s=ui->lineEdit->text();
    QString carID=inf->Now_car_c(s).ID;
    QString l=QString::number(inf->Now_car_c(s).locate,10);
    if(carID=="nocar")
    {
        QMessageBox::about(this,"sorry","no such car");
        this->show();

    }
    else
    {
        ui->lineEdit_2->setText(s+"  location :"+l);
    }
}
