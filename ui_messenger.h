/********************************************************************************
** Form generated from reading UI file 'messenger.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSENGER_H
#define UI_MESSENGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messenger
{
public:
    QWidget *centralwidget;
    QLabel *label_message;
    QPushButton *Login;
    QPushButton *Signup;
    QLabel *label;
    QLabel *welcome_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Messenger)
    {
        if (Messenger->objectName().isEmpty())
            Messenger->setObjectName("Messenger");
        Messenger->resize(500, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/source/welcome.png"), QSize(), QIcon::Normal, QIcon::Off);
        Messenger->setWindowIcon(icon);
        Messenger->setStyleSheet(QString::fromUtf8("QMainWindow#Messenger {\n"
"    background-image: url(:/source/cloud.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #dddddd;\n"
"}\n"
"\n"
"QMainWindow#Messenger QPushButton {\n"
"    background-color: transparent;\n"
"}\n"
""));
        centralwidget = new QWidget(Messenger);
        centralwidget->setObjectName("centralwidget");
        label_message = new QLabel(centralwidget);
        label_message->setObjectName("label_message");
        label_message->setGeometry(QRect(110, 450, 270, 31));
        label_message->setFrameShape(QFrame::Panel);
        label_message->setFrameShadow(QFrame::Sunken);
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(165, 310, 170, 45));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Login->setFont(font);
        Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Signup = new QPushButton(centralwidget);
        Signup->setObjectName("Signup");
        Signup->setGeometry(QRect(165, 370, 170, 45));
        Signup->setFont(font);
        Signup->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(175, 10, 150, 150));
        label->setStyleSheet(QString::fromUtf8("QLabel { border-radius: 100px; border: none; }"));
        label->setPixmap(QPixmap(QString::fromUtf8("iut_logo.png")));
        label->setScaledContents(true);
        welcome_label = new QLabel(centralwidget);
        welcome_label->setObjectName("welcome_label");
        welcome_label->setGeometry(QRect(135, 200, 301, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Harlow Solid Italic")});
        font1.setPointSize(46);
        font1.setBold(false);
        font1.setItalic(true);
        welcome_label->setFont(font1);
        welcome_label->setStyleSheet(QString::fromUtf8("font: italic 46pt \"Harlow Solid Italic\";\n"
"color: rgb(255, 255, 255);"));
        Messenger->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Messenger);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 19));
        Messenger->setMenuBar(menubar);
        statusbar = new QStatusBar(Messenger);
        statusbar->setObjectName("statusbar");
        Messenger->setStatusBar(statusbar);

        retranslateUi(Messenger);

        QMetaObject::connectSlotsByName(Messenger);
    } // setupUi

    void retranslateUi(QMainWindow *Messenger)
    {
        Messenger->setWindowTitle(QCoreApplication::translate("Messenger", "Welcome", nullptr));
        label_message->setText(QString());
        Login->setText(QCoreApplication::translate("Messenger", "Log in", nullptr));
        Signup->setText(QCoreApplication::translate("Messenger", "Sign up", nullptr));
        label->setText(QString());
        welcome_label->setText(QCoreApplication::translate("Messenger", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Messenger: public Ui_Messenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSENGER_H
