#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"chd.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    CHd *ch;
};

#endif // MAINWINDOW_H
