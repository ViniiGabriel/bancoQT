/********************************************************************************
** Form generated from reading UI file 'telaidconta.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAIDCONTA_H
#define UI_TELAIDCONTA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaIdConta
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *txt_id;

    void setupUi(QDialog *telaIdConta)
    {
        if (telaIdConta->objectName().isEmpty())
            telaIdConta->setObjectName("telaIdConta");
        telaIdConta->resize(399, 234);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        telaIdConta->setWindowIcon(icon);
        telaIdConta->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        label = new QLabel(telaIdConta);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(15);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
"\n"
"\n"
""));
        pushButton = new QPushButton(telaIdConta);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 160, 171, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        txt_id = new QLineEdit(telaIdConta);
        txt_id->setObjectName("txt_id");
        txt_id->setGeometry(QRect(110, 80, 171, 61));
        txt_id->setLayoutDirection(Qt::LeftToRight);
        txt_id->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        txt_id->setAlignment(Qt::AlignCenter);

        retranslateUi(telaIdConta);

        QMetaObject::connectSlotsByName(telaIdConta);
    } // setupUi

    void retranslateUi(QDialog *telaIdConta)
    {
        telaIdConta->setWindowTitle(QCoreApplication::translate("telaIdConta", "ID", nullptr));
        label->setText(QCoreApplication::translate("telaIdConta", "     ID da conta", nullptr));
        pushButton->setText(QCoreApplication::translate("telaIdConta", "Consultar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaIdConta: public Ui_telaIdConta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAIDCONTA_H
