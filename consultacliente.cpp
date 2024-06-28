#include "consultacliente.h"
#include "ui_consultacliente.h"
#include "teladeposito.h"
#include "telasaque.h"
#include "telatransferencia.h"
#include "QMessageBox"

consultaCliente::consultaCliente(QWidget *parent, int id_cliente)
    : QDialog(parent)
    , ui(new Ui::consultaCliente)
    , id(id_cliente)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("select * from tb_clientes where id="+QString::number(id));
    if(query.value(1).toString() == " "){
        QMessageBox::warning(this, "Erro", "Conta não encontrada.");
    }else if(query.exec()){
            query.first();
            ui->txt_id->setText(QString::number(id_cliente));
            ui->txt_nome->setText(query.value(1).toString());
            ui->txt_endereco->setText(query.value(3).toString());
            ui->txt_profissao->setText(query.value(2).toString());
            ui->txt_renda->setText(query.value(4).toString());
            float limite = query.value(6).toFloat();
            ui->txt_limite->setText(QString::number(limite));
            ui->txt_saldo->setText(query.value(7).toString());
            float limiteDisp = query.value(8).toFloat();
            ui->txt_limiteDisp->setText(QString::number(limiteDisp));
            float pontos = query.value(9).toFloat();
            ui->txt_pontos->setText(QString::number(pontos));
            QString tipoConta = query.value(5).toString();
            ui->txt_tipoConta->setText(tipoConta);
            if(tipoConta == "corrente")
            {
                ui->txt_limite->setVisible(false);
                ui->label_limite->setVisible(false);
                ui->label_rslimite->setVisible(false);
                ui->txt_limiteDisp->setVisible(false);
                ui->label_limiteDisp->setVisible(false);
                ui->label_rslimiteDisp->setVisible(false);
                ui->txt_pontos->setVisible(false);
                ui->label_pontos->setVisible(false);

            } else if(tipoConta == "especial")
            {
                ui->txt_limite->setVisible(true);
                ui->label_limite->setVisible(true);
                ui->label_rslimite->setVisible(true);
                ui->txt_limiteDisp->setVisible(true);
                ui->label_limiteDisp->setVisible(true);
                ui->label_rslimiteDisp->setVisible(true);
                ui->txt_pontos->setVisible(false);
                ui->label_pontos->setVisible(false);
            }
            else if(tipoConta == "master")
            {
                ui->txt_limite->setVisible(true);
                ui->label_limite->setVisible(true);
                ui->label_rslimite->setVisible(true);
                ui->txt_limiteDisp->setVisible(true);
                ui->label_limiteDisp->setVisible(true);
                ui->label_rslimiteDisp->setVisible(true);
                ui->txt_pontos->setVisible(true);
                ui->label_pontos->setVisible(true);
            }
        } else {
            QMessageBox::warning(this, "ERRO", "Erro ao consultar informações");
        }
    }

    consultaCliente::~consultaCliente()
    {
        delete ui;
    }

    void consultaCliente::on_btn_deposito_clicked()
    {
        telaDeposito tela(NULL, id);
        tela.setModal(true);
        tela.exec();
        QSqlQuery query;
        query.prepare("select * from tb_clientes where id="+QString::number(id));
        if(query.exec()){
            query.first();
            ui->txt_saldo->setText(query.value(7).toString());
            float limite = query.value(6).toFloat();
            float limiteDisp = query.value(8).toFloat();
            float pontos = query.value(9).toFloat();
            ui->txt_limite->setText(QString::number(limite));
            ui->txt_limiteDisp->setText(QString::number(limiteDisp));
            ui->txt_pontos->setText(QString::number(pontos));
        }
    }


    void consultaCliente::on_btn_saque_clicked()
    {
        telaSaque tela(NULL, id);
        tela.setModal(true);
        tela.exec();
        QSqlQuery query;
        query.prepare("select * from tb_clientes where id="+QString::number(id));
        if(query.exec()){
            query.first();
            ui->txt_saldo->setText(query.value(7).toString());
            float limite = query.value(6).toFloat();
            float limiteDisp = query.value(8).toFloat();
            ui->txt_limite->setText(QString::number(limite));
            ui->txt_limiteDisp->setText(QString::number(limiteDisp));
        }
    }


    void consultaCliente::on_btn_transferencia_clicked()
    {
        telaTransferencia tela(NULL, id);
        tela.setModal(true);
        tela.exec();
        QSqlQuery query;
        query.prepare("select * from tb_clientes where id="+QString::number(id));
        if(query.exec()){
            query.first();
            ui->txt_saldo->setText(query.value(7).toString());
            float limite = query.value(6).toFloat();
            float limiteDisp = query.value(8).toFloat();
            float pontos = query.value(9).toFloat();
            ui->txt_limite->setText(QString::number(limite));
            ui->txt_limiteDisp->setText(QString::number(limiteDisp));
            ui->txt_pontos->setText(QString::number(pontos));
        }
    }


    void consultaCliente::on_pushButton_clicked()
    {
        close();
    }

