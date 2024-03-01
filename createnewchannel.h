#ifndef CREATENEWCHANNEL_H
#define CREATENEWCHANNEL_H

#include <QDialog>

namespace Ui {
class createnewchannel;
}

class createnewchannel : public QDialog
{
    Q_OBJECT

public:
    explicit createnewchannel(QWidget *parent = nullptr);
    ~createnewchannel();
    void sendtoken(QString str);

private slots:

    void on_pushButton_clicked();

private:
    Ui::createnewchannel *ui;
    QString token;
};

#endif // CREATENEWCHANNEL_H
