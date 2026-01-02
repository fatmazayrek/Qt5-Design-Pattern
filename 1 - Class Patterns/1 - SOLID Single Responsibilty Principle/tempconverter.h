#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

/*!
 * \brief The TempConverter class
 * SRP - Single Responsibility Principle
 * Her sinifin tek bir gorevi olmali mantigindadir.
 */
class TempConverter
{
public:
    static double celsius2Fahrenheit(double value);
    static double fahrenheit2Celsius(double value);
};

#endif // TEMPCONVERTER_H
