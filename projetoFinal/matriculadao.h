#ifndef MATRICULADAO_H
#define MATRICULADAO_H

#include "dao.h"

#include <QtSql>      //Lidar com
#include <QSqlQuery>  //banco de dados

class MatriculaDAO : public DAO<Matricula>  //Herda template da classe DAO
{
public:
    MatriculaDAO();
    void incluir(Tipo*)=0;
    Matricula* buscar(QString const &)=0;
    void alterar(Tipo*)=0;
    void deletar(QString const &)=0;
};

#endif // MATRICULADAO_H
