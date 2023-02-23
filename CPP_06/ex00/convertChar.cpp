#include "main.hpp"

int    convertCharToInt(char var)
{
    int nb = static_cast<int>(var);
    return (nb);
}

float    convertCharToFloat(char var)
{
    float nb = static_cast<float>(var);
    return (nb);
}

double    convertCharToDouble(char var)
{
    double nb = static_cast<double>(var);
    return (nb);
}

void    printCharConversion(std::string var)
{
    std::cout << std::fixed;
    std::cout.precision(1);

    std::cout << "char: '" << var[0] << "'" << std::endl;
    std::cout << "int: " << convertCharToInt(var[0]) << std::endl;
    std::cout << "float: " << convertCharToFloat(var[0]) << "f" << std::endl;
    std::cout << "double: " << convertCharToDouble(var[0]) << std::endl;

}