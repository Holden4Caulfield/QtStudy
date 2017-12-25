#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    int i=0;
    while (i++<20) {
        w.jud[i]=false;
    }

    w.show();

    return a.exec();
}
