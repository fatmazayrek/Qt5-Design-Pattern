#ifndef IBREW_H
#define IBREW_H

// QT Libs
#include <QStringList>

/*!
 * \brief The IBrew class
 * Open Closed Principle
 * Kod genisletmeye acik, degisime kapali olmalidir.
 * IBrew sinifini kalitim alan siniflar IBrew sinifini degistiremezler.
 */
class IBrew
{
public:
    virtual void addIngredients(QStringList &list) = 0;
    virtual void brew() = 0;
};

#endif // IBREW_H
