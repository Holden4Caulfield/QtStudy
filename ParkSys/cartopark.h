#ifndef CARTOPARK_H
#define CARTOPARK_H

#include"head.h"
#include <QMainWindow>

//进入停车场

namespace Ui {
class CarToPark;
}

class CarToPark : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarToPark(QWidget *parent = 0);
    ~CarToPark();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CarToPark *ui;
};

#endif // CARTOPARK_H
