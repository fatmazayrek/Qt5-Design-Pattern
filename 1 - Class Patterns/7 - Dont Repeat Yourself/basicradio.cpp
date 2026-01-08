#include "basicradio.h"

BasicRadio::BasicRadio(QObject *parent)
    : QObject{parent}
{}

void BasicRadio::startRadio()
{
    qDebug() << this << "Start Radio";
}

void BasicRadio::stopRadio()
{
    qDebug() << this << "Stop Radio";
}
