#ifndef TURMADAO_H
#define TURMADAO_H

#include "dao.h"
#include "turma.h"

class TurmaDAO : public DAO <Turma>
{
public:
    TurmaDAO();
    void incluir(Turma * obj);
//    Turma * buscar(Turma * obj);
//    void alterar(Turma * obj);
//    void deletar(Turma * obj); // alteramos para a função não retornar nada
    bool analisarTurma(Turma *obj);
private:
    QString nomeBD;
    QSqlDatabase db;
};

#endif // TURMADAO_H

