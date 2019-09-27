#ifndef MANAGER1_H
#define MANAGER1_H

#include "IManager1.h"

class Manager1 : public IManager1
{
public:
    Manager1 () {}
    ~Manager1 () {}

    void setName (const QString &str)
    {
        _name = str;
    }

    QString name () const
    {
        return _name;
    }

protected:
    QString _name;
};

#endif // MANAGER1_H
