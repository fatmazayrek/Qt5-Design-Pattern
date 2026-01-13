#include "coffiemachine.h"

void CoffieMachine::addIngredients(QStringList &list)
{
    foreach (QString item, list)
    {
        qDebug() << "Adding " << item;
    }
}

void CoffieMachine::brew()
{
    qDebug() << "Heating ";
    qDebug() << "Bip ";
}
