#ifndef CARLEFTPARK_H
#define CARLEFTPARK_H

#include <QMainWindow>

//离开停车场

namespace Ui {
class CarLeftPark;
}

class CarLeftPark : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarLeftPark(QWidget *parent = 0);
    ~CarLeftPark();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CarLeftPark *ui;
};

#endif // CARLEFTPARK_H
