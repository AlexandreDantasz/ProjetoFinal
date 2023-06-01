#include "matricula.h"

Matricula::Matricula(const Aluno &objetoAluno, const Turma &objetoTurma,
                     int ano, int semestre){
    aluno = objetoAluno;
    turma = objetoTurma;
    this->ano = ano;
    this->semestre = semestre;

//    setAno(ano);
//    setSemestre(semestre);
//    setNota1(nota1);
//    setNota2(nota2);
//    setNotaF(notaF);
}

int Matricula::getAno() const
{
    return ano;
}

void Matricula::setAno(int newAno)
{
    ano = newAno;
}

int Matricula::getSemestre() const
{
    return semestre;
}

void Matricula::setSemestre(int newSemestre)
{
    semestre = newSemestre;
}

float Matricula::getNota1() const
{
    return nota1;
}

void Matricula::setNota1(float newNota1)
{
    nota1 = newNota1;
}

float Matricula::getNota2() const
{
    return nota2;
}

void Matricula::setNota2(float newNota2)
{
    nota2 = newNota2;
}

QString Matricula::toQString(){
    QString saida="";
    saida += getAno() + ";" + getSemestre() + ";";
    saida += getNota1() + ";" + getNota2() + ";";
    Saida += getNotaF();

    return  saida;  //Retorna informações do objeto para gravar no bd
}
