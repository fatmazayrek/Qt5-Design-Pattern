#include "advancedoven.h"

AdvancedOven::AdvancedOven(QObject *parent)
    : QObject{parent}
{}

void AdvancedOven::rotate()
{
    qDebug() << this << " is rotating ";
}

void AdvancedOven::flip()
{
    qDebug() << this << " is fliping ";
}

void AdvancedOven::bake()
{
    qDebug() << this << " is baking advance ";
    flip();
    rotate();
}
