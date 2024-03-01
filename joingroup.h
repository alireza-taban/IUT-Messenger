#ifndef JOINGROUP_H
#define JOINGROUP_H

#include <QDialog>

namespace Ui {
class joingroup;
}

class joingroup : public QDialog
{
    Q_OBJECT

public:
    explicit joingroup(QWidget *parent = nullptr);
    ~joingroup();
    void sendtoken(QString str);

private slots:
    void on_pushButton_clicked();

private:
    Ui::joingroup *ui;
    QString token;
};

#endif // JOINGROUP_H
