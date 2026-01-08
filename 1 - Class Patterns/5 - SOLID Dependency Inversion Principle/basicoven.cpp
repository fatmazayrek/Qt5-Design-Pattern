#include "basicoven.h"

BasicOven::BasicOven(QObject *parent)
    : QObject{parent}
{}

void BasicOven::bake()
{
    qDebug() << this << " is baking basically";
}
