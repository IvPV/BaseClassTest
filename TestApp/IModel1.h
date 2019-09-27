#ifndef IMODEL1_H
#define IMODEL1_H

#include "BaseModel.h"

class IModel1 : public BaseModel
{
public:
    IModel1 () {}
    ~IModel1 () {}

    virtual int type () const = 0;
    virtual void setType (int t) = 0;
};

#endif // IMODEL1_H
