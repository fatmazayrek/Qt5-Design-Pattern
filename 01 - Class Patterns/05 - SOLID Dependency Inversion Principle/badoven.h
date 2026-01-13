#ifndef BADOVEN_H
#define BADOVEN_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "basicoven.h"
#include "interfaces/IEvenHeat.h"

class BadOven : public BasicOven, public IEvenHeat
{
    Q_OBJECT
public:
    explicit BadOven(QObject *parent = nullptr);

    // IOven interface
public:
    void bake();

    // IEvenHeat interface
public:
    void rotate();
    void flip();
};

#endif // BADOVEN_H
