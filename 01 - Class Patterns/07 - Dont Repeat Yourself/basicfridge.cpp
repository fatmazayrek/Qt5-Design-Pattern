#include "basicfridge.h"

BasicFridge::BasicFridge(QObject *parent)
    : QObject{parent}
{}

void BasicFridge::chill()
{
    qDebug() << this << "chill";
}

void BasicFridge::freeze()
{
    qDebug() << this << "freeze";
}
