#include "disciplinadao.h"

DisciplinaDAO::DisciplinaDAO()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    nomeBD = "";    //Inserir aqui o endereço do arquivo .bd
    db.setDatabaseName(nomeBD);
}

void DisciplinaDAO::incluir(Disciplina *obj){
    if(!db.open())
    {
        throw QString ("Erro ao acessar o banco de dados.");
    }

    //analisarDisciplina() Verifica se a disciplina ja existe e retorna o erro

    QSqlQuery query;
    //Adicionar na aba "disciplina", nas colunas "cod_disciplina",
    //e "nome_disciplina", os valores "cod" e "nome".
    query.prepare("INSERT INTO disciplina (cod_disciplina, nome_disciplina) VALUES (:cod, :nome);");

    query.bindValue(":cod", QString::fromStdString(obj->getCod_disciplina()));
    query.bindValue(":nome", QString::fromStdString(obj->getNome_disciplina()));
    query.exec();
    db.close(); //Fecha o arquivo
    if(!query.exec())
    {
        throw QString("Erro ao executar a inserção");
    }
}

bool DisciplinaDAO::analisarDisciplina(Disciplina *obj) {
    if (!db.open()) {
        throw QString("Erro ao acessar o banco de dados.");
    }
    //const std::string& codDisciplina, const std::string& nomeDisciplina
    std::string codDisciplina = obj->getCod_disciplina();
    std::string nomeDisciplina = obj->getNome_disciplina();

    QSqlQuery query;
    // Consulta para verificar se a disciplina já existe
    query.prepare("SELECT COUNT(*) FROM disciplina WHERE cod_disciplina = :cod OR nome_disciplina = :nome;");
    query.bindValue(":cod", QString::fromStdString(codDisciplina));
    query.bindValue(":nome", QString::fromStdString(nomeDisciplina));
    query.exec();

    bool disciplinaExiste = false;
    if (query.next()) {
        int count = query.value(0).toInt();
        disciplinaExiste = (count > 0);
    }

    db.close();

    return disciplinaExiste;
}
