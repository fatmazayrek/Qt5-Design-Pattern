#ifndef SHOP_H
#define SHOP_H

// QT Libs
#include <QStringList>
#include <QDebug>

// INNER Class
#include "interfaces/IBrew.h"

class Shop
{
public:
    void sellDrink(QStringList &list, IBrew *machine);
};

#endif // SHOP_H
