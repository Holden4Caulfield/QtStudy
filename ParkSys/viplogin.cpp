#include "viplogin.h"
#include "ui_viplogin.h"

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
