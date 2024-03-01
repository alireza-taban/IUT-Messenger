/********************************************************************************
** Form generated from reading UI file 'createnewgroup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWGROUP_H
#define UI_CREATENEWGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewGroup
{
public:
    QPushButton *pushButton;
    QLabel *label_error;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_NameGroup;
    QLineEdit *lineEdit_NameGroup;
    QLabel *label_TitleGroup;
    QLineEdit *lineEdit_TitleGroup;

    void setupUi(QDialog *CreateNewGroup)
    {
        if (CreateNewGroup->objectName().isEmpty())
            CreateNewGroup->setObjectName("CreateNewGroup");
        CreateNewGroup->resize(400, 300);
        CreateNewGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton = new QPushButton(CreateNewGroup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(139, 230, 110, 40));
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
        label_error = new QLabel(CreateNewGroup);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(60, 195, 275, 21));
        label_error->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(CreateNewGroup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(57, 90, 281, 101));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_NameGroup = new QLabel(layoutWidget);
        label_NameGroup->setObjectName("label_NameGroup");
        label_NameGroup->setFont(font);

        gridLayout->addWidget(label_NameGroup, 0, 0, 1, 1);

        lineEdit_NameGroup = new QLineEdit(layoutWidget);
        lineEdit_NameGroup->setObjectName("lineEdit_NameGroup");
        lineEdit_NameGroup->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(lineEdit_NameGroup, 0, 1, 1, 1);

        label_TitleGroup = new QLabel(layoutWidget);
        label_TitleGroup->setObjectName("label_TitleGroup");
        label_TitleGroup->setFont(font);

        gridLayout->addWidget(label_TitleGroup, 1, 0, 1, 1);

        lineEdit_TitleGroup = new QLineEdit(layoutWidget);
        lineEdit_TitleGroup->setObjectName("lineEdit_TitleGroup");
        lineEdit_TitleGroup->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	font: 12pt \"Century\";\n"
"}\n"
""));

        gridLayout->addWidget(lineEdit_TitleGroup, 1, 1, 1, 1);


        retranslateUi(CreateNewGroup);

        QMetaObject::connectSlotsByName(CreateNewGroup);
    } // setupUi

    void retranslateUi(QDialog *CreateNewGroup)
    {
        CreateNewGroup->setWindowTitle(QCoreApplication::translate("CreateNewGroup", "New Group", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateNewGroup", "OK", nullptr));
        label_error->setText(QString());
        label_NameGroup->setText(QCoreApplication::translate("CreateNewGroup", "Name Group", nullptr));
        label_TitleGroup->setText(QCoreApplication::translate("CreateNewGroup", "Title Group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateNewGroup: public Ui_CreateNewGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWGROUP_H
