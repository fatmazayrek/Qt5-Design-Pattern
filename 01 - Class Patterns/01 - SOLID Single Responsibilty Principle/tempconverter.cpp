#include "tempconverter.h"

double TempConverter::celsius2Fahrenheit(double value)
{
    return (value * 9.0) / 5.0 + 32;
}

double TempConverter::fahrenheit2Celsius(double value)
{
    return (value - 32) * 5.0 / 9.0;
}
