/********************************************************************************
** Form generated from reading UI file 'safheasli.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFHEASLI_H
#define UI_SAFHEASLI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SafheAsli
{
public:
    QAction *actionLog_out;
    QAction *actionnew_chat;
    QAction *actionnew_group;
    QAction *actionnew_channel;
    QAction *actionjoin_group;
    QAction *actionjoin_channel;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextBrowser *textBrowser_asli;
    QPushButton *pushButton;
    QLineEdit *lineEdit_asli;
    QLabel *name_label;
    QWidget *page_2;
    QListWidget *group_list;
    QListWidget *channel_list;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuoptions;
    QMenu *menuadd;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SafheAsli)
    {
        if (SafheAsli->objectName().isEmpty())
            SafheAsli->setObjectName("SafheAsli");
        SafheAsli->resize(800, 650);
        SafheAsli->setStyleSheet(QString::fromUtf8("background-color: rgb(108, 184, 255);"));
        actionLog_out = new QAction(SafheAsli);
        actionLog_out->setObjectName("actionLog_out");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/source/ham_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog_out->setIcon(icon);
        actionnew_chat = new QAction(SafheAsli);
        actionnew_chat->setObjectName("actionnew_chat");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/source/newchat.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew_chat->setIcon(icon1);
        actionnew_group = new QAction(SafheAsli);
        actionnew_group->setObjectName("actionnew_group");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/source/newgroup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew_group->setIcon(icon2);
        actionnew_channel = new QAction(SafheAsli);
        actionnew_channel->setObjectName("actionnew_channel");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/source/newchannel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew_channel->setIcon(icon3);
        actionjoin_group = new QAction(SafheAsli);
        actionjoin_group->setObjectName("actionjoin_group");
        actionjoin_channel = new QAction(SafheAsli);
        actionjoin_channel->setObjectName("actionjoin_channel");
        centralwidget = new QWidget(SafheAsli);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(5, 20, 200, 170));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QListWidget {\n"
"    border-radius: 10px;\n"
"    background-color: rgb(255, 255, 200);\n"
"	font: 700 12pt \"Segoe Print\";\n"
"	border-color: rgb(30, 14, 255);\n"
"}"));
        listWidget->setFrameShape(QFrame::Box);
        listWidget->setFrameShadow(QFrame::Plain);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(219, 0, 581, 600));
        page = new QWidget();
        page->setObjectName("page");
        textBrowser_asli = new QTextBrowser(page);
        textBrowser_asli->setObjectName("textBrowser_asli");
        textBrowser_asli->setGeometry(QRect(30, 29, 500, 481));
        QFont font1;
        font1.setPointSize(12);
        textBrowser_asli->setFont(font1);
        textBrowser_asli->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QTextBrowser {\n"
"    border-radius: 10px;\n"
"    background-image: url(:/source/back_chat.png);\n"
"	\n"
"	border-color: rgb(30, 14, 255);\n"
"}\n"
""));
        textBrowser_asli->setFrameShape(QFrame::Box);
        textBrowser_asli->setFrameShadow(QFrame::Plain);
        textBrowser_asli->setLineWidth(3);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(480, 515, 50, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    background-color: #376fa6;\n"
"	color: \"white\";\n"
"	\n"
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
        pushButton->setIconSize(QSize(20, 20));
        lineEdit_asli = new QLineEdit(page);
        lineEdit_asli->setObjectName("lineEdit_asli");
        lineEdit_asli->setGeometry(QRect(30, 515, 450, 41));
        lineEdit_asli->setFont(font1);
        lineEdit_asli->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
""));
        name_label = new QLabel(page);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(30, 0, 501, 31));
        name_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border-radius: 6px;\n"
"	\n"
"	font: 700 12pt \"Segoe Print\";\n"
"\n"
"	background-color: rgb(255, 85, 127);\n"
"\n"
"	border-color: rgb(85, 85, 0);\n"
"\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        group_list = new QListWidget(centralwidget);
        group_list->setObjectName("group_list");
        group_list->setGeometry(QRect(5, 220, 200, 170));
        group_list->setFont(font);
        group_list->setStyleSheet(QString::fromUtf8("\n"
"QListWidget {\n"
"    border-radius: 10px;\n"
"    background-color: rgb(190, 255, 150);\n"
"	font: 700 12pt \"Segoe Print\";\n"
"	border-color: rgb(30, 14, 255);\n"
"}"));
        group_list->setFrameShape(QFrame::Box);
        group_list->setFrameShadow(QFrame::Plain);
        channel_list = new QListWidget(centralwidget);
        channel_list->setObjectName("channel_list");
        channel_list->setGeometry(QRect(5, 420, 200, 170));
        channel_list->setFont(font);
        channel_list->setStyleSheet(QString::fromUtf8("\n"
"QListWidget {\n"
"    border-radius: 10px;\n"
"    background-color: rgb(255, 220, 150);\n"
"	font: 700 12pt \"Segoe Print\";\n"
"	border-color: rgb(30, 14, 255);\n"
"}"));
        channel_list->setFrameShape(QFrame::Box);
        channel_list->setFrameShadow(QFrame::Plain);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(5, 0, 41, 14));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(5, 200, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(5, 400, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));
        SafheAsli->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SafheAsli);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menuoptions = new QMenu(menubar);
        menuoptions->setObjectName("menuoptions");
        menuadd = new QMenu(menubar);
        menuadd->setObjectName("menuadd");
        SafheAsli->setMenuBar(menubar);
        statusbar = new QStatusBar(SafheAsli);
        statusbar->setObjectName("statusbar");
        SafheAsli->setStatusBar(statusbar);

        menubar->addAction(menuoptions->menuAction());
        menubar->addAction(menuadd->menuAction());
        menuoptions->addAction(actionLog_out);
        menuadd->addSeparator();
        menuadd->addAction(actionnew_chat);
        menuadd->addAction(actionnew_group);
        menuadd->addAction(actionnew_channel);
        menuadd->addAction(actionjoin_group);
        menuadd->addAction(actionjoin_channel);

        retranslateUi(SafheAsli);

        QMetaObject::connectSlotsByName(SafheAsli);
    } // setupUi

    void retranslateUi(QMainWindow *SafheAsli)
    {
        SafheAsli->setWindowTitle(QCoreApplication::translate("SafheAsli", "MainWindow", nullptr));
        actionLog_out->setText(QCoreApplication::translate("SafheAsli", "Log out", nullptr));
        actionnew_chat->setText(QCoreApplication::translate("SafheAsli", "new chat", nullptr));
        actionnew_group->setText(QCoreApplication::translate("SafheAsli", "new group", nullptr));
        actionnew_channel->setText(QCoreApplication::translate("SafheAsli", "new channel", nullptr));
        actionjoin_group->setText(QCoreApplication::translate("SafheAsli", "join group", nullptr));
        actionjoin_channel->setText(QCoreApplication::translate("SafheAsli", "join channel", nullptr));
        textBrowser_asli->setHtml(QCoreApplication::translate("SafheAsli", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QString());
        name_label->setText(QString());
        label->setText(QCoreApplication::translate("SafheAsli", "Chats", nullptr));
        label_2->setText(QCoreApplication::translate("SafheAsli", "Groups", nullptr));
        label_3->setText(QCoreApplication::translate("SafheAsli", "Channels", nullptr));
        menuoptions->setTitle(QCoreApplication::translate("SafheAsli", "opt", nullptr));
        menuadd->setTitle(QCoreApplication::translate("SafheAsli", "add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SafheAsli: public Ui_SafheAsli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFHEASLI_H
