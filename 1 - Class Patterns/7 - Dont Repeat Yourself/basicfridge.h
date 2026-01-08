#ifndef BASICFRIDGE_H
#define BASICFRIDGE_H

// QT Libs
#include <QObject>
#include <QDebug>

// INNER Class
#include "interfaces/IFridge.h"

/*!
 * \brief The BasicFridge class
 * Peki ya diyelim ki icerisinde radyo yetenegi olan bir advanced fridge uretilecek. O zaman ne yapmaliyiz.
 * Radio'dan kalitim alamaz cunku radyo nesnesi gibi olmus olacak.
 * BasicFridge'den kalitim alip onun basic ozelliklerini kullanacak, Icerisinde de Radio nesnesi tutmali
 */
class BasicFridge : public QObject, public IFridge
{
    Q_OBJECT
public:
    explicit BasicFridge(QObject *parent = nullptr);

    // IFridge interface
    void chill();
    void freeze();
};

#endif // BASICFRIDGE_H
