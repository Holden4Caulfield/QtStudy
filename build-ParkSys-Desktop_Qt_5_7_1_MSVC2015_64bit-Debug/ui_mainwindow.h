/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *InforSearch;
    QPushButton *VehMana;
    QPushButton *LogVip;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(743, 582);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        InforSearch = new QPushButton(centralWidget);
        InforSearch->setObjectName(QStringLiteral("InforSearch"));
        InforSearch->setGeometry(QRect(230, 270, 181, 111));
        VehMana = new QPushButton(centralWidget);
        VehMana->setObjectName(QStringLiteral("VehMana"));
        VehMana->setGeometry(QRect(230, 130, 181, 101));
        LogVip = new QPushButton(centralWidget);
        LogVip->setObjectName(QStringLiteral("LogVip"));
        LogVip->setGeometry(QRect(70, 50, 111, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(540, 360, 72, 15));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 360, 41, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(670, 360, 72, 15));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(540, 280, 111, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(540, 310, 111, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(660, 280, 72, 15));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(660, 310, 72, 15));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(540, 400, 72, 15));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(630, 400, 31, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(670, 400, 51, 16));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 430, 701, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 743, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        InforSearch->setText(QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        VehMana->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", Q_NULLPTR));
        LogVip->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214\344\274\232\345\221\230", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\201\234\350\275\246\345\234\272\345\206\205\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "/10", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\215\227\347\253\257\346\216\222\351\230\237\350\275\246\350\276\206\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\214\227\347\253\257\346\216\222\351\230\237\350\275\246\350\276\206\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\344\270\212\345\261\202\350\275\246\350\276\206\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "/4", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\345\201\234\350\275\246\345\234\272\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\277\233\350\275\246", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
