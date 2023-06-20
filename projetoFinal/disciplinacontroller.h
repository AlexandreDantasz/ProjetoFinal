#ifndef DISCIPLINACONTROLLER_H
#define DISCIPLINACONTROLLER_H

#include "disciplina.h"

class DisciplinaController
{
public:
    DisciplinaController();
    void incluir(QString codDisciplina, QString nomeDisciplina);
    //    Disciplina * buscar(Disciplina * obj);
    //    void alterar(Disciplina * obj);
    //    void deletar(Disciplina * obj); // alteramos para a função não retornar nada
    bool analisarDisciplina(QString codDisciplina, QString nomeDisciplina);
private:
    Disciplina objDis;
};

#endif // DISCIPLINACONTROLLER_H
