#include "airplane.h"

AirPlane::AirPlane(QObject *parent) :
    QObject{parent}
{

}

void AirPlane::refuel()
{
    qDebug() << this << "can refuel";
}

void AirPlane::fly()
{
    qDebug() << this << "can fly";
}

void AirPlane::land()
{
    qDebug() << this << "can land";
}

void AirPlane::wings()
{
    qDebug() << this << "has wings";
}
