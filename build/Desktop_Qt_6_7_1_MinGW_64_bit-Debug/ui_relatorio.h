/********************************************************************************
** Form generated from reading UI file 'relatorio.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATORIO_H
#define UI_RELATORIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_relatorio
{
public:
    QTableWidget *tb_listaRelatorio;
    QLabel *label;
    QPushButton *btn_voltar;

    void setupUi(QDialog *relatorio)
    {
        if (relatorio->objectName().isEmpty())
            relatorio->setObjectName("relatorio");
        relatorio->resize(714, 568);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        relatorio->setWindowIcon(icon);
        relatorio->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
""));
        tb_listaRelatorio = new QTableWidget(relatorio);
        tb_listaRelatorio->setObjectName("tb_listaRelatorio");
        tb_listaRelatorio->setGeometry(QRect(15, 91, 681, 411));
        label = new QLabel(relatorio);
        label->setObjectName("label");
        label->setGeometry(QRect(22, 19, 461, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(28);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 28pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        btn_voltar = new QPushButton(relatorio);
        btn_voltar->setObjectName("btn_voltar");
        btn_voltar->setGeometry(QRect(610, 520, 80, 24));
        btn_voltar->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltar->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        retranslateUi(relatorio);

        QMetaObject::connectSlotsByName(relatorio);
    } // setupUi

    void retranslateUi(QDialog *relatorio)
    {
        relatorio->setWindowTitle(QCoreApplication::translate("relatorio", "Relat\303\263rio de Transa\303\247\303\265es", nullptr));
        label->setText(QCoreApplication::translate("relatorio", "Relat\303\263rio de Transa\303\247\303\265es", nullptr));
        btn_voltar->setText(QCoreApplication::translate("relatorio", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class relatorio: public Ui_relatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATORIO_H
