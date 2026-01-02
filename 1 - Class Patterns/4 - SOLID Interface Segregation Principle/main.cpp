#include <QCoreApplication>

// INNER Class
#include "airplane.h"
#include "bird.h"

void trip(IFlying *object)
{
    object->fly();
    object->land();
    object->wings();
}

void checkfuel(IMachine *object)
{
    object->refuel();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AirPlane airPlane;
    trip(&airPlane);
    checkfuel(&airPlane);

    Bird bird;
    trip(&bird);

    return a.exec();
}


// ***************************************
//             PROGRAM CIKTISI
// ***************************************
/*
 * Program ciktimiz su sekilde olmaktadir
    AirPlane(0x77f478fa88) can fly
    AirPlane(0x77f478fa88) can land
    AirPlane(0x77f478fa88) has wings
    AirPlane(0x77f478fa88) can refuel
    Bird(0x77f478fa70) can fly
    Bird(0x77f478fa70) can land
    Bird(0x77f478fa70) has wings
*/
