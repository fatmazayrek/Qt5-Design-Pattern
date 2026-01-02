#ifndef AIRPLANE_H
#define AIRPLANE_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "interfaces/IFlying.h"
#include "interfaces/IMachine.h"

class AirPlane : public QObject, public IFlying, public IMachine
{
    Q_OBJECT
public:
    explicit AirPlane(QObject *parent = nullptr);

    // IMachine interface
public:
    void refuel();

    // IFlying interface
public:
    void fly();
    void land();
    void wings();
};

#endif // AIRPLANE_H
