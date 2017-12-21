/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *idText;
    QLineEdit *lineEdit;
    QPushButton *ok;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(400, 300);
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 170, 93, 28));
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(141, 40, 91, 61));
        idText = new QLineEdit(Dialog2);
        idText->setObjectName(QStringLiteral("idText"));
        idText->setGeometry(QRect(110, 90, 113, 21));
        lineEdit = new QLineEdit(Dialog2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 130, 113, 21));
        ok = new QPushButton(Dialog2);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(70, 180, 93, 28));

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog2", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog2", "\344\272\214\345\217\267\347\252\227\345\217\243", Q_NULLPTR));
        idText->setPlaceholderText(QApplication::translate("Dialog2", "\350\276\223\345\205\245\350\275\246id", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Dialog2", "\350\276\223\345\205\245l", Q_NULLPTR));
        ok->setText(QApplication::translate("Dialog2", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
