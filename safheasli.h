#ifndef SAFHEASLI_H
#define SAFHEASLI_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

namespace Ui {
class SafheAsli;
}

class SafheAsli : public QMainWindow
{
    Q_OBJECT

public:

    void PrintUser(int start, int num, QJsonObject q);
    void PrintGroup(int start, int num, QJsonObject q);
    void PrintChannel(int start ,int num, QJsonObject q);
    void PrintUsers(QJsonObject j1, QJsonObject j2, int start1, int start2);

    void PrintUserChat(int start, int num, QJsonObject q);
    void PrintGroupChat(int start, int num, QJsonObject q);
    void PrintChannelChat(int start, int num, QJsonObject q);


    QJsonObject send_request(QString url);
    void logout(QString URlAcc);
    QString dst_username;
    QString dst_groupname;
    QString dst_channelname;
    void setName(QJsonObject jo);
    explicit SafheAsli(QWidget *parent = nullptr);
    ~SafheAsli();

private slots:

    void TYChannel();

    void TYGroup();

    void TYChat();

    void TY();

    void on_actionLog_out_triggered();

    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionnew_group_triggered();

    void on_actionnew_channel_triggered();

    void on_actionjoin_group_triggered();

    void on_actionjoin_channel_triggered();

    void on_actionnew_chat_triggered();

    void on_group_list_itemClicked(QListWidgetItem *item);

    void on_channel_list_itemClicked(QListWidgetItem *item);

private:
    QJsonObject json;

    Ui::SafheAsli *ui;
};

#endif // SAFHEASLI_H
