#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iterator>

class needleNotFound : public std::exception
{
public:
    virtual const char* what()const throw()
    {
        return ("Needle not found !");
    }
};

template<typename T>
void easyfind(T tab, int needle)
{
    std::vector<int>::iterator it;
    it = std::find(tab.begin(), tab.end(), needle);
    if (*it == needle)
    {
        std::cout << "Number in vector = " << *it << std::endl;
        std::cout << "####### compatibility 100 % #######" << std::endl;
        std::cout << "Success. Number found." << std::endl;
    }
    else
        throw(needleNotFound());
}

#endif