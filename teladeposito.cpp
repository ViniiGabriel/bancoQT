#include "teladeposito.h"
#include "ui_teladeposito.h"
#include "contaespecial.h"
#include "contacorrente.h"
#include "contamaster.h"
#include <QDebug>

using namespace std;

telaDeposito::telaDeposito(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaDeposito)
    , m_id(id)
{
    ui->setupUi(this);
}

telaDeposito::~telaDeposito()
{
    delete ui;
}



void telaDeposito::on_btn_depositar_clicked()
{
    query.prepare("SELECT * FROM tb_clientes WHERE id = :id");
    query.bindValue(":id", m_id);
    if(query.exec()){
        query.first();
        QString nome = query.value(1).toString();
        QString endereco = query.value(3).toString();
        QString profissao = query.value(2).toString();
        float renda = query.value(4).toFloat();
        float saldo = query.value(7).toFloat();
        float limite = query.value(6).toFloat();
        float limiteDisp = query.value(8).toFloat();
        float valor = ui->txt_valor->text().toFloat();
        float pontos = query.value(9).toFloat();
        Client *cliente = new Client(nome.toStdString(),endereco.toStdString(),profissao.toStdString(),renda);
        if(query.value(5) == "corrente")
        {
            ContaCorrente conta(cliente, saldo, m_id);
            if(!conta.Deposit(valor))
            {
                QMessageBox::warning(this, "Erro", "Erro ao depositar");
            } else {
                QMessageBox::information(this, "Sucesso", "Deposito feito com sucesso");
                this->close();
                QString transacao = "Depósito";
                query.prepare("INSERT INTO tb_relatorio (transacao, id, valor) VALUES (:transacao, :id, :valor)");
                query.bindValue(":transacao", transacao);
                query.bindValue(":id", m_id);
                query.bindValue(":valor", valor);
                query.exec();
            }

        } else if (query.value(5) == "especial") {
            ContaEspecial conta(cliente, saldo, limite, limiteDisp, m_id);
            if(!conta.Deposit(valor))
            {
                QMessageBox::warning(this, "Erro", "Erro ao depositar");
            } else {
                QMessageBox::information(this, "Sucesso", "Deposito feito com sucesso");
                this->close();
                QString transacao = "Depósito";
                query.prepare("INSERT INTO tb_relatorio (transacao, id, valor) VALUES (:transacao, :id, :valor)");
                query.bindValue(":transacao", transacao);
                query.bindValue(":id", m_id);
                query.bindValue(":valor", valor);
                query.exec();
            }
        } else if (query.value(5) == "master") {
            ContaMaster conta(cliente, saldo, limite, limiteDisp, m_id, pontos);
            if(!conta.Deposit(valor))
            {
                QMessageBox::warning(this, "Erro", "Erro ao depositar");
            } else {
                QMessageBox::information(this, "Sucesso", "Deposito feito com sucesso");
                this->close();
                QString transacao = "Depósito";
                query.prepare("INSERT INTO tb_relatorio (transacao, id, valor) VALUES (:transacao, :id, :valor)");
                query.bindValue(":transacao", transacao);
                query.bindValue(":id", m_id);
                query.bindValue(":valor", valor);
                query.exec();
            }
        }
        delete cliente;
    } else {
        QMessageBox::warning(this,"ERRO","Erro no deposito");
    }


}

