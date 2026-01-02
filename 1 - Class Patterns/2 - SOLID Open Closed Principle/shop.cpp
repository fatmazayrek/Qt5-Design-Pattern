#include "shop.h"

void Shop::sellDrink(QStringList &list, IBrew *machine)
{
    qDebug() << "Take the order ";
    machine->addIngredients(list);
    machine->brew();
    qDebug() << "Take payment ";
}
