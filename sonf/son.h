#ifndef SON_H
#define SON_H

#include <QMainWindow>

namespace Ui {
class son;
}

class son : public QMainWindow
{
    Q_OBJECT

public:
    explicit son(QWidget *parent = 0);
    ~son();

private slots:
    void on_pushButton_clicked();

private:
    Ui::son *ui;
};

#endif // SON_H
