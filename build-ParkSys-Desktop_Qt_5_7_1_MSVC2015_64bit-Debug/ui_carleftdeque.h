/********************************************************************************
** Form generated from reading UI file 'carleftdeque.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARLEFTDEQUE_H
#define UI_CARLEFTDEQUE_H

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

class Ui_CarLeftDeque
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CarLeftDeque)
    {
        if (CarLeftDeque->objectName().isEmpty())
            CarLeftDeque->setObjectName(QStringLiteral("CarLeftDeque"));
        CarLeftDeque->resize(800, 600);
        centralwidget = new QWidget(CarLeftDeque);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(552, 390, 111, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 60, 321, 61));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 210, 111, 41));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(330, 210, 171, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 400, 111, 51));
        CarLeftDeque->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CarLeftDeque);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        CarLeftDeque->setMenuBar(menubar);
        statusbar = new QStatusBar(CarLeftDeque);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CarLeftDeque->setStatusBar(statusbar);

        retranslateUi(CarLeftDeque);

        QMetaObject::connectSlotsByName(CarLeftDeque);
    } // setupUi

    void retranslateUi(QMainWindow *CarLeftDeque)
    {
        CarLeftDeque->setWindowTitle(QApplication::translate("CarLeftDeque", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CarLeftDeque", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("CarLeftDeque", "<html><head/><body><p><span style=\" font-size:20pt;\">\347\246\273\345\274\200\346\216\222\351\230\237\351\230\237\345\210\227</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("CarLeftDeque", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\275\246\347\211\214\345\217\267\357\274\232</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CarLeftDeque", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CarLeftDeque: public Ui_CarLeftDeque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARLEFTDEQUE_H
