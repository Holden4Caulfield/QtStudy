#ifndef SON_H
#define SON_H

#include <QMainWindow>
#include"achl.h"
namespace Ui {
class son;
}

class son : public QMainWindow
{
    Q_OBJECT

public:
    explicit son(QWidget *parent = 0);
    ~son();
    void input_s(QString s);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::son *ui;
};

#endif // SON_H
