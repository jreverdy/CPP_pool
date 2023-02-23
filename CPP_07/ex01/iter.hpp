#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <ctype.h>
#include <fstream>

template<typename T>
void iter(const T *tab, size_t size,void (*f)(const T))
{
    size_t cursor = 0;

    while (cursor < size)
    {
        (*f)(tab[cursor]);
        cursor++;
    }
}

template<typename T>
void iter(T *tab, size_t size,void (*f)(T &))
{
    size_t cursor = 0;

    while (cursor < size)
    {
        (*f)(tab[cursor]);
        cursor++;
    }
}

template<typename T>
void printStr(T &x)
{
    std::cout << x << std::endl;
}

template<typename T>
void printInt(T &x)
{
    std::cout << " " << x << " ";
}

template<typename T>
void incrementation(T &nb)
{
    nb++;
}

template<typename T>
void decrementation(T &nb)
{
    nb--;
}

template<typename T>
void strCapitalizer(T &str)
{
    size_t i = 0;

    while (i < str.length())
    {
        str[i] = toupper(str[i]);
        i++;
    }
}

template<typename T>
void strLowercazer(T &str)
{
    size_t i = 0;

    while (i < str.length())
    {
        str[i].tolower();
        i++;
    }
}

#endif
