#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include <QString>
#include <iostream>

using namespace std;

class disciplina {
private:
    string cod_disciplina;
    string nome_disciplina;
public:
    disciplina();
    QString toQString();
    string getCod_disciplina() const;
    void setCod_disciplina(const string &newCod_disciplina);
    string getNome_disciplina() const;
    void setNome_disciplina(const string &newNome_disciplina);
};

#endif // DISCIPLINA_H
