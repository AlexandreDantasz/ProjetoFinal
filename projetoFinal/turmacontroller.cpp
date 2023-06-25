#include "turmacontroller.h"

TurmaController::TurmaController()
{

}

void TurmaController::incluir(QString codTurma, QString codSubTurma,QString maxAl,QString numAl)
{
  objTurma->setCod_turma(codTurma.toStdString());
  objTurma->setSub_turma(codSubTurma.toInt());
  objTurma->setMaxAlunos(maxAl.toInt());
  objTurma->setNumAlunos(numAl.toInt());

  turmaDao.incluir(objTurma);
}
bool TurmaController::buscar(QString codTurma, QString codSubTurma,QString maxAl,QString numAl)
{
    objTurma->setCod_turma(codTurma.toStdString());
    objTurma->setSub_turma(codSubTurma.toInt());
    objTurma->setMaxAlunos(maxAl.toInt());
    objTurma->setNumAlunos(numAl.toInt());

    return turmaDao.buscar(objTurma);
}
void TurmaController::alterar(QString codTurma, QString codSubTurma,QString maxAl,QString numAl)
{
    objTurma->setCod_turma(codTurma.toStdString());
    objTurma->setSub_turma(codSubTurma.toInt());
    objTurma->setMaxAlunos(maxAl.toInt());
    objTurma->setNumAlunos(numAl.toInt());

    objAlt->setCod_turma(codTurma.toStdString());
    objAlt->setSub_turma(codSubTurma.toInt());
    objAlt->setMaxAlunos(maxAl.toInt());
    objAlt->setNumAlunos(numAl.toInt());


    turmaDao.alterar(objTurma,objAlt);
}

void TurmaController::deletar(QString codTurma, QString codSubTurma,QString maxAl,QString numAl)
{
    objTurma->setCod_turma(codTurma.toStdString());
    objTurma->setSub_turma(codSubTurma.toInt());
    objTurma->setMaxAlunos(maxAl.toInt());
    objTurma->setNumAlunos(numAl.toInt());

    turmaDao.deletar(objTurma);
}
