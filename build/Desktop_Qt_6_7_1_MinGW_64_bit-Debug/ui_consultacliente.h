/********************************************************************************
** Form generated from reading UI file 'consultacliente.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTACLIENTE_H
#define UI_CONSULTACLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consultaCliente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_deposito;
    QPushButton *btn_saque;
    QPushButton *btn_transferencia;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *txt_id;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *txt_nome;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *txt_endereco;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *txt_profissao;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *txt_renda;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *txt_tipoConta;
    QSpacerItem *horizontalSpacer_6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_saldo;
    QLabel *label_rssaldo;
    QLabel *txt_saldo;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_limite;
    QLabel *label_rslimite;
    QLabel *txt_limite;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_limiteDisp;
    QLabel *label_rslimiteDisp;
    QLabel *txt_limiteDisp;
    QSpacerItem *horizontalSpacer_9;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_pontos;
    QLabel *txt_pontos;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton;

    void setupUi(QDialog *consultaCliente)
    {
        if (consultaCliente->objectName().isEmpty())
            consultaCliente->setObjectName("consultaCliente");
        consultaCliente->resize(900, 332);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        consultaCliente->setWindowIcon(icon);
        consultaCliente->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
""));
        layoutWidget = new QWidget(consultaCliente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(530, 170, 151, 151));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_deposito = new QPushButton(layoutWidget);
        btn_deposito->setObjectName("btn_deposito");
        btn_deposito->setCursor(QCursor(Qt::PointingHandCursor));
        btn_deposito->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;\n"
""));

        verticalLayout_3->addWidget(btn_deposito);

        btn_saque = new QPushButton(layoutWidget);
        btn_saque->setObjectName("btn_saque");
        btn_saque->setCursor(QCursor(Qt::PointingHandCursor));
        btn_saque->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        verticalLayout_3->addWidget(btn_saque);

        btn_transferencia = new QPushButton(layoutWidget);
        btn_transferencia->setObjectName("btn_transferencia");
        btn_transferencia->setCursor(QCursor(Qt::PointingHandCursor));
        btn_transferencia->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        verticalLayout_3->addWidget(btn_transferencia);

        layoutWidget1 = new QWidget(consultaCliente);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 10, 471, 247));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(15);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(35, 35, 35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(label_2);

        txt_id = new QLabel(layoutWidget1);
        txt_id->setObjectName("txt_id");
        txt_id->setFont(font);
        txt_id->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
""));

        horizontalLayout->addWidget(txt_id);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(label);

        txt_nome = new QLabel(layoutWidget1);
        txt_nome->setObjectName("txt_nome");
        txt_nome->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(txt_nome);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_3->addWidget(label_3);

        txt_endereco = new QLabel(layoutWidget1);
        txt_endereco->setObjectName("txt_endereco");
        txt_endereco->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_3->addWidget(txt_endereco);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_4->addWidget(label_4);

        txt_profissao = new QLabel(layoutWidget1);
        txt_profissao->setObjectName("txt_profissao");
        txt_profissao->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_4->addWidget(txt_profissao);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_5->addWidget(label_5);

        txt_renda = new QLabel(layoutWidget1);
        txt_renda->setObjectName("txt_renda");
        txt_renda->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_5->addWidget(txt_renda);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_6->addWidget(label_6);

        txt_tipoConta = new QLabel(layoutWidget1);
        txt_tipoConta->setObjectName("txt_tipoConta");
        txt_tipoConta->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_6->addWidget(txt_tipoConta);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        layoutWidget2 = new QWidget(consultaCliente);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(530, 10, 484, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, -1, -1, -1);
        label_saldo = new QLabel(layoutWidget2);
        label_saldo->setObjectName("label_saldo");
        label_saldo->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_7->addWidget(label_saldo);

        label_rssaldo = new QLabel(layoutWidget2);
        label_rssaldo->setObjectName("label_rssaldo");
        label_rssaldo->setFont(font);
        label_rssaldo->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_7->addWidget(label_rssaldo);

        txt_saldo = new QLabel(layoutWidget2);
        txt_saldo->setObjectName("txt_saldo");
        txt_saldo->setFont(font);
        txt_saldo->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_7->addWidget(txt_saldo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_limite = new QLabel(layoutWidget2);
        label_limite->setObjectName("label_limite");
        label_limite->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_8->addWidget(label_limite);

        label_rslimite = new QLabel(layoutWidget2);
        label_rslimite->setObjectName("label_rslimite");
        label_rslimite->setFont(font);
        label_rslimite->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_8->addWidget(label_rslimite);

        txt_limite = new QLabel(layoutWidget2);
        txt_limite->setObjectName("txt_limite");
        txt_limite->setFont(font);
        txt_limite->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_8->addWidget(txt_limite);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_8);

        layoutWidget_2 = new QWidget(consultaCliente);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(530, 90, 366, 41));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_9->setSpacing(7);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_limiteDisp = new QLabel(layoutWidget_2);
        label_limiteDisp->setObjectName("label_limiteDisp");
        label_limiteDisp->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_9->addWidget(label_limiteDisp);

        label_rslimiteDisp = new QLabel(layoutWidget_2);
        label_rslimiteDisp->setObjectName("label_rslimiteDisp");
        label_rslimiteDisp->setFont(font);
        label_rslimiteDisp->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_9->addWidget(label_rslimiteDisp);

        txt_limiteDisp = new QLabel(layoutWidget_2);
        txt_limiteDisp->setObjectName("txt_limiteDisp");
        txt_limiteDisp->setFont(font);
        txt_limiteDisp->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_9->addWidget(txt_limiteDisp);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        layoutWidget_3 = new QWidget(consultaCliente);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(530, 130, 401, 41));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_pontos = new QLabel(layoutWidget_3);
        label_pontos->setObjectName("label_pontos");
        label_pontos->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_10->addWidget(label_pontos);

        txt_pontos = new QLabel(layoutWidget_3);
        txt_pontos->setObjectName("txt_pontos");
        txt_pontos->setFont(font);
        txt_pontos->setStyleSheet(QString::fromUtf8("color: rgb(35,35,35);\n"
"font: 900 15pt \"Segoe UI Black\";"));

        horizontalLayout_10->addWidget(txt_pontos);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        pushButton = new QPushButton(consultaCliente);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(800, 290, 83, 29));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 5px;\n"
"border: 10px;"));

        retranslateUi(consultaCliente);

        QMetaObject::connectSlotsByName(consultaCliente);
    } // setupUi

    void retranslateUi(QDialog *consultaCliente)
    {
        consultaCliente->setWindowTitle(QCoreApplication::translate("consultaCliente", "Consulta", nullptr));
        btn_deposito->setText(QCoreApplication::translate("consultaCliente", "Dep\303\263sito", nullptr));
        btn_saque->setText(QCoreApplication::translate("consultaCliente", "Saque", nullptr));
        btn_transferencia->setText(QCoreApplication::translate("consultaCliente", "Transfer\303\252ncia", nullptr));
        label_2->setText(QCoreApplication::translate("consultaCliente", "ID:", nullptr));
        txt_id->setText(QCoreApplication::translate("consultaCliente", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("consultaCliente", "Nome:", nullptr));
        txt_nome->setText(QCoreApplication::translate("consultaCliente", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("consultaCliente", "Endere\303\247o:", nullptr));
        txt_endereco->setText(QCoreApplication::translate("consultaCliente", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("consultaCliente", "Profiss\303\243o:", nullptr));
        txt_profissao->setText(QCoreApplication::translate("consultaCliente", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("consultaCliente", "Renda:", nullptr));
        txt_renda->setText(QCoreApplication::translate("consultaCliente", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("consultaCliente", "Tipo de Conta:", nullptr));
        txt_tipoConta->setText(QCoreApplication::translate("consultaCliente", "TextLabel", nullptr));
        label_saldo->setText(QCoreApplication::translate("consultaCliente", "Saldo:", nullptr));
        label_rssaldo->setText(QCoreApplication::translate("consultaCliente", "R$", nullptr));
        txt_saldo->setText(QCoreApplication::translate("consultaCliente", "000,00", nullptr));
        label_limite->setText(QCoreApplication::translate("consultaCliente", "Limite:", nullptr));
        label_rslimite->setText(QCoreApplication::translate("consultaCliente", "R$", nullptr));
        txt_limite->setText(QCoreApplication::translate("consultaCliente", "000,00", nullptr));
        label_limiteDisp->setText(QCoreApplication::translate("consultaCliente", "Limite dispon\303\255vel:", nullptr));
        label_rslimiteDisp->setText(QCoreApplication::translate("consultaCliente", "R$", nullptr));
        txt_limiteDisp->setText(QCoreApplication::translate("consultaCliente", "000,00", nullptr));
        label_pontos->setText(QCoreApplication::translate("consultaCliente", "Pontos:", nullptr));
        txt_pontos->setText(QCoreApplication::translate("consultaCliente", "000,00", nullptr));
        pushButton->setText(QCoreApplication::translate("consultaCliente", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consultaCliente: public Ui_consultaCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTACLIENTE_H
