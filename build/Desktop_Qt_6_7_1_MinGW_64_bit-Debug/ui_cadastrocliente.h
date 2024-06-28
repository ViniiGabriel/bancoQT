/********************************************************************************
** Form generated from reading UI file 'cadastrocliente.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROCLIENTE_H
#define UI_CADASTROCLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroCliente
{
public:
    QPushButton *btn_cadastrar;
    QLabel *labelCadastro;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioCorrente;
    QRadioButton *radioEspecial;
    QRadioButton *radioMaster;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_limite;
    QLineEdit *txt_limite;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *txt_endereco;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_profissao;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *txt_renda;
    QLabel *label_informacoes;
    QPushButton *pushButton;

    void setupUi(QDialog *cadastroCliente)
    {
        if (cadastroCliente->objectName().isEmpty())
            cadastroCliente->setObjectName("cadastroCliente");
        cadastroCliente->resize(472, 364);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        cadastroCliente->setWindowIcon(icon);
        cadastroCliente->setStyleSheet(QString::fromUtf8("background-color:#fff;"));
        btn_cadastrar = new QPushButton(cadastroCliente);
        btn_cadastrar->setObjectName("btn_cadastrar");
        btn_cadastrar->setGeometry(QRect(130, 260, 211, 24));
        btn_cadastrar->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cadastrar->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));
        labelCadastro = new QLabel(cadastroCliente);
        labelCadastro->setObjectName("labelCadastro");
        labelCadastro->setGeometry(QRect(130, 290, 211, 16));
        labelCadastro->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));
        labelCadastro->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(cadastroCliente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(10, 160, 441, 30));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioCorrente = new QRadioButton(layoutWidget);
        radioCorrente->setObjectName("radioCorrente");
        radioCorrente->setCursor(QCursor(Qt::PointingHandCursor));
        radioCorrente->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_6->addWidget(radioCorrente);

        radioEspecial = new QRadioButton(layoutWidget);
        radioEspecial->setObjectName("radioEspecial");
        radioEspecial->setCursor(QCursor(Qt::PointingHandCursor));
        radioEspecial->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_6->addWidget(radioEspecial);

        radioMaster = new QRadioButton(layoutWidget);
        radioMaster->setObjectName("radioMaster");
        radioMaster->setCursor(QCursor(Qt::PointingHandCursor));
        radioMaster->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_6->addWidget(radioMaster);

        layoutWidget1 = new QWidget(cadastroCliente);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 190, 441, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_limite = new QLabel(layoutWidget1);
        label_limite->setObjectName("label_limite");
        label_limite->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout_7->addWidget(label_limite);

        txt_limite = new QLineEdit(layoutWidget1);
        txt_limite->setObjectName("txt_limite");
        txt_limite->setEnabled(true);
        txt_limite->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_7->addWidget(txt_limite);

        layoutWidget2 = new QWidget(cadastroCliente);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(11, 11, 441, 143));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
""));

        horizontalLayout_4->addWidget(label);

        txt_nome = new QLineEdit(layoutWidget2);
        txt_nome->setObjectName("txt_nome");
        txt_nome->setCursor(QCursor(Qt::BusyCursor));
        txt_nome->setAutoFillBackground(false);
        txt_nome->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_4->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
""));

        horizontalLayout_3->addWidget(label_2);

        txt_endereco = new QLineEdit(layoutWidget2);
        txt_endereco->setObjectName("txt_endereco");
        txt_endereco->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;\n"
""));

        horizontalLayout_3->addWidget(txt_endereco);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(label_3);

        txt_profissao = new QLineEdit(layoutWidget2);
        txt_profissao->setObjectName("txt_profissao");
        txt_profissao->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        horizontalLayout_2->addWidget(txt_profissao);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(label_4);

        txt_renda = new QLineEdit(layoutWidget2);
        txt_renda->setObjectName("txt_renda");
        txt_renda->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181,181,181);\n"
"border-radius: 5px;\n"
"border: 10px;"));
        txt_renda->setMaxLength(32767);

        horizontalLayout->addWidget(txt_renda);


        verticalLayout->addLayout(horizontalLayout);

        label_informacoes = new QLabel(cadastroCliente);
        label_informacoes->setObjectName("label_informacoes");
        label_informacoes->setGeometry(QRect(110, 230, 251, 20));
        label_informacoes->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));
        label_informacoes->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(cadastroCliente);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 310, 83, 29));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        retranslateUi(cadastroCliente);

        QMetaObject::connectSlotsByName(cadastroCliente);
    } // setupUi

    void retranslateUi(QDialog *cadastroCliente)
    {
        cadastroCliente->setWindowTitle(QCoreApplication::translate("cadastroCliente", "Cadastro", nullptr));
        btn_cadastrar->setText(QCoreApplication::translate("cadastroCliente", "Cadastrar Cliente", nullptr));
        labelCadastro->setText(QCoreApplication::translate("cadastroCliente", " Cliente cadastrado com sucesso", nullptr));
        radioCorrente->setText(QCoreApplication::translate("cadastroCliente", "Conta Corrente", nullptr));
        radioEspecial->setText(QCoreApplication::translate("cadastroCliente", "Conta Especial", nullptr));
        radioMaster->setText(QCoreApplication::translate("cadastroCliente", "Conta Master", nullptr));
        label_limite->setText(QCoreApplication::translate("cadastroCliente", "Limite:", nullptr));
        label->setText(QCoreApplication::translate("cadastroCliente", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("cadastroCliente", "Endere\303\247o:", nullptr));
        label_3->setText(QCoreApplication::translate("cadastroCliente", "Profiss\303\243o:", nullptr));
        label_4->setText(QCoreApplication::translate("cadastroCliente", "Renda:", nullptr));
        txt_renda->setInputMask(QString());
        label_informacoes->setText(QCoreApplication::translate("cadastroCliente", "        Preencha todas as informa\303\247\303\265es", nullptr));
        pushButton->setText(QCoreApplication::translate("cadastroCliente", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroCliente: public Ui_cadastroCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROCLIENTE_H
