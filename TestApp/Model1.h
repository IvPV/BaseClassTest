#ifndef MODEL1_H
#define MODEL1_H

#include "IModel1.h"

class Model1 : public IModel1
{
public:
    Model1 () {}
    ~Model1 () {}

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

#endif // MODEL1_H
