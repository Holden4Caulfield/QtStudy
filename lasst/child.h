#ifndef CHILD_H
#define CHILD_H
#include"car.h"
#include <QMainWindow>

namespace Ui {
class child;
}

class child : public QMainWindow
{
    Q_OBJECT

public:
    explicit child(QWidget *parent = 0);
    ~child();
/*signals:
    void sendData(Node);*/
private slots:
    void on_pushButton_clicked();

private:
    Ui::child *ui;
};

#endif // CHILD_H
