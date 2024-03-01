/********************************************************************************
** Form generated from reading UI file 'dialog_signin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SIGNIN_H
#define UI_DIALOG_SIGNIN_H

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

class Ui_Dialog_Signin
{
public:
    QDialogButtonBox *buttonBox_Signin;
    QLabel *label_5;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *LineEdit_UserName;
    QLabel *label_2;
    QLineEdit *LineEdit_Password;
    QLabel *label_3;
    QLineEdit *LineEdit_FirstName;
    QLabel *label_4;
    QLineEdit *LineEdit_LastName;

    void setupUi(QDialog *Dialog_Signin)
    {
        if (Dialog_Signin->objectName().isEmpty())
            Dialog_Signin->setObjectName("Dialog_Signin");
        Dialog_Signin->resize(330, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/source/register2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_Signin->setWindowIcon(icon);
        Dialog_Signin->setStyleSheet(QString::fromUtf8("background-color: rgb(108, 184, 255);"));
        buttonBox_Signin = new QDialogButtonBox(Dialog_Signin);
        buttonBox_Signin->setObjectName("buttonBox_Signin");
        buttonBox_Signin->setGeometry(QRect(110, 400, 210, 35));
        buttonBox_Signin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;\n"
"    padding: 30px;\n"
"    background-color: #007600;\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
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
        buttonBox_Signin->setOrientation(Qt::Horizontal);
        buttonBox_Signin->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(Dialog_Signin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, -30, 191, 201));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/source/register4.png")));
        label_5->setScaledContents(true);
        widget = new QWidget(Dialog_Signin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 160, 241, 221));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        LineEdit_UserName = new QLineEdit(widget);
        LineEdit_UserName->setObjectName("LineEdit_UserName");
        LineEdit_UserName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(LineEdit_UserName, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        LineEdit_Password = new QLineEdit(widget);
        LineEdit_Password->setObjectName("LineEdit_Password");
        LineEdit_Password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(LineEdit_Password, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        LineEdit_FirstName = new QLineEdit(widget);
        LineEdit_FirstName->setObjectName("LineEdit_FirstName");
        LineEdit_FirstName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(LineEdit_FirstName, 2, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        LineEdit_LastName = new QLineEdit(widget);
        LineEdit_LastName->setObjectName("LineEdit_LastName");
        LineEdit_LastName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(LineEdit_LastName, 3, 1, 1, 1);


        retranslateUi(Dialog_Signin);
        QObject::connect(buttonBox_Signin, &QDialogButtonBox::accepted, Dialog_Signin, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox_Signin, &QDialogButtonBox::rejected, Dialog_Signin, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_Signin);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Signin)
    {
        Dialog_Signin->setWindowTitle(QCoreApplication::translate("Dialog_Signin", "Signup", nullptr));
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("Dialog_Signin", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_Signin", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_Signin", "First name", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_Signin", "Last name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Signin: public Ui_Dialog_Signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SIGNIN_H
