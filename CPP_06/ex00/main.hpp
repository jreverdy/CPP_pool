#ifndef MAIN_HPP
#define MAIN_HPP

#include <cstring>
#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <limits.h>
#include <limits>
#include <cmath>

bool    isChar(std::string var);
bool    isInt(std::string var);
bool    isFloat(std::string var);
bool    isDouble(std::string var);

void    printCharConversion(std::string var);
void    printIntConversion(std::string var);
void    printFloatConversion(std::string var);
void    printDoubleConversion(std::string var);
#endif