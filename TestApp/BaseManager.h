#ifndef BASEMANAGER_H
#define BASEMANAGER_H

#include <QtCore/QSharedPointer>
#include <QtCore/QDebug>

template <class IT, class T>
class BaseManager
{
public:
    BaseManager () {}
    ~BaseManager () {}

    void createModel ()
    {
        if (std::is_assignable<IT, T> ())
            _model = QSharedPointer<T> (new T ());
        else
            qWarning () << "[BaseManager][createModel] Could not convert types";
    }

    QSharedPointer<IT> model ()
    {
        return _model;
    }

protected:
    QSharedPointer<IT> _model;
};

#endif // BASEMANAGER_H
