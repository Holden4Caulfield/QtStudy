/********************************************************************************
** Form generated from reading UI file 'son.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SON_H
#define UI_SON_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_son
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *son)
    {
        if (son->objectName().isEmpty())
            son->setObjectName(QStringLiteral("son"));
        son->resize(800, 600);
        centralwidget = new QWidget(son);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 240, 104, 87));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 270, 93, 28));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 140, 113, 21));
        son->setCentralWidget(centralwidget);
        menubar = new QMenuBar(son);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        son->setMenuBar(menubar);
        statusbar = new QStatusBar(son);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        son->setStatusBar(statusbar);

        retranslateUi(son);

        QMetaObject::connectSlotsByName(son);
    } // setupUi

    void retranslateUi(QMainWindow *son)
    {
        son->setWindowTitle(QApplication::translate("son", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("son", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class son: public Ui_son {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SON_H
