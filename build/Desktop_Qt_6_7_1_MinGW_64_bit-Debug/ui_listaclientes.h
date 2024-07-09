/********************************************************************************
** Form generated from reading UI file 'listaclientes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTACLIENTES_H
#define UI_LISTACLIENTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listaClientes
{
public:
    QTableWidget *tb_lista;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txt_nome;
    QPushButton *btn_pesquisa;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_excluir;
    QPushButton *btn_editar;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *listaClientes)
    {
        if (listaClientes->objectName().isEmpty())
            listaClientes->setObjectName("listaClientes");
        listaClientes->resize(800, 600);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        listaClientes->setWindowIcon(icon);
        tb_lista = new QTableWidget(listaClientes);
        tb_lista->setObjectName("tb_lista");
        tb_lista->setGeometry(QRect(10, 100, 771, 371));
        tb_lista->setStyleSheet(QString::fromUtf8(""));
        tb_lista->setGridStyle(Qt::SolidLine);
        layoutWidget = new QWidget(listaClientes);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, 61, 561, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(label_2);

        txt_nome = new QLineEdit(layoutWidget);
        txt_nome->setObjectName("txt_nome");
        txt_nome->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout->addWidget(txt_nome);

        btn_pesquisa = new QPushButton(layoutWidget);
        btn_pesquisa->setObjectName("btn_pesquisa");
        btn_pesquisa->setCursor(QCursor(Qt::PointingHandCursor));
        btn_pesquisa->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout->addWidget(btn_pesquisa);

        layoutWidget1 = new QWidget(listaClientes);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 490, 169, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_excluir = new QPushButton(layoutWidget1);
        btn_excluir->setObjectName("btn_excluir");
        btn_excluir->setCursor(QCursor(Qt::PointingHandCursor));
        btn_excluir->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_2->addWidget(btn_excluir);

        btn_editar = new QPushButton(layoutWidget1);
        btn_editar->setObjectName("btn_editar");
        btn_editar->setCursor(QCursor(Qt::PointingHandCursor));
        btn_editar->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_2->addWidget(btn_editar);

        label = new QLabel(listaClientes);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 311, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 28pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(listaClientes);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 550, 80, 24));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        retranslateUi(listaClientes);

        QMetaObject::connectSlotsByName(listaClientes);
    } // setupUi

    void retranslateUi(QDialog *listaClientes)
    {
        listaClientes->setWindowTitle(QCoreApplication::translate("listaClientes", "Lista de Clientes", nullptr));
        label_2->setText(QCoreApplication::translate("listaClientes", "Pesquisar nome:", nullptr));
        btn_pesquisa->setText(QCoreApplication::translate("listaClientes", "Pesquisar", nullptr));
        btn_excluir->setText(QCoreApplication::translate("listaClientes", "Excluir", nullptr));
        btn_editar->setText(QCoreApplication::translate("listaClientes", "Editar", nullptr));
        label->setText(QCoreApplication::translate("listaClientes", "Lista de clientes", nullptr));
        pushButton->setText(QCoreApplication::translate("listaClientes", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listaClientes: public Ui_listaClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTACLIENTES_H
