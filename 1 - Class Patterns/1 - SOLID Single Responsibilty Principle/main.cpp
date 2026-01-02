#include <iostream>
#include <string>

#include "tempconverter.h"

int main()
{
    std::cout << "C2F : " << std::to_string(TempConverter::celsius2Fahrenheit(32)) << std::endl;
    std::cout << "F2C : " << std::to_string(TempConverter::fahrenheit2Celsius(32)) << std::endl;
    return 0;
}
