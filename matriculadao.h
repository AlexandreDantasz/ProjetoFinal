#ifndef MATRICULADAO_H
#define MATRICULADAO_H

#include "dao.h"
#include "matricula.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

class MatriculaDAO : public DAO<Matricula>  //Herda template da classe DAO
{
public:
    MatriculaDAO();
    void incluir(Matricula*mat)=0;
   bool buscar(Matricula *obj)=0;
    void  alterar(Matricula*, Matricula *)=0;
    void deletar(QString const &)=0;
private:
    QString nomeBD;
    QSqlDatabase db;
};

#endif // MATRICULADAO_H
