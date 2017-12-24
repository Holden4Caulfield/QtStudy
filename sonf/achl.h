#ifndef ACHL_H
#define ACHL_H

#include <QMainWindow>

namespace Ui {
class Achl;
}

class Achl : public QMainWindow
{
    Q_OBJECT

public:
    explicit Achl(QWidget *parent = 0);
    ~Achl();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Achl *ui;
};

#endif // ACHL_H
