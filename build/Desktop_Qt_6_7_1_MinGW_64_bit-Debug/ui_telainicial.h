/********************************************************************************
** Form generated from reading UI file 'telainicial.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIAL_H
#define UI_TELAINICIAL_H

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

class Ui_telaInicial
{
public:
    QWidget *centralwidget;
    QPushButton *btn_cadastro;
    QPushButton *btn_consulta;
    QPushButton *btn_lista;
    QLabel *label_2;
    QPushButton *btn_relatorio;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *telaInicial)
    {
        if (telaInicial->objectName().isEmpty())
            telaInicial->setObjectName("telaInicial");
        telaInicial->resize(800, 601);
        telaInicial->setCursor(QCursor(Qt::BusyCursor));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        telaInicial->setWindowIcon(icon);
        telaInicial->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        centralwidget = new QWidget(telaInicial);
        centralwidget->setObjectName("centralwidget");
        btn_cadastro = new QPushButton(centralwidget);
        btn_cadastro->setObjectName("btn_cadastro");
        btn_cadastro->setGeometry(QRect(270, 130, 221, 71));
        btn_cadastro->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cadastro->setMouseTracking(false);
        btn_cadastro->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        btn_consulta = new QPushButton(centralwidget);
        btn_consulta->setObjectName("btn_consulta");
        btn_consulta->setGeometry(QRect(270, 230, 221, 71));
        btn_consulta->setCursor(QCursor(Qt::PointingHandCursor));
        btn_consulta->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        btn_lista = new QPushButton(centralwidget);
        btn_lista->setObjectName("btn_lista");
        btn_lista->setGeometry(QRect(270, 340, 221, 71));
        btn_lista->setCursor(QCursor(Qt::PointingHandCursor));
        btn_lista->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 520, 641, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(9);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
""));
        btn_relatorio = new QPushButton(centralwidget);
        btn_relatorio->setObjectName("btn_relatorio");
        btn_relatorio->setGeometry(QRect(270, 438, 221, 71));
        btn_relatorio->setCursor(QCursor(Qt::PointingHandCursor));
        btn_relatorio->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 10, 381, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(36);
        font1.setWeight(QFont::Black);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 36pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
"\n"
"\n"
"\n"
""));
        telaInicial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(telaInicial);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        telaInicial->setMenuBar(menubar);
        statusbar = new QStatusBar(telaInicial);
        statusbar->setObjectName("statusbar");
        telaInicial->setStatusBar(statusbar);

        retranslateUi(telaInicial);

        QMetaObject::connectSlotsByName(telaInicial);
    } // setupUi

    void retranslateUi(QMainWindow *telaInicial)
    {
        telaInicial->setWindowTitle(QCoreApplication::translate("telaInicial", "Banco UFSC", nullptr));
        btn_cadastro->setText(QCoreApplication::translate("telaInicial", "CADASTRAR CLIENTE", nullptr));
        btn_consulta->setText(QCoreApplication::translate("telaInicial", "CONSULTAR CLIENTE", nullptr));
        btn_lista->setText(QCoreApplication::translate("telaInicial", "LISTA DE CLIENTES", nullptr));
        label_2->setText(QCoreApplication::translate("telaInicial", "Feito por: Bruno Arenhart Rodrigues e Vin\303\255cius Domingos Gabriel", nullptr));
        btn_relatorio->setText(QCoreApplication::translate("telaInicial", "RELAT\303\223RIO DE TRANSA\303\207\303\225ES", nullptr));
        label->setText(QCoreApplication::translate("telaInicial", "   BANCO UFSC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaInicial: public Ui_telaInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIAL_H
