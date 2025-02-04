#ifndef CONTAMASTER_H
#define CONTAMASTER_H

#include "account.h"
#include <QtSql>

class ContaMaster : public Account
{
protected:
    float m_pontos;
    float m_limit;
    const float m_accountLimit;
    int m_id;
public:
    ContaMaster(Client *client, float balance = 0, float limit = 0, float limiteDisponivel = 0, int id=0, float pontos=0)
        : Account(client, balance), m_limit(limiteDisponivel), m_accountLimit(limit), m_id(id), m_pontos(pontos) {}
    ~ContaMaster(){}

    bool Withdraw(float value)
    {
        float amountForLimit;
        if (value <= m_balance + m_limit)
        {
            if(value > m_balance){
                amountForLimit = value - m_balance;
                value -= amountForLimit;
                m_balance -= value;
                m_limit -= amountForLimit;
            } else {
                m_balance -= value;
            }
            QSqlQuery query;
            query.prepare("update tb_clientes set saldo='"+QString::number(m_balance)+"',limiteDisponivel='"+QString::number(m_limit)+"' where id="+QString::number(m_id));
            if(query.exec()){
                return true;
            }
        }
        return false;
    }

    bool Deposit(float value)
    {
        if (m_limit < m_accountLimit)
        {
            float amountToLimit = m_accountLimit - m_limit;
            if (value <= amountToLimit)
            {
                m_limit += value;
            }
            else
            {
                m_limit = m_accountLimit;
                m_balance += (value - amountToLimit);
            }
        }
        else
        {
            m_balance += value;
        }
        m_pontos += value/10;
        QSqlQuery query;
        query.prepare("update tb_clientes set saldo='"+QString::number(m_balance)+"',limiteDisponivel='"+QString::number(m_limit)+"',pontos='"+QString::number(m_pontos)+"' where id="+QString::number(m_id));
        if(query.exec()){
            return true;
        } else {
            return false;
        }
    }
    bool Transfer(Account *client, float value)
    {

        if (value <= m_balance + m_limit)
        {
            Withdraw(value);
            client->Deposit(value);
            m_pontos += value/5;

            QSqlQuery query;
            query.prepare("update tb_clientes set saldo='"+QString::number(m_balance)+"',limiteDisponivel='"+QString::number(m_limit)+"',pontos='"+QString::number(m_pontos)+"' where id="+QString::number(m_id));
            if(query.exec()){
                return true;
            }
        } else {
            return false;
        }
    }
};

#endif // CONTAMASTER_H
