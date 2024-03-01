/********************************************************************************
** Form generated from reading UI file 'newchat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHAT_H
#define UI_NEWCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newchat
{
public:
    QPushButton *pushButton;
    QLabel *label_error;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_NameUSer;
    QLineEdit *lineEdit_NameUser;

    void setupUi(QDialog *newchat)
    {
        if (newchat->objectName().isEmpty())
            newchat->setObjectName("newchat");
        newchat->resize(400, 200);
        newchat->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        pushButton = new QPushButton(newchat);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 150, 110, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    background-color: #376fa6;\n"
"	color: \"white\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #007600;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #888888;\n"
"}\n"
""));
        label_error = new QLabel(newchat);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(50, 110, 301, 31));
        label_error->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(newchat);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 60, 301, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_NameUSer = new QLabel(layoutWidget);
        label_NameUSer->setObjectName("label_NameUSer");
        label_NameUSer->setFont(font);

        gridLayout->addWidget(label_NameUSer, 0, 0, 1, 1);

        lineEdit_NameUser = new QLineEdit(layoutWidget);
        lineEdit_NameUser->setObjectName("lineEdit_NameUser");
        lineEdit_NameUser->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(lineEdit_NameUser, 0, 1, 1, 1);


        retranslateUi(newchat);

        QMetaObject::connectSlotsByName(newchat);
    } // setupUi

    void retranslateUi(QDialog *newchat)
    {
        newchat->setWindowTitle(QCoreApplication::translate("newchat", "New Chat", nullptr));
        pushButton->setText(QCoreApplication::translate("newchat", "OK", nullptr));
        label_error->setText(QString());
        label_NameUSer->setText(QCoreApplication::translate("newchat", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newchat: public Ui_newchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHAT_H
