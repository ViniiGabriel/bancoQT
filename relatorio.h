#ifndef RELATORIO_H
#define RELATORIO_H
#include "teladeposito.h"
#include "telasaque.h"
#include "telatransferencia.h"
#include <QtSql>

#include <QDialog>

namespace Ui {
class relatorio;
}

class relatorio : public QDialog
{
    Q_OBJECT

public:
    explicit relatorio(QWidget *parent = nullptr);
    ~relatorio();

private slots:
    void on_btn_voltar_clicked();

private:
    Ui::relatorio *ui;
};

#endif // RELATORIO_H
