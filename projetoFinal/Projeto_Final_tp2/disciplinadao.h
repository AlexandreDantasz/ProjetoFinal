#ifndef DISCIPLINADAO_H
#define DISCIPLINADAO_H

#include "disciplina.h"
#include "dao.h"

class DisciplinaDAO : public DAO <Disciplina>
{
public:
    DisciplinaDAO();
    void incluir(Disciplina * obj);
    bool buscar(Disciplina * obj);
    void alterar(Disciplina * obj, Disciplina * alt);
    void deletar(Disciplina * obj); // alteramos para a função não retornar nada
//    bool analisarDisciplina(Disciplina *obj);
private:
    QString nomeBD;
    QSqlDatabase db;
};

#endif // DISCIPLINADAO_H
