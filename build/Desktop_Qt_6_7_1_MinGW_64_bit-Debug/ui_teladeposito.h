/********************************************************************************
** Form generated from reading UI file 'teladeposito.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADEPOSITO_H
#define UI_TELADEPOSITO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaDeposito
{
public:
    QLabel *label;
    QLineEdit *txt_valor;
    QPushButton *btn_depositar;

    void setupUi(QDialog *telaDeposito)
    {
        if (telaDeposito->objectName().isEmpty())
            telaDeposito->setObjectName("telaDeposito");
        telaDeposito->resize(403, 275);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        telaDeposito->setWindowIcon(icon);
        label = new QLabel(telaDeposito);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 281, 41));
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
        txt_valor = new QLineEdit(telaDeposito);
        txt_valor->setObjectName("txt_valor");
        txt_valor->setGeometry(QRect(60, 90, 281, 61));
        txt_valor->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        txt_valor->setAlignment(Qt::AlignCenter);
        btn_depositar = new QPushButton(telaDeposito);
        btn_depositar->setObjectName("btn_depositar");
        btn_depositar->setGeometry(QRect(60, 170, 281, 61));
        btn_depositar->setCursor(QCursor(Qt::PointingHandCursor));
        btn_depositar->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));

        retranslateUi(telaDeposito);

        QMetaObject::connectSlotsByName(telaDeposito);
    } // setupUi

    void retranslateUi(QDialog *telaDeposito)
    {
        telaDeposito->setWindowTitle(QCoreApplication::translate("telaDeposito", "Dep\303\263sito", nullptr));
        label->setText(QCoreApplication::translate("telaDeposito", "       Valor para depositar:", nullptr));
        txt_valor->setText(QString());
        btn_depositar->setText(QCoreApplication::translate("telaDeposito", "Depositar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaDeposito: public Ui_telaDeposito {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADEPOSITO_H
