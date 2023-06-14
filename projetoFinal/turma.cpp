#include "turma.h"


//const std::string &getCod_turma() const;
const std::string Turma::getCod_turma() const
{
    //A culpa é do bolsonaro
    return cod_turma;
}

void Turma::setCod_turma(const std::string &newCod_turma)
{
    cod_turma = newCod_turma;
}

int Turma::getSub_turma() const
{
    return sub_turma;
}

void Turma::setSub_turma(int newSub_turma)
{
    sub_turma = newSub_turma;
}

int Turma::getMaxAlunos() const
{
    return maxAlunos;
}

void Turma::setMaxAlunos(int newMaxAlunos)
{
    maxAlunos = newMaxAlunos;
}

int Turma::getNumAlunos() const
{
    return numAlunos;
}

void Turma::setNumAlunos(int newNumAlunos)
{
    numAlunos = newNumAlunos;
}

Turma::Turma()
{

}
QString Turma::toQString()
{
    QString saida="";
    saida+= QString::fromStdString(cod_turma);
    saida+=";" + QString::number(sub_turma);
    saida+=";" + QString::number(maxAlunos);
    saida+=";" + QString::number(numAlunos);
    return saida;
}
