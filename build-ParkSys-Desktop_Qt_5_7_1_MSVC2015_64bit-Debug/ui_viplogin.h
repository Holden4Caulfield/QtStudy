/********************************************************************************
** Form generated from reading UI file 'viplogin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIPLOGIN_H
#define UI_VIPLOGIN_H

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

class Ui_VipLogin
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

    void setupUi(QMainWindow *VipLogin)
    {
        if (VipLogin->objectName().isEmpty())
            VipLogin->setObjectName(QStringLiteral("VipLogin"));
        VipLogin->resize(800, 600);
        centralwidget = new QWidget(VipLogin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 80, 161, 71));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(552, 410, 121, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 400, 111, 61));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 220, 91, 41));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(310, 220, 241, 41));
        VipLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VipLogin);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        VipLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(VipLogin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VipLogin->setStatusBar(statusbar);

        retranslateUi(VipLogin);

        QMetaObject::connectSlotsByName(VipLogin);
    } // setupUi

    void retranslateUi(QMainWindow *VipLogin)
    {
        VipLogin->setWindowTitle(QApplication::translate("VipLogin", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("VipLogin", "<html><head/><body><p><span style=\" font-size:18pt;\">\346\263\250\345\206\214vip</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VipLogin", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("VipLogin", "OK", Q_NULLPTR));
        label_2->setText(QApplication::translate("VipLogin", "\350\276\223\345\205\245\350\275\246\347\211\214\345\217\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VipLogin: public Ui_VipLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIPLOGIN_H
