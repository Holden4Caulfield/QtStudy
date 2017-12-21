#include "increase.h"
#include "ui_increase.h"

Increase::Increase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Increase)
{
    ui->setupUi(this);
}

Increase::~Increase()
{
    delete ui;
}
