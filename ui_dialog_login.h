/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGIN_H
#define UI_DIALOG_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_login
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_Username;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;

    void setupUi(QDialog *Dialog_login)
    {
        if (Dialog_login->objectName().isEmpty())
            Dialog_login->setObjectName("Dialog_login");
        Dialog_login->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/source/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_login->setWindowIcon(icon);
        Dialog_login->setStyleSheet(QString::fromUtf8("background-color: rgb(108, 184, 255);"));
        buttonBox = new QDialogButtonBox(Dialog_login);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(180, 255, 210, 35));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        buttonBox->setFont(font);
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;\n"
"    padding: 30px;\n"
"    background-color: #007600;\n"
"	\n"
"	font: 700 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #376fa6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #888888;\n"
"}\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(Dialog_login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 5, 111, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/source/login.png")));
        label_3->setScaledContents(true);
        widget = new QWidget(Dialog_login);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 120, 281, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Username = new QLineEdit(widget);
        lineEdit_Username->setObjectName("lineEdit_Username");
        lineEdit_Username->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(lineEdit_Username, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 1, 1, 1, 1);


        retranslateUi(Dialog_login);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_login, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_login, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_login);
    } // setupUi

    void retranslateUi(QDialog *Dialog_login)
    {
        Dialog_login->setWindowTitle(QCoreApplication::translate("Dialog_login", "Login", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("Dialog_login", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_login", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_login: public Ui_Dialog_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H
