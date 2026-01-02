#ifndef BIRD_H
#define BIRD_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "interfaces/IFlying.h"

class Bird : public QObject, public IFlying
{
    Q_OBJECT
public:
    explicit Bird(QObject *parent = nullptr);

    // IFlying interface
public:
    void fly();
    void land();
    void wings();
};

#endif // BIRD_H
