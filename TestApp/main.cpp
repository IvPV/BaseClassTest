#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>

#include "IManager1.h"
#include "IManager2.h"

#include "Manager1.h"
#include "Manager2.h"

#include "IModel1.h"
#include "IModel2.h"

int main (int argc, char *argv[])
{
    QCoreApplication a (argc, argv);

    auto *man1 = new Manager1 ();
    auto *man2 = new Manager2 ();

    auto *iMan1 = dynamic_cast<IManager1*> (man1);
    auto *iMan2 = dynamic_cast<IManager2*> (man2);

    iMan1->createModel ();
    iMan2->createModel ();

    auto model1 = iMan1->model ();
    auto model2 = iMan2->model ();

    if (model1)
    {
        model1->setName ("Model1");
        model1->setType (2);

        qDebug () << "Model1"
                  << model1->name ()
                  << model1->type ();
    }

    if (model2)
    {
        model2->setName ("Model2");
        qDebug () << "Model2"
                  << model2->name ();
    }

    return a.exec ();
}
