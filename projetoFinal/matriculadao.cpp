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
    query.bindValue(":mat", mat->getCodigo());
    query.bindValue(":nom", mat->getSubTurma());
    if(!query.exec())
    {
        db.close();
        throw QString("Erro ao executar a inserção");
    }
    db.close(); //Fecha arquvivo
}
