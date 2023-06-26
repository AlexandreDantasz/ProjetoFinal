#include "matriculadao.h"

MatriculaDAO::MatriculaDAO()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    nomeBD = "";    //Inserir aqui o endereço do arquivo .bd
    db.setDatabaseName(nomeBD);
}

void MatriculaDAO::incluir(Matricula *mat){
    if(!db.open())
    {
        throw QString ("Erro ao acessar o banco de dados.");
    }
    QSqlQuery query;
    //Adicionar na aba "matricula", nas colunas "tur_matricula",
    //e "sub_matricula", os valores "tur" e "sub".
    query.prepare("INSERT INTO matricula (tur_matricula, sub_matricula) VALUES (:tur, :sub);");
    //Codigo e SubTurma são atributos da classe "Turma", que é um atributo da classe "Matricula"?
    query.bindValue(":tur", QString::fromStdString(mat->pTurma.getCod_turma()));
    query.bindValue(":sub", QString::number(mat->pTurma.getSub_turma()));
    query.exec();
    if(!query.exec())
    {
        db.close();
        throw QString("Erro ao executar a inserção");
    }
    db.close(); //Fecha arquvivo
}

void MatriculaDAO::alterar(Matricula * obj, Matricula * alt) {
    if (!db.open()) {
        throw QString("Erro ao acessar o banco de dados.");
    }
    //const std::string& tur, const std::string& sub
    std::string tur = mat->pTurma.getCod_turma();
    int sub = mat->pTurma.getSub_turma();

    QSqlQuery query;
    // Consulta para verificar se a matricula já existe
    //cod_turma
    //sub_turma
    query.prepare("SELECT COUNT(*) FROM matricula WHERE cod_turma = :tur OR sub_turma = :sub;");
    query.bindValue(":tur", QString::fromStdString(tur));
    query.bindValue(":sub", QString::number(sub));
    query.exec();

    bool matriculaExiste = false;
    if (query.next()) {
        int count = query.value(0).toInt();
        matriculaExiste = (count > 0);
    }
    if (disciplinaExiste) {
        query.prepare("UPDATE disciplina SET cod_disciplina = :cod, nome_disciplina = :nome WHERE cod_disciplina = :codK AND nome_disciplina = :nomeK;");
        query.bindValue(":cod", QString::fromStdString(alt->getCod_disciplina()));
        query.bindValue(":nome", QString::fromStdString(alt->getNome_disciplina()));
        query.bindValue(":codK", QString::fromStdString(codDisciplina));
        query.bindValue(":nomeK", QString::fromStdString(nomeDisciplina));
    }
    db.close();
}

bool MatriculaDAO::buscar(Matricula *obj) {
    if (!db.open()) {
        throw QString("Erro ao acessar o banco de dados.");
    }

    QString matA = obj->aluno.getMatricula();

    QSqlQuery query;
    // Consulta para verificar se a disciplina já existe
    query.prepare("SELECT COUNT(*) FROM turma WHERE" "matA = :matBanco");
    query.bindValue(":matBanco", matA);
    query.exec();

    bool matriculaExiste = false;
    if (query.next()) {
        int count = query.value(0).toInt();
        matriculaExiste = (count > 0);
    }

    db.close();

    return matriculaExiste;
}
