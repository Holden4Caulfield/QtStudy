#ifndef INFORMATION_H
#define INFORMATION_H

#include"head.h"
#include <QMainWindow>
#include"searchtime.h"
#include"idsearch.h"
namespace Ui {
class Information;
}

class Information : public QMainWindow
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = 0);
    ~Information();

private slots:
    void on_pushButton_clicked();

   void on_pushButton_2_clicked();

   void on_pushButton_3_clicked();

private:
    Ui::Information *ui;

};

#endif // INFORMATION_H
