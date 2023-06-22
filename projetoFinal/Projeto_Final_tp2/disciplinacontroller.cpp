#include "disciplinacontroller.h"

DisciplinaController::DisciplinaController()
{

}

void DisciplinaController::incluir(QString codDisciplina, QString nomeDisciplina) {
    objDis->setCod_disciplina(codDisciplina.toStdString());
    objDis->setNome_disciplina(nomeDisciplina.toStdString());
    trem.incluir(objDis);
}

bool DisciplinaController::buscar(QString codDisciplina, QString nomeDisciplina) {
    objDis->setCod_disciplina(codDisciplina.toStdString());
    objDis->setNome_disciplina(nomeDisciplina.toStdString());
    return trem.buscar(objDis);
}

void DisciplinaController::deletar(QString codDisciplina, QString nomeDisciplina) {
    objDis->setCod_disciplina(codDisciplina.toStdString());
    objDis->setNome_disciplina(nomeDisciplina.toStdString());
    trem.deletar(objDis);
}
