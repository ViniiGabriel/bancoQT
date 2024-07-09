/********************************************************************************
** Form generated from reading UI file 'telatransferencia.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELATRANSFERENCIA_H
#define UI_TELATRANSFERENCIA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaTransferencia
{
public:
    QLabel *label;
    QLineEdit *txt_valor;
    QLabel *label_2;
    QLineEdit *txt_id_destinatario;
    QPushButton *pushButton;

    void setupUi(QDialog *telaTransferencia)
    {
        if (telaTransferencia->objectName().isEmpty())
            telaTransferencia->setObjectName("telaTransferencia");
        telaTransferencia->resize(533, 369);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        telaTransferencia->setWindowIcon(icon);
        label = new QLabel(telaTransferencia);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 331, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(15);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 	15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        txt_valor = new QLineEdit(telaTransferencia);
        txt_valor->setObjectName("txt_valor");
        txt_valor->setGeometry(QRect(130, 80, 271, 61));
        txt_valor->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        txt_valor->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(telaTransferencia);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 150, 331, 61));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        label_2->setAlignment(Qt::AlignCenter);
        txt_id_destinatario = new QLineEdit(telaTransferencia);
        txt_id_destinatario->setObjectName("txt_id_destinatario");
        txt_id_destinatario->setGeometry(QRect(130, 220, 271, 61));
        txt_id_destinatario->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 15pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));
        txt_id_destinatario->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(telaTransferencia);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 290, 271, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(9);
        font1.setWeight(QFont::Black);
        font1.setItalic(false);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"background-color:rgb(181, 181, 181);\n"
"border-radius: 10px;\n"
"border: 10px;\n"
""));

        retranslateUi(telaTransferencia);

        QMetaObject::connectSlotsByName(telaTransferencia);
    } // setupUi

    void retranslateUi(QDialog *telaTransferencia)
    {
        telaTransferencia->setWindowTitle(QCoreApplication::translate("telaTransferencia", "Transfer\303\252ncia", nullptr));
        label->setText(QCoreApplication::translate("telaTransferencia", "Valor da Transfer\303\252ncia:", nullptr));
        label_2->setText(QCoreApplication::translate("telaTransferencia", "ID Destinat\303\241rio", nullptr));
        pushButton->setText(QCoreApplication::translate("telaTransferencia", "Transferir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaTransferencia: public Ui_telaTransferencia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELATRANSFERENCIA_H
