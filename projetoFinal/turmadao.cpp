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

void TurmaDAO::alterar(Turma * obj, Turma * alt)
{
    if (!db.open())
    {
        throw QString("Erro ao acessar o banco de dados.");
    }

    std::string codTurma=obj->getCod_turma();
    int subTurma= obj->getSub_turma();
    int maxAl= obj->getMaxAlunos();
    int numAl= obj->getNumAlunos();

    QSqlQuery query;

    query.prepare("SELECT COUNT(*) FROM turma WHERE cod_Turma = :cod OR cod_subTurma = :codSub; OR maxAlunos =  :maxAl OR numAlunos = :numAl" );
    query.bindValue(":cod", QString::fromStdString(codTurma));
    query.bindValue(":codSub", QString::number(subTurma));
    query.bindValue(":maxAl", QString::number(maxAl));
    query.bindValue("numAl", QString::number(numAl));
    query.exec();

        bool turmaExiste = false;
        if (query.next()) {
            int count = query.value(0).toInt();
            turmaExiste = (count > 0);
        }
        if (turmaExiste) {
            query.prepare("UPDATE disciplina SET cod_Turma = :cod OR cod_subTurma = :codSub; OR maxAlunos =  :maxAl OR numAlunos = :numAl WHERE cod_Turma = :codT, cod_subTurma = :codSubT, maxAlunos = :maxAlT, numAlunos = :numAlt;");
            //query.bindValue(":cod", QString::fromStdString(alt->getCod_disciplina()));
            //query.bindValue(":nome", QString::fromStdString(alt->getNome_disciplina()));
            //query.bindValue(":codK", QString::fromStdString(codDisciplina));
            //query.bindValue(":nomeK", QString::fromStdString(nomeDisciplina));
            query.bindValue(":cod", QString::fromStdString(alt->getCod_turma()));
            query.bindValue(":codSub", QString::number(alt->getSub_turma()));
            query.bindValue(":maxAl", QString::number(alt->getMaxAlunos()));
            query.bindValue(":numAl", QString::number(alt->getNumAlunos()));
            query.bindValue(":codT", QString::fromStdString(codTurma));
            query.bindValue(":codSubT",QString::number(subTurma));
            query.bindValue(":maxAlT",QString::number(maxAl));
            query.bindValue(":numAlT",QString::number(numAl));
        }
        db.close();
}
