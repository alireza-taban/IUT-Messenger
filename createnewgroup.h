#ifndef CREATENEWGROUP_H
#define CREATENEWGROUP_H

#include <QDialog>

namespace Ui {
class CreateNewGroup;
}

class CreateNewGroup : public QDialog
{
    Q_OBJECT

public:
    explicit CreateNewGroup(QWidget *parent = nullptr);
    ~CreateNewGroup();
    void sendtoken(QString str);

private slots:


    void on_pushButton_clicked();

private:
    Ui::CreateNewGroup *ui;
    QString token;
};

#endif // CREATENEWGROUP_H
