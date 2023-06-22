#ifndef DISCIPLINACONTROLLER_H
#define DISCIPLINACONTROLLER_H

#include "disciplina.h"
#include "disciplinadao.h"
class DisciplinaController
{
public:
    DisciplinaController();
    void incluir(QString codDisciplina, QString nomeDisciplina);
    bool buscar(QString codDisciplina, QString nomeDisciplina);
    void alterar(QString codDisciplina, QString nomeDisciplina);
    void deletar(QString codDisciplina, QString nomeDisciplina); // alteramos para a função não retornar nada
private:
    Disciplina * objDis;
    DisciplinaDAO trem;
};

#endif // DISCIPLINACONTROLLER_H
