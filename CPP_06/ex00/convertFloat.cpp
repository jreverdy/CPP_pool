#include "main.hpp"

void convertFloatToChar(float nb)
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

void convertFloatToInt(float nb)
{
    if (nb > INT_MAX || nb < INT_MIN)
    {
        std::cout << "int: overflow" << std::endl;
        return ;
    }
    else
    {
        int n =  static_cast<int>(nb);
        std::cout << "int: " << n << std::endl;
    }
}

double  convertFloatToDouble(float nb)
{
    double conv =  static_cast<double>(nb);
    return (conv);
}

void    printFloatConversion(std::string var)
{
    if (var.compare("nanf") == 0)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << var << std::endl;
        std::cout << "double: nan" << std::endl;
        return ;
    }
    double nb = atof(var.c_str());
    if (nb > std::numeric_limits<float>::max() || nb < std::numeric_limits<float>::min())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: overflow" << std::endl;
        std::cout << "double:" << nb << std::endl;
        return ;
    }
    nb = static_cast<float>(nb);
    std::cout << std::fixed;
    std::cout.precision(1);

    convertFloatToChar(nb);
    convertFloatToInt(nb);
    std::cout << "float: " << nb << "f" << std::endl;
    std::cout << "double: " << convertFloatToDouble(nb) << std::endl;
}