#ifndef ADVANCEDFRIDGE_H
#define ADVANCEDFRIDGE_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "basicfridge.h"
#include "interfaces/IRadio.h"

class AdvancedFridge : public BasicFridge
{
    Q_OBJECT
public:
    explicit AdvancedFridge(QObject *parent = nullptr);

public:
    IRadio *radio() const;
    void setRadio(IRadio *newRadio);

    void deepFreeze();

private:
    IRadio *mRadio = nullptr;
};

#endif // ADVANCEDFRIDGE_H
