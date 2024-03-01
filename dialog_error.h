#ifndef DIALOG_ERROR_H
#define DIALOG_ERROR_H

#include <QDialog>

namespace Ui {
class Dialog_error;
}

class Dialog_error : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_error(QWidget *parent = nullptr);
    ~Dialog_error();

private:
    Ui::Dialog_error *ui;

};

#endif // DIALOG_ERROR_H
