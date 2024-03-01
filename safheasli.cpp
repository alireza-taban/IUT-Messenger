#include "safheasli.h"
#include "ui_safheasli.h"
#include "dialog_login.h"
#include "createnewgroup.h"
#include "createnewchannel.h"
#include "joingroup.h"
#include "joinchannel.h"
#include "newchat.h"
#include <QDebug>
#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QListWidgetItem>
#include <QTimer>

QTimer *timerUserChat = new QTimer();
QTimer *timerUserGroup = new QTimer();
QTimer *timerUserChannel = new QTimer();

QJsonObject jsonasl, jsonU1, jsonG1, jsonC1;
QJsonObject jsonuser, jsongroup, jsonchannel;

int what_send;

QJsonObject getuserlist(QString url1) {
    QNetworkAccessManager manager;
    QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(url1)));

    QEventLoop eventLoop;
    QObject::connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec();

    QJsonObject response;
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        response = o;
    } else {
        qDebug() << "Error: " << reply->errorString();
        return QJsonObject();
    }
    return response;
}

QJsonObject getgrouplist(QString url1) {
    QNetworkAccessManager manager;
    QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(url1)));

    QEventLoop eventLoop;
    QObject::connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec();

    QJsonObject response;
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        response = o;
    } else {
        qDebug() << "Error: " << reply->errorString();
        return QJsonObject();
    }
    return response;
}

QJsonObject getchannellist(QString url1) {
    QNetworkAccessManager manager;
    QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(url1)));

    QEventLoop eventLoop;
    QObject::connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec();

    QJsonObject response;
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        response = o;
    } else {
        qDebug() << "Error: " << reply->errorString();
        return QJsonObject();
    }
    return response;
}

QJsonObject SafheAsli::send_request(QString URlAcc)
{
    QUrl url(URlAcc);

    QNetworkAccessManager Manager;
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = Manager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QJsonObject jj;
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        jj = o;
    }
    else
    {
        qDebug() << "Error:" << reply->errorString();
    }

    reply->deleteLater();

    return jj;
}

QString FindNumber(QJsonObject j)
{
    QString mes = j["message"].toString();
    int hyphenStart = mes.indexOf('-');
    int hyphenEnd = mes.lastIndexOf('-');

    QString numberStr = mes.mid(hyphenStart + 1, hyphenEnd - hyphenStart - 1);

    return numberStr;
}


void SafheAsli::PrintUser(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString nam = val["src"].toString();
        ui->listWidget->addItem(nam);
    }
}

void SafheAsli::PrintGroup(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString nam = val["group_name"].toString();
        ui->group_list->addItem(nam);
    }
}

void SafheAsli::PrintChannel(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString nam = val["channel_name"].toString();
        ui->channel_list->addItem(nam);
    }
}

void SafheAsli::PrintUsers(QJsonObject j1, QJsonObject j2, int Max1, int Max2)
{
    for (int k = 0; k < Max2; k++)
    {
        int number = 0;
        QString jadid;

        QString q2 = QString::number(k);
        QString block2 = "block " + q2;
        QJsonObject val2 = j2[block2].toObject();
        QString name2 = val2["src"].toString();

        for (int i = 0; i < Max1; i++)
        {
            QString q1 = QString::number(i);
            QString block1 = "block " + q1;
            QJsonObject val1 = j1[block1].toObject();
            QString name1 = val1["src"].toString();

            if (name2 == name1)
            {
                number++;
            }
        }

        jadid = name2;

        if (number == 0)
        {
            ui->listWidget->addItem(jadid);
            break;
        }
    }
}


void SafheAsli::PrintUserChat(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString date = val["date"].toString();
        QString nam = val["src"].toString();
        nam = nam + " ( " + date + " ) :";
        ui->textBrowser_asli->append(nam);
        QString mes = val["body"].toString();
        mes = mes + "\n";
        ui->textBrowser_asli->append(mes);
    }
}

void SafheAsli::PrintGroupChat(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString date = val["date"].toString();
        QString nam = val["src"].toString();
        nam = nam + " ( " + date + " ) :";
        ui->textBrowser_asli->append(nam);
        QString mes = val["body"].toString();
        mes = mes + "\n";
        ui->textBrowser_asli->append(mes);
    }
}

void SafheAsli::PrintChannelChat(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString date = val["date"].toString();
        QString nam = val["src"].toString();
        nam = nam + " ( " + date + " ) :";
        ui->textBrowser_asli->append(nam);
        QString mes = val["body"].toString();
        mes = mes + "\n";
        ui->textBrowser_asli->append(mes);
    }
}


void SafheAsli::TY()
{
    QString ur1 = jsonasl["token"].toString();

    QString uj = "http://api.barafardayebehtar.ml:8080/getuserlist?token=" + ur1;
    QString ug = "http://api.barafardayebehtar.ml:8080/getgrouplist?token=" + ur1;
    QString uc = "http://api.barafardayebehtar.ml:8080/getchannellist?token=" + ur1;

    QJsonObject ju =getuserlist(uj);
    QJsonObject jg =getgrouplist(ug);
    QJsonObject jc =getchannellist(uc);

    QString number_Suser = FindNumber(ju);
    QString number_Sgroup = FindNumber(jg);
    QString number_Schanell = FindNumber(jc);

    int number_Iuser = number_Suser.toInt();
    int number_Igroup = number_Sgroup.toInt();
    int number_Ichanell = number_Schanell.toInt();

    QString number_SuserFirst = FindNumber(jsonU1);
    QString number_SgroupFirst = FindNumber(jsonG1);
    QString number_SchanellFirst = FindNumber(jsonC1);

    int number_IuserFirst = number_SuserFirst.toInt();
    int number_IgroupFirst = number_SgroupFirst.toInt();
    int number_IchanellFirst = number_SchanellFirst.toInt();

    if (number_Iuser != number_IuserFirst)
    {
        PrintUsers(jsonU1, ju, number_IuserFirst, number_Iuser);
        jsonU1 = ju;
    }

    if (number_Igroup != number_IgroupFirst)
    {
        PrintGroup(number_IgroupFirst, number_Igroup, jg);
        jsonG1 = jg;
    }

    if (number_Ichanell != number_IchanellFirst)
    {
        PrintChannel(number_IchanellFirst, number_Ichanell, jc);
        jsonC1 = ju;
    }

}


void logout1(QString URlAcc)
{
    QUrl url(URlAcc);

    QNetworkAccessManager Manager;
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = Manager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QString responsem;
    QString responsec;
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
    }
    else
    {
        qDebug() << "Error:" << reply->errorString();
    }

    reply->deleteLater();
}

QString ur1;
void SafheAsli::setName(QJsonObject Nam)
{
    json = Nam;
    ur1 = json["token"].toString();
    qDebug() << ur1;
    jsonasl = json;

    QString uj = "http://api.barafardayebehtar.ml:8080/getuserlist?token=" + ur1;
    QString ug = "http://api.barafardayebehtar.ml:8080/getgrouplist?token=" + ur1;
    QString uc = "http://api.barafardayebehtar.ml:8080/getchannellist?token=" + ur1;

    QJsonObject ju =getuserlist(uj);
    jsonU1 = ju;
    QJsonObject jg =getgrouplist(ug);
    jsonG1 = jg;
    QJsonObject jc =getchannellist(uc);
    jsonC1 = jc;

    QString number_Suser = FindNumber(ju);
    QString number_Sgroup = FindNumber(jg);
    QString number_Schanell = FindNumber(jc);

    int number_Iuser = number_Suser.toInt();
    int number_Igroup = number_Sgroup.toInt();
    int number_Ichanell = number_Schanell.toInt();

    PrintUser(0, number_Iuser, ju);
    PrintGroup(0, number_Igroup, jg);
    PrintChannel(0, number_Ichanell, jc);

    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(TY()));
    timer->start(3500);
}


SafheAsli::SafheAsli(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SafheAsli)
{
    ui->setupUi(this);
    setFixedSize(800, 600);
    QPixmap pix1(":/source/send_logo.png");
    ui->pushButton->setIcon(pix1);
    QPixmap pix2(":/source/logout_icon.png");
    ui->actionLog_out->setIcon(pix2);
    QPixmap pix3(":/source/ham_icon.png");
    ui->menuoptions->setIcon(pix3);
    QPixmap pix4(":/source/add_icon");
    ui->menuadd->setIcon(pix4);
}

SafheAsli::~SafheAsli()
{
    delete ui;
}



void SafheAsli::on_actionLog_out_triggered()
{
    QString name11 = json["Name"].toString();
    QString pass11 = json["Password"].toString();
//    qDebug() << json;
    QString url = "http://api.barafardayebehtar.ml:8080/logout?username=" + name11 + "&password=" + pass11;
    logout1(url);
    close();
}

void SafheAsli::TYChat()
{

    QString tmp1 = json["token"].toString();
    QString url1 = "http://api.barafardayebehtar.ml:8080/getuserchats?token=" + tmp1 + "&dst=" + dst_username;
    QJsonObject jj1 = send_request(url1);

    int num2 = FindNumber(jj1).toInt();
    int num1 = FindNumber(jsonuser).toInt();

    if (num1 != num2)
    {
        PrintUserChat(num1, num2, jj1);
        jsonuser = jj1;
    }
}

void SafheAsli::TYGroup()
{
    QString tmp = json["token"].toString();
    QString url = "http://api.barafardayebehtar.ml:8080/getgroupchats?token=" + tmp + "&dst=" + dst_groupname;
    QJsonObject jj1 = send_request(url);

    int num2 = FindNumber(jj1).toInt();
    int num1 = FindNumber(jsongroup).toInt();

    if (num1 != num2)
    {
        PrintGroupChat(num1, num2, jj1);
        jsongroup = jj1;
    }
}

void SafheAsli::TYChannel()
{
    QString tmp = json["token"].toString();
    QString url = "http://api.barafardayebehtar.ml:8080/getchannelchats?token=" + tmp + "&dst=" + dst_channelname;
    QJsonObject jj1 = send_request(url);

    int num2 = FindNumber(jj1).toInt();
    int num1 = FindNumber(jsonchannel).toInt();

    if (num1 != num2)
    {
        PrintChannelChat(num1, num2, jj1);
        jsonchannel = jj1;
    }
}



void SafheAsli::on_actionnew_group_triggered()
{
    CreateNewGroup *g = new CreateNewGroup();
    g->sendtoken(jsonasl["token"].toString());
    g->show();
}


void SafheAsli::on_actionnew_channel_triggered()
{
    createnewchannel *C = new createnewchannel();
    C->sendtoken(jsonasl["token"].toString());
    C->show();
}


void SafheAsli::on_actionjoin_group_triggered()
{
    joingroup *j = new joingroup();
    j->sendtoken(jsonasl["token"].toString());
    j->show();
}


void SafheAsli::on_actionjoin_channel_triggered()
{
    joinchannel *jc = new joinchannel();
    jc->sendtoken(jsonasl["token"].toString());
    jc->show();
}


void SafheAsli::on_actionnew_chat_triggered()
{
    newchat *n = new newchat();
    n->sendtoken(jsonasl["token"].toString());
    n->show();
}



void SafheAsli::on_listWidget_itemClicked(QListWidgetItem *item)
{

    ui->textBrowser_asli->clear();
    ui->lineEdit_asli->clear();

    timerUserGroup->stop();
    timerUserChannel->stop();

    what_send = 1;

    dst_username = item->text();
    QString tmp = json["token"].toString();
    QString url = "http://api.barafardayebehtar.ml:8080/getuserchats?token=" + tmp + "&dst=" + dst_username;
    QJsonObject jj = send_request(url);

    for (QString& key : jsonuser.keys()) {
        jsonuser.remove(key);
    }

    jsonuser = jj;
    int num = FindNumber(jj).toInt();

    PrintUserChat(1, num, jsonuser);

    connect(timerUserChat, SIGNAL(timeout()), this, SLOT(TYChat()));
    timerUserChat->start(3500);
    ui->name_label->setText(dst_username);
}

void SafheAsli::on_group_list_itemClicked(QListWidgetItem *item)
{
    ui->textBrowser_asli->clear();
    ui->lineEdit_asli->clear();

    timerUserChat->stop();
    timerUserChannel->stop();

    what_send = 2;

    dst_groupname = item->text();
    QString tmp = json["token"].toString();
    QString url = "http://api.barafardayebehtar.ml:8080/getgroupchats?token=" + tmp + "&dst=" + dst_groupname;
    QJsonObject jj = send_request(url);

    for (QString& key : jsongroup.keys()) {
        jsongroup.remove(key);
    }

    jsongroup = jj;
    int num = FindNumber(jj).toInt();

    PrintGroupChat(1, num, jsongroup);

    connect(timerUserGroup, SIGNAL(timeout()), this, SLOT(TYGroup()));
    timerUserGroup->start(3500);
    ui->name_label->setText(dst_groupname);
}

void SafheAsli::on_channel_list_itemClicked(QListWidgetItem *item)
{
    ui->textBrowser_asli->clear();
    ui->lineEdit_asli->clear();

    timerUserChat->stop();
    timerUserGroup->stop();

    what_send = 3;

    dst_channelname = item->text();
    QString tmp = json["token"].toString();
    QString url = "http://api.barafardayebehtar.ml:8080/getchannelchats?token=" + tmp + "&dst=" + dst_channelname;
    QJsonObject jj = send_request(url);

    for (QString& key : jsonchannel.keys()) {
        jsonchannel.remove(key);
    }

    jsonchannel = jj;
    int num = FindNumber(jj).toInt();

    PrintChannelChat(1, num, jsonchannel);

    connect(timerUserChannel, SIGNAL(timeout()), this, SLOT(TYChannel()));
    timerUserChannel->start(3500);
    ui->name_label->setText(dst_channelname);
}

void SafheAsli::on_pushButton_clicked()
{
    QString tok=json["token"].toString();



    if(what_send==1)
    {
        QString masu=ui->lineEdit_asli->text();
        QString urlusersend="http://api.barafardayebehtar.ml:8080/sendmessageuser?token=" + tok + "&dst=" + dst_username + "&body=" + masu;
        ui->lineEdit_asli->clear();
        QJsonObject masur=send_request(urlusersend);


    }
    if(what_send==2)
    {
        QString masg=ui->lineEdit_asli->text();
        QString urlgropsend="http://api.barafardayebehtar.ml:8080/sendmessagegroup?token=" + tok + "&dst=" + dst_groupname + "&body=" + masg;
        ui->lineEdit_asli->clear();
        QJsonObject masgr=send_request(urlgropsend);


    }
    if(what_send==3){
        QString masc=ui->lineEdit_asli->text();
        QString urlchanelsend="http://api.barafardayebehtar.ml:8080/sendmessagechannel?token=" + tok + "&dst=" + dst_channelname + "&body=" + masc;
        ui->lineEdit_asli->clear();
        QJsonObject masr=send_request(urlchanelsend);
        ui->lineEdit_asli->clear();
        //      if(masr["code"].toString()=="200")
        {
            //            er(masr);
            //      }

        }
    }
}

