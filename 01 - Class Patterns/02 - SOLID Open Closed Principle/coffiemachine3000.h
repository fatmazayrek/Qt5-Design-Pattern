#ifndef COFFIEMACHINE3000_H
#define COFFIEMACHINE3000_H

// QT Libs
#include <QDebug>

// INNER Class
#include "interfaces/IBrew.h"

class CoffieMachine3000 : public IBrew
{
    // IBrew interface
public:
    void addIngredients(QStringList &list);
    void brew();

private:
    void marketing();
};

#endif // COFFIEMACHINE3000_H
