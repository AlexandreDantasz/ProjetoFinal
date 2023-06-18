#include "disciplina.h"

std::string Disciplina::getCod_disciplina() const {
    return cod_disciplina;
}

void Disciplina::setCod_disciplina(const std::string &newCod_disciplina) {
    cod_disciplina = newCod_disciplina;
}

std::string Disciplina::getNome_disciplina() const {
    return nome_disciplina;
}

void Disciplina::setNome_disciplina(const std::string &newNome_disciplina) {
    nome_disciplina = newNome_disciplina;
}

Disciplina::Disciplina() {
    cod_disciplina = nome_disciplina = "";
}

QString Disciplina::toQString() {
    QString aux = QString::fromStdString(cod_disciplina) + ";" + QString::fromStdString(nome_disciplina);
    return aux;
}
