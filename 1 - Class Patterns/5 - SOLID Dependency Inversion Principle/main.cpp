#include <QCoreApplication>

// INNER Class
#include "advancedoven.h"
#include "basicoven.h"
#include "badoven.h"

/*!
 * \brief main
 * Dependency Inversion Principle'a gore High Level moduller Low Level'a bagli olmamalidir.
 * \param argc
 * \param argv
 * \return
 */


void cook(IOven *oven)
{
    oven->bake();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AdvancedOven advancedOven;
    BasicOven basicOven;
    BadOven badOven;                // BasicOven'dan kalitim aldigindan dolayi BasicOven'da olacak herhangi bir degisiklikte BadOven'da refaktor edilmek zorunda kalir

    cook(&advancedOven);
    cook(&basicOven);
    cook(&badOven);

    return a.exec();
}
