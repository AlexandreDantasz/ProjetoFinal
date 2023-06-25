#ifndef TURMACONTROLLER_H
#define TURMACONTROLLER_H
#include "turma.h"
#include "turmadao.h"

class TurmaController
{
    private:
       Turma *objTurma,*objAlt;
       TurmaDAO turmaDao;
    public:
     TurmaController();
     void incluir(QString codTurma, QString codSubTurma,QString maxAl,QString numAl);
     bool buscar(QString codTurma, QString codSubTurma,QString maxAl,QString numAl);
     void alterar(QString codTurma, QString codSubTurma,QString maxAl,QString numAl);
     void deletar(QString codTurma, QString codSubTurma,QString maxAl,QString numAl);
};

#endif // TURMACONTROLLER_H
