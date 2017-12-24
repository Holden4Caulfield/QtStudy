#include "chd.h"
#include "ui_chd.h"
#include"last.h"
CHd::CHd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CHd)
{
    ui->setupUi(this);
    ls=new Last(this);
}

CHd::~CHd()
{
    delete ui;
}

void CHd::on_pushButton_clicked()
{
        ls->show();
}
