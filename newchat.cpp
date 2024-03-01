#include "newchat.h"
#include "ui_newchat.h"
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
#include <QListWidgetItem>

QJsonObject NewCh(QString URlAcc)
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

newchat::newchat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newchat)
{
    ui->setupUi(this);
}

newchat::~newchat()
{
    delete ui;
}

void newchat::sendtoken(QString str)
{
    token = str;
}

void newchat::on_pushButton_clicked()
{
    ui->label_error->clear();
    QString name = ui->lineEdit_NameUser->text();
    QString urll = "http://api.barafardayebehtar.ml:8080/sendmessageuser?token=" + token + "&dst=" + name + "&body= ";

    QJsonObject js = NewCh(urll);

    if (js["code"].toString() == "200")
    {
        close();
    }
    else
    {
        QString mes = js["message"].toString();
        ui->label_error->setText(mes);
    }
}

