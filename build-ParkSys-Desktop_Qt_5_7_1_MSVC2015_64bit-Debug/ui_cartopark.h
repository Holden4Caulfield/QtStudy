/********************************************************************************
** Form generated from reading UI file 'cartopark.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTOPARK_H
#define UI_CARTOPARK_H

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

class Ui_CarToPark
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CarToPark)
    {
        if (CarToPark->objectName().isEmpty())
            CarToPark->setObjectName(QStringLiteral("CarToPark"));
        CarToPark->resize(800, 600);
        centralwidget = new QWidget(CarToPark);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 420, 121, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 90, 201, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 180, 101, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(260, 180, 171, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 230, 111, 31));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 230, 171, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 420, 111, 51));
        CarToPark->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CarToPark);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        CarToPark->setMenuBar(menubar);
        statusbar = new QStatusBar(CarToPark);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CarToPark->setStatusBar(statusbar);

        retranslateUi(CarToPark);

        QMetaObject::connectSlotsByName(CarToPark);
    } // setupUi

    void retranslateUi(QMainWindow *CarToPark)
    {
        CarToPark->setWindowTitle(QApplication::translate("CarToPark", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CarToPark", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("CarToPark", "<html><head/><body><p><span style=\" font-size:20pt;\">\350\277\233\345\205\245\345\201\234\350\275\246\345\234\272</span></p><p><br/></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("CarToPark", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\275\246\347\211\214\345\217\267\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("CarToPark", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\205\245\345\217\243\346\226\271\345\220\221\357\274\232</span></p></body></html>", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("CarToPark", "0\344\270\272\345\215\227/1\344\270\272\345\214\227", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CarToPark", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CarToPark: public Ui_CarToPark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTOPARK_H
