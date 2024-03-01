#include "dialog_login.h"
#include "ui_dialog_login.h"
#include "safheasli.h"
#include <QDebug>
#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include "messenger.h"

Dialog_login::Dialog_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_login)
{
    ui->setupUi(this);
}

Dialog_login::~Dialog_login()
{
    delete ui;
}
QJsonObject Login(QString URlAcc)
{
    QUrl url(URlAcc);

    QNetworkAccessManager Manager;
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = Manager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QJsonObject response;
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        response = o;
    }
    else
    {
        qDebug() << "Error:" << reply->errorString();
    }

    reply->deleteLater();

    return response;
}


void Dialog_login::on_buttonBox_accepted()
{
    QString Name = ui->lineEdit_Username->text();
    QString Password = ui->lineEdit_Password->text();
    QString URLAccount = "http://api.barafardayebehtar.ml:8080/login?username=" + Name + "&password=" + Password;
    QJsonObject response = Login(URLAccount);
    response["Name"] = Name;
    response["Password"] = Password;

    qDebug() << response["code"].toString();

    if (response["code"].toString() == "200")
    {
        SafheAsli *Asl = new SafheAsli(this);
        Asl->setName(response);
        Asl->show();
    }
    else
    {
        emit errorlogin(response["message"].toString());
    }
}

