/********************************************************************************
** Form generated from reading UI file 'cartodeque.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTODEQUE_H
#define UI_CARTODEQUE_H

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

class Ui_CarToDeque
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CarToDeque)
    {
        if (CarToDeque->objectName().isEmpty())
            CarToDeque->setObjectName(QStringLiteral("CarToDeque"));
        CarToDeque->resize(800, 600);
        centralwidget = new QWidget(CarToDeque);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 90, 191, 71));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 400, 121, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 400, 111, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 180, 81, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 240, 111, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(320, 180, 113, 21));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 240, 113, 21));
        CarToDeque->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CarToDeque);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        CarToDeque->setMenuBar(menubar);
        statusbar = new QStatusBar(CarToDeque);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CarToDeque->setStatusBar(statusbar);

        retranslateUi(CarToDeque);

        QMetaObject::connectSlotsByName(CarToDeque);
    } // setupUi

    void retranslateUi(QMainWindow *CarToDeque)
    {
        CarToDeque->setWindowTitle(QApplication::translate("CarToDeque", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("CarToDeque", "<html><head/><body><p><span style=\" font-size:22pt;\">\345\274\200\345\247\213\346\216\222\351\230\237</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CarToDeque", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CarToDeque", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("CarToDeque", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\275\246\347\211\214\345\217\267\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("CarToDeque", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\205\245\345\217\243\344\275\215\347\275\256\357\274\232</span></p></body></html>", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("CarToDeque", "0\344\270\272\345\215\227/1\344\270\272\345\214\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CarToDeque: public Ui_CarToDeque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTODEQUE_H
