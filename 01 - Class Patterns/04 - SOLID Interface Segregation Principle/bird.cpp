#include "bird.h"

Bird::Bird(QObject *parent) :
    QObject{parent}
{

}

void Bird::fly()
{
    qDebug() << this << "can fly";
}

void Bird::land()
{
    qDebug() << this << "can land";
}

void Bird::wings()
{
    qDebug() << this << "has wings";
}
