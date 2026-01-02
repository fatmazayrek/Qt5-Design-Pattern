#ifndef IBAD_H
#define IBAD_H

/*!
 * \brief The IBad class
 * Kotu interface ornegidir. Bu siniftan tureyecek her sinifin, bu sinifta tum fonksiyonlara ihtiyaci var mi diye dusunmek gerekiyor
 * Ornegin bu siniftan Bird ve AirPlane siniflari turetmek istiyorum.
 * Bird sinifimda refuel kullanmak gereksiz olacak. O yuzden islevlerine gore interface ayirmak mantikli bir secim olacaktir.
 */
class IBad
{
    virtual void fly() = 0;
    virtual void refuel() = 0;
    virtual void land() = 0;
    virtual void wings() = 0;
};

#endif // IBAD_H
