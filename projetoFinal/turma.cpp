#include "turma.h"

const std::string &turma::getCod_turma() const
{
    return cod_turma;
}

void turma::setCod_turma(const std::string &newCod_turma)
{
    cod_turma = newCod_turma;
}

int turma::getSub_turma() const
{
    return sub_turma;
}

void turma::setSub_turma(int newSub_turma)
{
    sub_turma = newSub_turma;
}

int turma::getMaxAlunos() const
{
    return maxAlunos;
}

void turma::setMaxAlunos(int newMaxAlunos)
{
    maxAlunos = newMaxAlunos;
}

int turma::getNumAlunos() const
{
    return numAlunos;
}

void turma::setNumAlunos(int newNumAlunos)
{
    numAlunos = newNumAlunos;
}

turma::turma()
{

}
