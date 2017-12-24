#include "achl.h"
#include "ui_achl.h"
#include"son.h"
Achl::Achl(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Achl)
{
    ui->setupUi(this);
}

Achl::~Achl()
{
    delete ui;
}

void Achl::on_pushButton_clicked()
{
    son *m=(son *)parentWidget();
    QString sd=ui->lineEdit->text();
    m->input_s(sd);
}
