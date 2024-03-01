#include "createnewchannel.h"
#include "ui_createnewchannel.h"
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

QJsonObject CreateChannel(QString URlAcc)
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

createnewchannel::createnewchannel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createnewchannel)
{
    ui->setupUi(this);
}

createnewchannel::~createnewchannel()
{
    delete ui;
}

void createnewchannel::sendtoken(QString str)
{
        token = str;
}


void createnewchannel::on_pushButton_clicked()
{
        ui->label_Error->clear();
        QString name = ui->lineEdit_NameChannel->text();
        QString title = ui->lineEdit_TitleChannel->text();
        QString urll = "http://api.barafardayebehtar.ml:8080/createchannel?token=" + token +"&channel_name=" + name + "&channel_title=" + title;
        QJsonObject js = CreateChannel(urll);

        if (js["code"].toString() == "200")
        {
            close();
        }
        else
        {
            QString mes = js["message"].toString();
            ui->label_Error->setText(mes);
        }
}

