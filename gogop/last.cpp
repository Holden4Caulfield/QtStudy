#include "last.h"
#include "ui_last.h"

Last::Last(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Last)
{
    ui->setupUi(this);
}

Last::~Last()
{
    delete ui;
}
