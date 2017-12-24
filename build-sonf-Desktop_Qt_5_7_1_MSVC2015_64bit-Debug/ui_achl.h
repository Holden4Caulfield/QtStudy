/********************************************************************************
** Form generated from reading UI file 'achl.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACHL_H
#define UI_ACHL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Achl
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Achl)
    {
        if (Achl->objectName().isEmpty())
            Achl->setObjectName(QStringLiteral("Achl"));
        Achl->resize(800, 600);
        centralwidget = new QWidget(Achl);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 320, 93, 28));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 210, 113, 21));
        Achl->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Achl);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Achl->setMenuBar(menubar);
        statusbar = new QStatusBar(Achl);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Achl->setStatusBar(statusbar);

        retranslateUi(Achl);

        QMetaObject::connectSlotsByName(Achl);
    } // setupUi

    void retranslateUi(QMainWindow *Achl)
    {
        Achl->setWindowTitle(QApplication::translate("Achl", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Achl", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Achl: public Ui_Achl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACHL_H
