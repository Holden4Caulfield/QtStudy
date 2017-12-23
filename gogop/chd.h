#ifndef CHD_H
#define CHD_H

#include <QMainWindow>

namespace Ui {
class CHd;
}

class CHd : public QMainWindow
{
    Q_OBJECT

public:
    explicit CHd(QWidget *parent = 0);
    ~CHd();

private:
    Ui::CHd *ui;
};

#endif // CHD_H
