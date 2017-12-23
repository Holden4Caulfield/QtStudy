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
    } // retranslateUi

};

namespace Ui {
    class VehicleManage: public Ui_VehicleManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMANAGE_H
