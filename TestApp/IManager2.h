#ifndef IMANAGER2_H
#define IMANAGER2_H

#include "BaseManager.h"
#include "IModel2.h"
#include "Model2.h"

class IManager2 : public BaseManager<IModel2, Model2>
{
public:
    IManager2 () {}
    ~IManager2 () {}

    virtual int type () const = 0;
    virtual void setType (int t) = 0;
};

#endif // IMANAGER2_H
