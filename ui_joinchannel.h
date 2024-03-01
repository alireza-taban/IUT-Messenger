/********************************************************************************
** Form generated from reading UI file 'joinchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINCHANNEL_H
#define UI_JOINCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_joinchannel
{
public:
    QPushButton *pushButton;
    QLabel *label_error;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_NameChannel;
    QLineEdit *lineEdit_NameChannel;

    void setupUi(QDialog *joinchannel)
    {
        if (joinchannel->objectName().isEmpty())
            joinchannel->setObjectName("joinchannel");
        joinchannel->resize(400, 200);
        joinchannel->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        pushButton = new QPushButton(joinchannel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 140, 101, 41));
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
        label_error = new QLabel(joinchannel);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(70, 100, 261, 21));
        label_error->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(joinchannel);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 70, 261, 30));
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


        retranslateUi(joinchannel);

        QMetaObject::connectSlotsByName(joinchannel);
    } // setupUi

    void retranslateUi(QDialog *joinchannel)
    {
        joinchannel->setWindowTitle(QCoreApplication::translate("joinchannel", "Join Channel", nullptr));
        pushButton->setText(QCoreApplication::translate("joinchannel", "OK", nullptr));
        label_error->setText(QString());
        label_NameChannel->setText(QCoreApplication::translate("joinchannel", "Channel Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class joinchannel: public Ui_joinchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINCHANNEL_H
