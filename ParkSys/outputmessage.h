#ifndef OUTPUTMESSAGE_H
#define OUTPUTMESSAGE_H

#include <QDialog>

namespace Ui {
class OutputMessage;
}

class OutputMessage : public QDialog
{
    Q_OBJECT

public:
    explicit OutputMessage(QWidget *parent = 0);
    ~OutputMessage();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::OutputMessage *ui;
};

#endif // OUTPUTMESSAGE_H
