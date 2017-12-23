/********************************************************************************
** Form generated from reading UI file 'vehiclemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMANAGE_H
#define UI_VEHICLEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleManage
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *cartoD;
    QPushButton *carleftD;
    QPushButton *cartoP;
    QPushButton *carleftP;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VehicleManage)
    {
        if (VehicleManage->objectName().isEmpty())
            VehicleManage->setObjectName(QStringLiteral("VehicleManage"));
        VehicleManage->resize(800, 600);
        centralwidget = new QWidget(VehicleManage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(582, 450, 141, 41));
        cartoD = new QPushButton(centralwidget);
        cartoD->setObjectName(QStringLiteral("cartoD"));
        cartoD->setGeometry(QRect(250, 100, 161, 61));
        carleftD = new QPushButton(centralwidget);
        carleftD->setObjectName(QStringLiteral("carleftD"));
        carleftD->setGeometry(QRect(250, 200, 161, 61));
        cartoP = new QPushButton(centralwidget);
        cartoP->setObjectName(QStringLiteral("cartoP"));
        cartoP->setGeometry(QRect(250, 300, 161, 61));
        carleftP = new QPushButton(centralwidget);
        carleftP->setObjectName(QStringLiteral("carleftP"));
        carleftP->setGeometry(QRect(250, 400, 161, 61));
        VehicleManage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VehicleManage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        VehicleManage->setMenuBar(menubar);
        statusbar = new QStatusBar(VehicleManage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VehicleManage->setStatusBar(statusbar);

        retranslateUi(VehicleManage);

        QMetaObject::connectSlotsByName(VehicleManage);
    } // setupUi

    void retranslateUi(QMainWindow *VehicleManage)
    {
        VehicleManage->setWindowTitle(QApplication::translate("VehicleManage", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VehicleManage", "\350\277\224\345\233\236", Q_NULLPTR));
        cartoD->setText(QApplication::translate("VehicleManage", "\350\275\246\350\276\206\345\274\200\345\247\213\346\216\222\351\230\237", Q_NULLPTR));
        carleftD->setText(QApplication::translate("VehicleManage", "\350\275\246\350\276\206\347\246\273\345\274\200\346\216\222\351\230\237\351\230\237\345\210\227", Q_NULLPTR));
        cartoP->setText(QApplication::translate("VehicleManage", "\350\275\246\350\276\206\350\277\233\345\234\272", Q_NULLPTR));
        carleftP->setText(QApplication::translate("VehicleManage", "\350\275\246\350\276\206\347\246\273\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VehicleManage: public Ui_VehicleManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMANAGE_H
