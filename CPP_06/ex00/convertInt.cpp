#include "main.hpp"

void    convertIntToChar(int nb)
{
    if (nb < 32 || nb > 126)
        std::cout << "char : Non displayable" << std::endl;
    else if (nb < 0 || nb > 127)
        std::cout << "char : impossible" << std::endl;
    else
    {
        char conv = static_cast<char>(nb);
        std::cout << "char : '" << conv << "'" << std::endl;
    }
}

float convertIntToFloat(int nb)
{
    float conv = static_cast<float>(nb);
    return (conv);
}

double convertIntToDouble(int nb)
{
    double conv = static_cast<double>(nb);
    return (conv);
}

void    printIntConversion(std::string var)
{
    long int nb = atol(var.c_str());

    if (nb > INT_MAX || nb < INT_MIN)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: overflow" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "char: impossible" << std::endl;
        return ;
    }
    std::cout << std::fixed;
    std::cout.precision(1);

    convertIntToChar(nb);
    std::cout << "int: " << nb << std::endl;
    std::cout << "float: " << convertIntToFloat(nb) << "f" << std::endl;
    std::cout << "double: " << convertIntToDouble(nb) << std::endl;
}