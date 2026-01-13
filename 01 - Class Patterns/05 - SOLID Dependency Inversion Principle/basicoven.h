#ifndef BASICOVEN_H
#define BASICOVEN_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "interfaces/IOven.h"

class BasicOven : public QObject, public IOven
{
    Q_OBJECT
public:
    explicit BasicOven(QObject *parent = nullptr);

    // IOven interface
public:
    void bake();
};

#endif // BASICOVEN_H
