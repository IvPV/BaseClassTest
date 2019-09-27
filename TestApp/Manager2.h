#ifndef MANAGER2_H
#define MANAGER2_H

#include "IManager2.h"

class Manager2 : public IManager2
{
public:
    Manager2 () {}
    ~Manager2 () {}

    int type () const
    {
        return _type;
    }

    void setType (int t)
    {
        _type = t;
    }

protected:
    int _type;
};

#endif // MANAGER2_H
