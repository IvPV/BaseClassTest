#ifndef BASEMODEL_H
#define BASEMODEL_H

#include <QtCore/QString>

class BaseModel
{
public:
    BaseModel () {}
    ~BaseModel () {}

    void setName (const QString &str)
    {
        _name = str;
    }

    QString name ()
    {
        return _name;
    }

protected:
    QString _name;
};

#endif // BASEMODEL_H
