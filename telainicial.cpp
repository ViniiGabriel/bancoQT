#include "telainicial.h"
#include "ui_telainicial.h"
#include "cadastrocliente.h"
#include "listaclientes.h"
#include "telaidconta.h"
#include "relatorio.h"
#include <QDir>

telaInicial::telaInicial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::telaInicial)
{
    ui->setupUi(this);

    QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("C:/Users/snowb/OneDrive/Documentos/GitHub/bancoQT/bancoDeDados/db_banco");
    bancoDeDados.open();

}

telaInicial::~telaInicial()
{
    delete ui;
}

void telaInicial::on_btn_cadastro_clicked()
{
    cadastroCliente cadastro;
    cadastro.setModal(true);
    cadastro.exec();
}


void telaInicial::on_btn_lista_clicked()
{
    listaClientes lista;
    lista.setModal(true);
    lista.exec();
}


void telaInicial::on_btn_consulta_clicked()
{
    telaIdConta telaID;
    telaID.setModal(true);
    telaID.exec();
}


void telaInicial::on_btn_relatorio_clicked()
{
    relatorio listaRelatorio;
    listaRelatorio.setModal(true);
    listaRelatorio.exec();
}

