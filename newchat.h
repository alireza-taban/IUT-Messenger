#ifndef NEWCHAT_H
#define NEWCHAT_H

#include <QDialog>

namespace Ui {
class newchat;
}

class newchat : public QDialog
{
    Q_OBJECT

public:
    explicit newchat(QWidget *parent = nullptr);
    ~newchat();
    void sendtoken(QString str);

private slots:
    void on_pushButton_clicked();

private:
    QString token;
    Ui::newchat *ui;
};

#endif // NEWCHAT_H
