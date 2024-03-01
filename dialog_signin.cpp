#include "dialog_signin.h"
#include "ui_dialog_signin.h"
#include <QDebug>
#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
// http://api.barafardayebehtar.ml:8080/logout?username=sara&password=1234

Dialog_Signin::Dialog_Signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Signin)
{
    ui->setupUi(this);
}

Dialog_Signin::~Dialog_Signin()
{
    delete ui;
}

void logout(QString URlAcc)
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

QJsonObject Signin(QString URlAcc)
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
        QJsonObject o = d.object();;
        response = o;

    }
    else
    {
        qDebug() << "Error:" << reply->errorString();
    }

    reply->deleteLater();

    return response;
}

void Dialog_Signin::on_buttonBox_Signin_accepted()
{
    QString Name = ui->LineEdit_UserName->text();
    QString Password = ui->LineEdit_Password->text();
    QString FirstName = ui->LineEdit_FirstName->text();
    QString LastName = ui->LineEdit_LastName->text();
    QString URLAccount1 = "http://api.barafardayebehtar.ml:8080/signup?username=" + Name + "&password=" + Password;
    QJsonObject response = Signin(URLAccount1);
    QString er = response["message"].toString();
    if (response["code"].toString() == "200")
    {
        emit errorsignup(er);
        QString URLAccount2 = "http://api.barafardayebehtar.ml:8080/logout?username=" + Name + "&password=" + Password;
        logout(URLAccount2);
    }
    else
    {
        emit errorsignup(er);
    }

}

