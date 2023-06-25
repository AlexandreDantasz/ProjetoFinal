#ifndef TURMADAO_H
#define TURMADAO_H

#include "dao.h"
#include "turma.h"

class TurmaDAO : public DAO <Turma>
{
public:
    TurmaDAO();
    void incluir(Turma * obj);
    bool buscar(Turma * obj);
    void alterar(Turma * obj, Turma * alt);
    void deletar(Turma * obj); // alteramos para a função não retornar nada
private:
    QString nomeBD;
    QSqlDatabase db;
};

#endif // TURMADAO_H

