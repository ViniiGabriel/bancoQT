#include "telatransferencia.h"
#include "ui_telatransferencia.h"
#include "contacorrente.h"
#include "contaespecial.h"
#include "contamaster.h"

telaTransferencia::telaTransferencia(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaTransferencia)
    , m_id(id)
{
    ui->setupUi(this);
}

telaTransferencia::~telaTransferencia()
{
    delete ui;
}

void telaTransferencia::on_pushButton_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM tb_clientes WHERE id = :id");
    query.bindValue(":id", m_id);
    Client *cliente = nullptr;
    Client *clienteDest = nullptr;
    ContaCorrente *contaDest = nullptr;
    ContaEspecial *contaDestEspecial = nullptr;
    ContaMaster *contaDestMaster = nullptr;
    QString tipoContaDest;
    float saldoDest;
    float limiteDest;
    float limiteDispDest;
    float pontosDest;
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
        int id_Dest = ui->txt_id_destinatario->text().toInt();
        cliente = new Client(nome.toStdString(),endereco.toStdString(),profissao.toStdString(),renda);
        query.prepare("SELECT * FROM tb_clientes WHERE id = :id_Dest");
        query.bindValue(":id_Dest", id_Dest);
        if(id_Dest != m_id){
        if(query.exec()){
            query.first();
            QString nomeDest = query.value(1).toString();
            QString enderecoDest = query.value(3).toString();
            QString profissaoDest = query.value(2).toString();
            float rendaDest = query.value(4).toFloat();
            tipoContaDest = query.value(5).toString();
            saldoDest = query.value(7).toFloat();
            limiteDest = query.value(6).toFloat();
            limiteDispDest = query.value(8).toFloat();
            clienteDest = new Client(nomeDest.toStdString(),enderecoDest.toStdString(),profissaoDest.toStdString(),rendaDest);
        } else
        {
            QMessageBox::warning(this,"ERRO","Erro ao encontrar cliente");
        }
        query.prepare("SELECT * FROM tb_clientes WHERE id = :id");
        query.bindValue(":id", m_id);
        query.exec();
        query.first();
        if(query.value(5) == "corrente")
        {
            ContaCorrente conta(cliente, saldo, m_id);
            if(tipoContaDest == "corrente"){
            contaDest = new ContaCorrente(clienteDest, saldoDest, id_Dest);
            if(!conta.Transfer(contaDest, valor))
            {
                QMessageBox::warning(this, "Erro", "Erro ao transferir");
            } else {
                QMessageBox::information(this, "Sucesso", "Transferência feita com sucesso");
                this->close();
                QString transacao = "Transferência";
                query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                query.bindValue(":transacao", transacao);
                query.bindValue(":id", m_id);
                query.bindValue(":id_Dest", id_Dest);
                query.bindValue(":valor", valor);
                query.exec();
            }
            } else if (tipoContaDest == "especial")
            {
                contaDestEspecial = new ContaEspecial(clienteDest, saldoDest, limiteDest, limiteDispDest, id_Dest);
                if(!conta.Transfer(contaDestEspecial, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feito com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }
            }else if(tipoContaDest == "master"){
                contaDestMaster = new ContaMaster(clienteDest, saldoDest, limiteDest, limiteDispDest, id_Dest, pontosDest);
                if(!conta.Transfer(contaDestMaster, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feito com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }

            }


        } else if (query.value(5) == "especial") {
            ContaEspecial conta(cliente, saldo, limite, limiteDisp, m_id);
            if(tipoContaDest == "corrente"){
                contaDest = new ContaCorrente(clienteDest, saldoDest, id_Dest);
                if(!conta.Transfer(contaDest, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feita com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }
            } else if (tipoContaDest == "especial")
            {
                contaDestEspecial = new ContaEspecial(clienteDest, saldoDest, limiteDest, limiteDispDest, id_Dest);
                if(!conta.Transfer(contaDestEspecial, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feito com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }
            }else if(tipoContaDest == "master"){
                contaDestMaster = new ContaMaster(clienteDest, saldoDest, limiteDest, limiteDispDest, id_Dest, pontosDest);
                if(!conta.Transfer(contaDestMaster, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feito com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }

            }
        } else if(query.value(5) == "master"){
            ContaMaster conta(cliente, saldo, limite, limiteDisp, m_id, pontos);
            if(tipoContaDest == "corrente"){
                contaDest = new ContaCorrente(clienteDest, saldoDest, id_Dest);
                if(!conta.Transfer(contaDest, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feita com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }
            } else if (tipoContaDest == "especial")
            {
                contaDestEspecial = new ContaEspecial(clienteDest, saldoDest, limiteDest, limiteDispDest, id_Dest);
                if(!conta.Transfer(contaDestEspecial, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feito com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }
            } else if(tipoContaDest == "master"){
                contaDestMaster = new ContaMaster(clienteDest, saldoDest, limiteDest, limiteDispDest, id_Dest, pontosDest);
                if(!conta.Transfer(contaDestMaster, valor))
                {
                    QMessageBox::warning(this, "Erro", "Erro ao transferir");
                } else {
                    QMessageBox::information(this, "Sucesso", "Transferência feito com sucesso");
                    this->close();
                    QString transacao = "Transferência";
                    query.prepare("INSERT INTO tb_relatorio (transacao, id, id_Dest, valor) VALUES (:transacao, :id, :id_Dest, :valor)");
                    query.bindValue(":transacao", transacao);
                    query.bindValue(":id", m_id);
                    query.bindValue(":id_Dest", id_Dest);
                    query.bindValue(":valor", valor);
                    query.exec();
                }
        }
        }
        else {
            QMessageBox::warning(this,"ERRO","Você não pode transferir pra si próprio");

        }
    } else {
        QMessageBox::warning(this,"ERRO","Erro na transferência");
    }
    delete cliente;
    delete clienteDest;
    delete contaDest;
    delete contaDestEspecial;
    delete contaDestMaster;
    }}

