#ifndef JOINCHANNEL_H
#define JOINCHANNEL_H

#include <QDialog>

namespace Ui {
class joinchannel;
}

class joinchannel : public QDialog
{
    Q_OBJECT

public:
    explicit joinchannel(QWidget *parent = nullptr);
    ~joinchannel();
    void sendtoken(QString str);

private slots:
    void on_pushButton_clicked();

private:
    Ui::joinchannel *ui;
    QString token;
};

#endif // JOINCHANNEL_H
