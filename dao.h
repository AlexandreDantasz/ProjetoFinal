#ifndef DAO_H
#define DAO_H

#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

template <class Tipo>
class DAO //CRUD
{
public:
    DAO(){}
    virtual void incluir(Tipo* obj)=0;//Create
    virtual bool buscar(Tipo* obj)=0;//Read
    virtual void alterar(Tipo* obj, Tipo* alt)=0;//Update
    virtual void deletar(QString const &id)=0;//Delete

};

#endif // DAO_H
