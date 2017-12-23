#include "chd.h"
#include "ui_chd.h"

CHd::CHd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CHd)
{
    ui->setupUi(this);
}

CHd::~CHd()
{
    delete ui;
}
