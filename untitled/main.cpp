#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Car bwm,mmp;
    bwm.ID="123";bwm.dir=16;
    mmp.ID="123456";mmp.dir=18;
    w.List.append(bwm);w.List.append(mmp);
    w.In(w.L,bwm);//w.In(w.L,mmp);
    w.show();
    return a.exec();
}
