#include "joinchannel.h"
#include "ui_joinchannel.h"
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

QJsonObject Joinchan(QString URlAcc)
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

joinchannel::joinchannel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joinchannel)
{
    ui->setupUi(this);
}

joinchannel::~joinchannel()
{
    delete ui;
}

void joinchannel::sendtoken(QString str)
{
    token = str;
}

void joinchannel::on_pushButton_clicked()
{
    ui->label_error->clear();
    QString name = ui->lineEdit_NameChannel->text();
    QString urll = "http://api.barafardayebehtar.ml:8080/joinchannel?token=" + token + "&channel_name=" + name;
    QJsonObject js = Joinchan(urll);

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

