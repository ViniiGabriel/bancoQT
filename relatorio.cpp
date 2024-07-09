#include "relatorio.h"
#include "ui_relatorio.h"

relatorio::relatorio(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::relatorio)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_relatorio");
    if(query.exec())
    {
        int linha=0;
        ui->tb_listaRelatorio->setColumnCount(4);
        while(query.next())
        {
            ui->tb_listaRelatorio->insertRow(linha);
            ui->tb_listaRelatorio->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tb_listaRelatorio->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tb_listaRelatorio->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tb_listaRelatorio->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tb_listaRelatorio->setRowHeight(linha, 20);
            linha++;
        }
        ui->tb_listaRelatorio->setColumnWidth(0, 160);
        ui->tb_listaRelatorio->setColumnWidth(1, 160);
        ui->tb_listaRelatorio->setColumnWidth(2, 160);
        ui->tb_listaRelatorio->setColumnWidth(3, 200);

        QStringList cabecalho = {"Transação","Conta","Conta Destino","Valor"};
        ui->tb_listaRelatorio->setHorizontalHeaderLabels(cabecalho);
        ui->tb_listaRelatorio->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tb_listaRelatorio->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tb_listaRelatorio->selectRow(0);
        ui->tb_listaRelatorio->verticalHeader()->setVisible(false);
        ui->tb_listaRelatorio->setStyleSheet("QTableView {selection-background-color:blue}");

    } else {
        QMessageBox::warning(this,"ERRO","Erro ao pesquisar relatório");
    }
}


relatorio::~relatorio()
{
    delete ui;
}

void relatorio::on_btn_voltar_clicked()
{
    this->close();
}

