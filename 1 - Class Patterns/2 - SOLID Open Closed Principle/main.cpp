#include <QCoreApplication>

// INNER Class
#include "shop.h"
#include "coffiemachine.h"
#include "coffiemachine3000.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Shop shop;
    // CoffieMachine machine;
    CoffieMachine3000 machine;

    QStringList list;
    list << "Sugar" << "Flavoring" << "Almond Milk";
    shop.sellDrink(list, &machine);

    return a.exec();
}
