#include "main.hpp"

void    convertDoubleToChar(double nb)
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

void convertDoubleToInt(double nb)
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

void    convertDoubleToFloat(double nb)
{
    if (nb > std::numeric_limits<float>::max() || nb < std::numeric_limits<float>::min())
    {
        std::cout << "float: overflow" << std::endl;
        return ;
    }
    else
    {
        float conv = static_cast<float>(nb);
        std::cout << "float: " << conv << "f" << std::endl;
    }
}

void    printDoubleConversion(std::string var)
{
    if (var.compare("nan") == 0)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: " << var << std::endl;
        return ;
    }
    double nb = atof(var.c_str());

    if (nb > std::numeric_limits<double>::max() || nb < std::numeric_limits<double>::min())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: overflow" << std::endl;
        std::cout << "double:" << nb << std::endl;
        return ;
    }
    std::cout << std::fixed;
    std::cout.precision(1);

    convertDoubleToChar(nb);
    convertDoubleToInt(nb);
    convertDoubleToFloat(nb);
    std::cout << "double: " << nb << std::endl;
}