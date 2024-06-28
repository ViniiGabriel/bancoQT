#include "cadastrocliente.h"
#include "ui_cadastrocliente.h"

cadastroCliente::cadastroCliente(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroCliente)
{
    ui->setupUi(this);
    ui->txt_limite->setText("0");
    ui->labelCadastro->setVisible(false);
    ui->label_limite->setEnabled(false);
    ui->txt_limite->setEnabled(false);
    ui->radioCorrente->setChecked(true);
    ui->label_informacoes->setVisible(false);

}

cadastroCliente::~cadastroCliente()
{
    delete ui;
}

void cadastroCliente::on_radioEspecial_clicked()
{
    ui->label_limite->setEnabled(true);
    ui->txt_limite->setEnabled(true);
}
void cadastroCliente::on_radioCorrente_clicked()
{
    ui->txt_limite->setEnabled(false);
    ui->label_limite->setEnabled(false);
    ui->txt_limite->setVisible(false);
    ui->label_limite->setVisible(false);

}
void cadastroCliente::on_radioMaster_clicked()
{
    ui->label_limite->setEnabled(true);
    ui->txt_limite->setEnabled(true);
}


void cadastroCliente::on_btn_cadastrar_clicked()
{

    QString nome = ui->txt_nome->text();
    QString endereco = ui->txt_endereco->text();
    QString profissao = ui->txt_profissao->text();
    QString renda = ui->txt_renda->text();
    QString tipoConta;
    QString limite;
    QString limiteDisp;
    QString saldo="0";
    QString pontos="0";

    if(ui->radioCorrente->isChecked())
    {
        tipoConta = "corrente";
        limite = "0";
        limiteDisp = "0";
    }
    if(ui->radioEspecial->isChecked())
    {
        tipoConta = "especial";
        limite = ui->txt_limite->text();
        limiteDisp = ui->txt_limite->text();
        if(ui->txt_limite->text() == "")
        {
            limite = "0";
        }
    }
    if(ui->radioMaster->isChecked())
    {
        tipoConta = "master";
        limite = ui->txt_limite->text();
        limiteDisp = ui->txt_limite->text();
        if(ui->txt_limite->text() == "")
        {
            limite = "0";
        }
    }
    if(nome != "" && profissao != "" && endereco != "" && renda != ""){
    QSqlQuery query;
    query.prepare("insert into tb_clientes (nome,profissao,endereco,renda,tipoConta,limite,saldo,limiteDisponivel,pontos) values "
                  "('"+nome+"','"+profissao+"','"+endereco+"', '"+renda+"','"+tipoConta+"', '"+limite+"', '"+saldo+"','"+limiteDisp+"','"+pontos+"')");
    query.exec();

    ui->labelCadastro->setVisible(true);

    ui->txt_nome->clear();
    ui->txt_endereco->clear();
    ui->txt_profissao->clear();
    ui->txt_renda->clear();
    ui->txt_limite->clear();
    ui->radioCorrente->setChecked(true);
    ui->txt_limite->setEnabled(false);
    ui->label_limite->setEnabled(false);
    ui->label_informacoes->setVisible(false);

    } else {
        ui->label_informacoes->setVisible(true);
    }
}





void cadastroCliente::on_pushButton_clicked()
{
    close();
}

