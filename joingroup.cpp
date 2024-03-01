#include "joingroup.h"
#include "ui_joingroup.h"
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

QJsonObject Joingrou(QString URlAcc)
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

joingroup::joingroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joingroup)
{
    ui->setupUi(this);
}

joingroup::~joingroup()
{
    delete ui;
}

void joingroup::sendtoken(QString str)
{
    token = str;
}

void joingroup::on_pushButton_clicked()
{
    ui->label_error->clear();
    QString name = ui->lineEdit_NameGroup->text();
    QString urll = "http://api.barafardayebehtar.ml:8080/joingroup?token=" + token + "&group_name=" + name;
    QJsonObject js = Joingrou(urll);

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

