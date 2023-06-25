#ifndef ALUNODAO_H
#define ALUNODAO_H

#include "dao.h"
#include "aluno.h"
#include <QString>
#include <string>

class AlunoDAO : public DAO<Aluno>
{
public:
    AlunoDAO();
    void incluir(Aluno* obj);
    bool buscar(Aluno* obj);
    void alterar(Aluno* obj);
    void remover(Aluno* obj); // estava retornando um ponteiro para Aluno mas mudamos
private:
    QString nomeBD;
    QSqlDatabase db;

};

#endif // ALUNODAO_H
