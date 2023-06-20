#include "turmadao.h"

TurmaDAO::TurmaDAO()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    nomeBD = "";    //Inserir aqui o endereço do arquivo .bd
    db.setDatabaseName(nomeBD);
}

void TurmaDAO::incluir(Turma *obj){
    if(!db.open())
    {
        throw QString ("Erro ao acessar o banco de dados.");
    }

    //analisarTurma() Verifica se a turma ja existe e retorna o erro

    QSqlQuery query;

    query.prepare("INSERT INTO Turma ("
                  "cod_Turma, cod_subTurma, maxAlunos, numAlunos) VALUES ("
                  ":codT, :codST, :maxA, :numA);");

    query.bindValue(":codT", QString::fromStdString(obj->getCod_turma()));
    query.bindValue(":codST", QString::number(obj->getSub_turma()));
    query.bindValue(":maxA", QString::number(obj->getMaxAlunos()));
    query.bindValue(":numA", QString::number(obj->getNumAlunos()));
    query.exec();

    db.close(); //Fecha o arquivo
    if(!query.exec())
    {
        throw QString("Erro ao executar a inserção");
    }
}

bool TurmaDAO::analisarTurma(Turma *obj) {
    if (!db.open()) {
        throw QString("Erro ao acessar o banco de dados.");
    }

    QString codT = QString::fromStdString(obj->getCod_turma());
    QString codST = QString::number(obj->getSub_turma());
    QString maxA = QString::number(obj->getMaxAlunos());
    QString numA = QString::number(obj->getNumAlunos());

    QSqlQuery query;
    // Consulta para verificar se a disciplina já existe
    query.prepare("SELECT COUNT(*) FROM turma WHERE"
                  "codT = :codTBanco OR codST = :codSTBanco OR"
                  "maxA = :maxABanco OR numA = :numABanco;");
    query.bindValue(":codTBanco", codT);
    query.bindValue(":codSTBanco", codST);
    query.bindValue(":maxABanco", maxA);
    query.bindValue(":numABanco", numA);
    query.exec();

    bool turmaExiste = false;
    if (query.next()) {
        int count = query.value(0).toInt();
        turmaExiste = (count > 0);
    }

    db.close();

    return turmaExiste;
}
