/********************************************************************************
** Form generated from reading UI file 'joingroup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINGROUP_H
#define UI_JOINGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_joingroup
{
public:
    QPushButton *pushButton;
    QLabel *label_error;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_NameGroup;
    QLineEdit *lineEdit_NameGroup;

    void setupUi(QDialog *joingroup)
    {
        if (joingroup->objectName().isEmpty())
            joingroup->setObjectName("joingroup");
        joingroup->resize(400, 200);
        joingroup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(joingroup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(139, 150, 110, 40));
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
        label_error = new QLabel(joingroup);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(80, 100, 241, 20));
        label_error->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(joingroup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 60, 241, 30));
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


        retranslateUi(joingroup);

        QMetaObject::connectSlotsByName(joingroup);
    } // setupUi

    void retranslateUi(QDialog *joingroup)
    {
        joingroup->setWindowTitle(QCoreApplication::translate("joingroup", "Join Group", nullptr));
        pushButton->setText(QCoreApplication::translate("joingroup", "OK", nullptr));
        label_error->setText(QString());
        label_NameGroup->setText(QCoreApplication::translate("joingroup", "Group Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class joingroup: public Ui_joingroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINGROUP_H
