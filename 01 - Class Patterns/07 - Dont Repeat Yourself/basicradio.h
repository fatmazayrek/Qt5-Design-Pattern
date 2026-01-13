#ifndef BASICRADIO_H
#define BASICRADIO_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "interfaces/IRadio.h"

class BasicRadio : public QObject, public IRadio
{
    Q_OBJECT
public:
    explicit BasicRadio(QObject *parent = nullptr);

    // IRadio interface
    void startRadio();
    void stopRadio();
};

#endif // BASICRADIO_H
