/********************************************************************************
** Form generated from reading UI file 'createnewchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWCHANNEL_H
#define UI_CREATENEWCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createnewchannel
{
public:
    QPushButton *pushButton;
    QLabel *label_Error;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_NameChannel;
    QLineEdit *lineEdit_NameChannel;
    QLabel *label_TitleChannel;
    QLineEdit *lineEdit_TitleChannel;

    void setupUi(QDialog *createnewchannel)
    {
        if (createnewchannel->objectName().isEmpty())
            createnewchannel->setObjectName("createnewchannel");
        createnewchannel->resize(400, 300);
        createnewchannel->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);"));
        pushButton = new QPushButton(createnewchannel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 250, 110, 40));
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
        label_Error = new QLabel(createnewchannel);
        label_Error->setObjectName("label_Error");
        label_Error->setGeometry(QRect(70, 215, 281, 21));
        label_Error->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(createnewchannel);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 80, 281, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_NameChannel = new QLabel(layoutWidget);
        label_NameChannel->setObjectName("label_NameChannel");
        label_NameChannel->setFont(font);

        gridLayout->addWidget(label_NameChannel, 0, 0, 1, 1);

        lineEdit_NameChannel = new QLineEdit(layoutWidget);
        lineEdit_NameChannel->setObjectName("lineEdit_NameChannel");
        lineEdit_NameChannel->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(lineEdit_NameChannel, 0, 1, 1, 1);

        label_TitleChannel = new QLabel(layoutWidget);
        label_TitleChannel->setObjectName("label_TitleChannel");
        label_TitleChannel->setFont(font);

        gridLayout->addWidget(label_TitleChannel, 1, 0, 1, 1);

        lineEdit_TitleChannel = new QLineEdit(layoutWidget);
        lineEdit_TitleChannel->setObjectName("lineEdit_TitleChannel");
        lineEdit_TitleChannel->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(lineEdit_TitleChannel, 1, 1, 1, 1);


        retranslateUi(createnewchannel);

        QMetaObject::connectSlotsByName(createnewchannel);
    } // setupUi

    void retranslateUi(QDialog *createnewchannel)
    {
        createnewchannel->setWindowTitle(QCoreApplication::translate("createnewchannel", "New Channel", nullptr));
        pushButton->setText(QCoreApplication::translate("createnewchannel", "OK", nullptr));
        label_Error->setText(QString());
        label_NameChannel->setText(QCoreApplication::translate("createnewchannel", "Name Channel", nullptr));
        label_TitleChannel->setText(QCoreApplication::translate("createnewchannel", "Title Channel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createnewchannel: public Ui_createnewchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWCHANNEL_H
