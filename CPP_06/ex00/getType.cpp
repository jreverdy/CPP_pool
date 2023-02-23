#include "main.hpp"

bool    isChar(std::string var)
{
    if(var.length() == 1 && isprint(var[0]) && !isdigit(var[0]))
        return (true);
    else
        return (false);
}

bool    isInt(std::string var)
{
    size_t  i = 0;

    if (var[i] == '-' && isdigit(var[i + 1]))
        i++;
    while(i < var.length())
    {
        if (!isdigit(var[i]))
            return (false);
        i++;
    }
    return (true);
}

int     isLitteral(std::string var)
{
    if (var.compare("-inff") == 0 || var.compare("+inff") == 0 || var.compare("nanf") == 0)
        return (1);
    else if (var.compare("-inf") == 0 || var.compare("+inf") == 0 || var.compare("nan") == 0)
        return (2);
    return (0);
}

bool    isFloat(std::string var)
{
    size_t  i = 0;
    bool    sign = false;

    if (isLitteral(var) == 1)
        return (true);
    if (var[i] == '-' && isdigit(var[i + 1]))
    {
        sign = true;
        i++;
    }
    size_t dotPos = var.find('.');
    if (dotPos != var.rfind('.') || dotPos == std::string::npos)
        return (false);
    if ( var[var.length() - 1] != 'f')
        return (false);
    while (i < var.length() - 1)
    {
        if (dotPos == 0 || (dotPos == 1 && sign) || dotPos == var.length() - 2)
            return (false);
         if ((!isdigit(var[i]) && var[i] != '.'))
            return (false);
        i++;
    }
   return (true);
}

bool    isDouble(std::string var)
{
    size_t  i = 0;
    bool    sign = false;

    if (isLitteral(var) == 2)
        return (true);
    if (var[i] == '-' && isdigit(var[i + 1]))
    {
        sign = true;
        i++;
    }
    size_t dotPos = var.find('.');
    if (dotPos != var.rfind('.') || dotPos == std::string::npos)
        return (false);
    while (i < var.length())
    {
        if (dotPos == 0 || (dotPos == 1 && sign) || dotPos == var.length() - 1)
            return (false);
        if ((!isdigit(var[i]) && var[i] != '.'))
            return (false);
        i++;
    }
    return (true);
}