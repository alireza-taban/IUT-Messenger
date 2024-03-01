#ifndef MESSENGER_H
#define MESSENGER_H

#include <QMainWindow>
#include <QUrl>

QT_BEGIN_NAMESPACE
namespace Ui { class Messenger; }
QT_END_NAMESPACE

class Messenger : public QMainWindow
{
    Q_OBJECT

public:
    Messenger(QWidget *parent = nullptr);
    ~Messenger();

private slots:

    void on_Signup_clicked();
    void geterror(QString);
    void on_Login_clicked();

private:
    Ui::Messenger *ui;
};
#endif // MESSENGER_H
