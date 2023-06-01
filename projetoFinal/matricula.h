#ifndef MATRICULA_H
#define MATRICULA_H

#include "aluno.h"
#include "turma.h"

#include <QString>

class Matricula
{
private:
    Aluno aluno;    //Ponteiro para aluno
    Turma turma;    //Ponteiro para turma, um aluno possui uma matricula para cada turma
    int ano;
    int semestre;
    float nota1;
    float nota2;
    float notaF;
public:
    Matricula();
    Matricula(const Aluno &newAluno, const Turma &newTurma,
              int ano, int semestre);   //Atribuições são feitas no construtor

    void getAno() const;    //Função padrão
    int setAno(int newAno);

    int getSemestre() const;    //Função padrão
    void setSemestre(int newSemestre);

    float getNota1() const; //Função padrão
    void setNota1(float newNota1);

    float getNota2() const; //Função padrão
    void setNota2(float newNota2);

    inline float getNotaFinal(){
        return (nota1+nota2)/2; /*Calculo demonstrativo,
                                o calculo da nota ainda não foi definido*/
    }

    QString toQString();    //Armazena todas as informações do objeto para gravar no bd
};

#endif // MATRICULA_H
