#include  "main.hpp"

void    convert(std::string var) {
    if (isChar(var) == true)
        printCharConversion(var);
    else if (isInt(var) == true)
        printIntConversion(var);
    else if (isFloat(var) == true)
        printFloatConversion(var);
    else if (isDouble(var) == true)
        printDoubleConversion(var);
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;

    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        convert(std::string (av[1]));
    }
    else
    {
        std::cerr << "Usage: ./convert [argument]" << std::endl;
        std::cerr << "- char" << std::endl;
        std::cerr << "- int" << std::endl;
        std::cerr << "- float" << std::endl;
        std::cerr << "- double" << std::endl;
    }
    return (0);
}