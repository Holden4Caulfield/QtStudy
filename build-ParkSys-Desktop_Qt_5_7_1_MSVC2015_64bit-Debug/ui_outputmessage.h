/********************************************************************************
** Form generated from reading UI file 'outputmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTMESSAGE_H
#define UI_OUTPUTMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputMessage
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *OutputMessage)
    {
        if (OutputMessage->objectName().isEmpty())
            OutputMessage->setObjectName(QStringLiteral("OutputMessage"));
        OutputMessage->resize(903, 617);
        horizontalLayoutWidget = new QWidget(OutputMessage);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 70, 861, 481));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(horizontalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        textEdit_2 = new QTextEdit(horizontalLayoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout->addWidget(textEdit_2);

        horizontalLayoutWidget_2 = new QWidget(OutputMessage);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 20, 851, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        pushButton = new QPushButton(OutputMessage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(760, 570, 93, 28));
        pushButton_2 = new QPushButton(OutputMessage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 570, 101, 31));

        retranslateUi(OutputMessage);

        QMetaObject::connectSlotsByName(OutputMessage);
    } // setupUi

    void retranslateUi(QDialog *OutputMessage)
    {
        OutputMessage->setWindowTitle(QApplication::translate("OutputMessage", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("OutputMessage", "\343\200\201\345\275\223\345\211\215\345\201\234\350\275\246\345\234\272\345\206\205\344\277\241\346\201\257", Q_NULLPTR));
        label->setText(QApplication::translate("OutputMessage", "\345\216\206\345\217\262\350\256\260\345\275\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("OutputMessage", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("OutputMessage", "\346\230\276\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OutputMessage: public Ui_OutputMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTMESSAGE_H
