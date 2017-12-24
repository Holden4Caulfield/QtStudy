/********************************************************************************
** Form generated from reading UI file 'carleftpark.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARLEFTPARK_H
#define UI_CARLEFTPARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarLeftPark
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CarLeftPark)
    {
        if (CarLeftPark->objectName().isEmpty())
            CarLeftPark->setObjectName(QStringLiteral("CarLeftPark"));
        CarLeftPark->resize(800, 600);
        centralwidget = new QWidget(CarLeftPark);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 90, 211, 61));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(522, 400, 111, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 400, 101, 61));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(181, 210, 111, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(350, 210, 191, 31));
        CarLeftPark->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CarLeftPark);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        CarLeftPark->setMenuBar(menubar);
        statusbar = new QStatusBar(CarLeftPark);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CarLeftPark->setStatusBar(statusbar);

        retranslateUi(CarLeftPark);

        QMetaObject::connectSlotsByName(CarLeftPark);
    } // setupUi

    void retranslateUi(QMainWindow *CarLeftPark)
    {
        CarLeftPark->setWindowTitle(QApplication::translate("CarLeftPark", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("CarLeftPark", "<html><head/><body><p><span style=\" font-size:20pt;\">\347\246\273\345\274\200\345\201\234\350\275\246\345\234\272</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CarLeftPark", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CarLeftPark", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("CarLeftPark", "<html><head/><body><p><span style=\" font-size:16pt;\">\350\275\246\347\211\214\345\217\267\357\274\232</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CarLeftPark: public Ui_CarLeftPark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARLEFTPARK_H
