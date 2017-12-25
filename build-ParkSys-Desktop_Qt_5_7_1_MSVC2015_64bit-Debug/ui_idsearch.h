/********************************************************************************
** Form generated from reading UI file 'idsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDSEARCH_H
#define UI_IDSEARCH_H

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

class Ui_IDSearch
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IDSearch)
    {
        if (IDSearch->objectName().isEmpty())
            IDSearch->setObjectName(QStringLiteral("IDSearch"));
        IDSearch->resize(800, 600);
        centralwidget = new QWidget(IDSearch);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 40, 151, 61));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 430, 141, 61));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 140, 231, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 130, 131, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 180, 131, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 250, 111, 16));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 320, 481, 41));
        IDSearch->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IDSearch);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        IDSearch->setMenuBar(menubar);
        statusbar = new QStatusBar(IDSearch);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        IDSearch->setStatusBar(statusbar);

        retranslateUi(IDSearch);

        QMetaObject::connectSlotsByName(IDSearch);
    } // setupUi

    void retranslateUi(QMainWindow *IDSearch)
    {
        IDSearch->setWindowTitle(QApplication::translate("IDSearch", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("IDSearch", "<html><head/><body><p><span style=\" font-size:22pt;\">\350\275\246\347\211\214\346\237\245\350\257\242</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("IDSearch", "\350\277\224\345\233\236", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("IDSearch", "\350\257\267\350\276\223\345\205\245\350\275\246\347\211\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("IDSearch", "\345\216\206\345\217\262\350\256\260\345\275\225\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("IDSearch", "\345\201\234\350\275\246\345\234\272\345\206\205\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("IDSearch", "\350\275\246\350\276\206\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IDSearch: public Ui_IDSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDSEARCH_H
