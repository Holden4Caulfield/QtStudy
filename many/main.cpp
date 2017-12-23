#include "mainwindow.h"
#include <QApplication>
#include<string>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    car bwm,mmp;
    string s ="abc";
    /*char* c;
    const int len = s.length();
    c =new char[len+1];*/
    char c[20];
    strcpy(c,s.c_str());
    strcpy(bwm.ID,c);
    w.Link.append(bwm);//w.Link.append(mmp);
    w.show();

    return a.exec();
}
