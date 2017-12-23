#include "viplogin.h"
#include "ui_viplogin.h"
#include<QMessageBox>
VipLogin::VipLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VipLogin)
{
    ui->setupUi(this);
}

VipLogin::~VipLogin()
{
    delete ui;
}

void VipLogin::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void VipLogin::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"ok","Now you are a vip");
}
