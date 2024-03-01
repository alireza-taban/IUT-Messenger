#ifndef DIALOG_SIGNIN_H
#define DIALOG_SIGNIN_H

#include <QDialog>

namespace Ui {
class Dialog_Signin;
}

class Dialog_Signin : public QDialog
{
    Q_OBJECT


public:
    explicit Dialog_Signin(QWidget *parent = nullptr);
    ~Dialog_Signin();

private slots:
    void on_buttonBox_Signin_accepted();

private:
    Ui::Dialog_Signin *ui;

signals:
    void errorsignup(QString str);
};

#endif // DIALOG_SIGNIN_H
