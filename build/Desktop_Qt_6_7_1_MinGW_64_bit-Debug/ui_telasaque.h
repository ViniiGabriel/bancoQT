/********************************************************************************
** Form generated from reading UI file 'telasaque.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELASAQUE_H
#define UI_TELASAQUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaSaque
{
public:
    QLineEdit *txt_valor;
    QLabel *label;
    QPushButton *btn_saque;

    void setupUi(QDialog *telaSaque)
    {
        if (telaSaque->objectName().isEmpty())
            telaSaque->setObjectName("telaSaque");
        telaSaque->resize(400, 300);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        telaSaque->setWindowIcon(icon);
        telaSaque->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        txt_valor = new QLineEdit(telaSaque);
        txt_valor->setObjectName("txt_valor");
        txt_valor->setGeometry(QRect(60, 100, 281, 61));
        txt_valor->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        txt_valor->setAlignment(Qt::AlignCenter);
        label = new QLabel(telaSaque);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 281, 41));
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
""));
        label->setAlignment(Qt::AlignCenter);
        btn_saque = new QPushButton(telaSaque);
        btn_saque->setObjectName("btn_saque");
        btn_saque->setGeometry(QRect(60, 180, 281, 61));
        btn_saque->setCursor(QCursor(Qt::PointingHandCursor));
        btn_saque->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));

        retranslateUi(telaSaque);

        QMetaObject::connectSlotsByName(telaSaque);
    } // setupUi

    void retranslateUi(QDialog *telaSaque)
    {
        telaSaque->setWindowTitle(QCoreApplication::translate("telaSaque", "Saque", nullptr));
        label->setText(QCoreApplication::translate("telaSaque", "Valor para Sacar:", nullptr));
        btn_saque->setText(QCoreApplication::translate("telaSaque", "Sacar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaSaque: public Ui_telaSaque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELASAQUE_H
