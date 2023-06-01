#include "disciplina.h"

std::string disciplina::getCod_disciplina() const {
    return cod_disciplina;
}

void disciplina::setCod_disciplina(const std::string &newCod_disciplina) {
    cod_disciplina = newCod_disciplina;
}

std::string disciplina::getNome_disciplina() const {
    return nome_disciplina;
}

void disciplina::setNome_disciplina(const std::string &newNome_disciplina) {
    nome_disciplina = newNome_disciplina;
}

disciplina::disciplina() {
    cod_disciplina = nome_disciplina = "";
}

QString disciplina::toQString() {
    QString aux = QString::fromStdString(cod_disciplina) + ";" + QString::fromStdString(nome_disciplina);
    return aux;
}
