#ifndef IDSEARCH_H
#define IDSEARCH_H

#include"head.h"
#include <QMainWindow>

namespace Ui {
class IDSearch;
}

class IDSearch : public QMainWindow
{
    Q_OBJECT

public:
    explicit IDSearch(QWidget *parent = 0);
    ~IDSearch();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::IDSearch *ui;
};

#endif // IDSEARCH_H
