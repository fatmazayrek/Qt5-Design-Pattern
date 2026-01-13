#include "coffiemachine3000.h"

void CoffieMachine3000::addIngredients(QStringList &list)
{
    foreach (QString item, list)
    {
        qDebug() << "Adding " << item;
    }
}

void CoffieMachine3000::brew()
{
    qDebug() << "Heating ";
    marketing();
    qDebug() << "Bip ";
}

void CoffieMachine3000::marketing()
{
    for (int i = 0; i < 5; i++)
    {
        qDebug() << "Alarm";
    }
}
