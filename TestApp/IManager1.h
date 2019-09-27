#ifndef IMANAGER1_H
#define IMANAGER1_H

#include "BaseManager.h"
#include "IModel1.h"
#include "Model1.h"

#include <QtCore/QString>

class IManager1 : public BaseManager<IModel1, Model1>
{
public:
    IManager1 () {}
    ~IManager1 () {}

    virtual QString name () const = 0;
    virtual void setName (const QString &str) = 0;
};

#endif // IMANAGER1_H
