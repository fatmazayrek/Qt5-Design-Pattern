#ifndef COFFIEMACHINE_H
#define COFFIEMACHINE_H

// QT Libs
#include <QDebug>

// INNER Class
#include "interfaces/IBrew.h"

class CoffieMachine : public IBrew
{
    // IBrew interface
public:
    void addIngredients(QStringList &list);
    void brew();
};

#endif // COFFIEMACHINE_H
