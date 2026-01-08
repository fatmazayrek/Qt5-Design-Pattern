#include <QCoreApplication>

// INNER Class
#include "basicradio.h"
#include "basicfridge.h"
#include "advancedfridge.h"

void testBasicFridge(BasicFridge *fridge)
{
    fridge->chill();
    fridge->freeze();
}

void testAdvancedFridge(AdvancedFridge *fridge)
{
    fridge->chill();
    fridge->freeze();
    fridge->deepFreeze();

    if (fridge->radio())
    {
        fridge->radio()->startRadio();
        qDebug() << "Music started";
        fridge->radio()->stopRadio();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AdvancedFridge fridge;
    BasicRadio radio;
    fridge.setRadio(&radio);

    // testBasicFridge(&fridge);
    testAdvancedFridge(&fridge);

    return a.exec();
}
