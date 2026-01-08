#include "advancedfridge.h"

AdvancedFridge::AdvancedFridge(QObject *parent)
    : BasicFridge{parent}
{}

void AdvancedFridge::deepFreeze()
{
    qDebug() << this << "deepFreeze";
}

IRadio *AdvancedFridge::radio() const
{
    return mRadio;
}

void AdvancedFridge::setRadio(IRadio *newRadio)
{
    mRadio = newRadio;
}
