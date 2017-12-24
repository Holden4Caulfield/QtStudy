#ifndef CHD_H
#define CHD_H

#include <QMainWindow>
#include"last.h"
namespace Ui {
class CHd;
}

class CHd : public QMainWindow
{
    Q_OBJECT

public:
    explicit CHd(QWidget *parent = 0);
    ~CHd();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CHd *ui;
    Last *ls;
};

#endif // CHD_H
