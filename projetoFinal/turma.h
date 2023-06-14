#ifndef TURMA_H
#define TURMA_H
#include "disciplina.h"
#include <iostream>

class Turma: public Disciplina
{
    private:
       std::string cod_turma;
       int sub_turma;
       int maxAlunos;
       int numAlunos;
    public:
       Turma();
       QString toQString();
       const std::string getCod_turma() const;
       void setCod_turma(const std::string &newCod_turma);

       int getSub_turma() const;
       void setSub_turma(int newSub_turma);

       int getMaxAlunos() const;
       void setMaxAlunos(int newMaxAlunos);

       int getNumAlunos() const;
       void setNumAlunos(int newNumAlunos);
};

#endif // TURMA_H
