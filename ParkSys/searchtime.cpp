#include "searchtime.h"
#include "ui_searchtime.h"

SearchTime::SearchTime(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchTime)
{
    ui->setupUi(this);
}

SearchTime::~SearchTime()
{
    delete ui;
}

void SearchTime::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}
