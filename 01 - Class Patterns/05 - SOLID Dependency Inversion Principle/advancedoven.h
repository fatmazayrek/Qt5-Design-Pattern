#ifndef ADVANCEDOVEN_H
#define ADVANCEDOVEN_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "interfaces/IOven.h"
#include "interfaces/IEvenHeat.h"

class AdvancedOven : public QObject, public IOven, public IEvenHeat
{
    Q_OBJECT
public:
    explicit AdvancedOven(QObject *parent = nullptr);

    // IEvenHeat interface
public:
    void rotate();
    void flip();

    // IOven interface
public:
    void bake();
};

#endif // ADVANCEDOVEN_H
