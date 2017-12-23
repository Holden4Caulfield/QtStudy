#include "idsearch.h"
#include "ui_idsearch.h"

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
