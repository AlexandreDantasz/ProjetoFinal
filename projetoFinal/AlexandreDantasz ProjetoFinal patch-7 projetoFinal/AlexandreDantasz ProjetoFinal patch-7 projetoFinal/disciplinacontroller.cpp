#include "disciplinacontroller.h"

DisciplinaController::DisciplinaController()
{

}

bool DisciplinaController::analisarDisciplina(QString codDisciplina, QString nomeDisciplina) {
    objDis.setCod_disciplina(codDisciplina.toStdString());
    objDis.setNome_disciplina(nomeDisciplina.toStdString());
    return true;
}
