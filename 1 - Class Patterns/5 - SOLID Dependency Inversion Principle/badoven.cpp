#include "badoven.h"

BadOven::BadOven(QObject *parent)
    : BasicOven{parent}
{}

void BadOven::bake()
{
    qDebug() << this << " is baking bad ";
    flip();
    rotate();
}

void BadOven::rotate()
{
    qDebug() << this << " is rotating bad ";
}

void BadOven::flip()
{
    qDebug() << this << " is fliping bad ";
}
