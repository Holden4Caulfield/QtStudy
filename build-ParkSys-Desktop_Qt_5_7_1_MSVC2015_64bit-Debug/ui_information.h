/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QStringLiteral("Information"));
        Information->resize(800, 600);
        centralwidget = new QWidget(Information);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 450, 131, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 100, 151, 111));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 220, 171, 71));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 330, 171, 81));
        Information->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Information);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Information->setMenuBar(menubar);
        statusbar = new QStatusBar(Information);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Information->setStatusBar(statusbar);

        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QMainWindow *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Information", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("Information", "<html><head/><body><p><span style=\" font-size:18pt;\">\344\277\241\346\201\257\346\237\245\350\257\242</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Information", "\346\214\211\346\227\266\351\227\264\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Information", "\350\275\246\347\211\214\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
