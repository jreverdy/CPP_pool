#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <set>
#include <vector>
#include <iterator>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

class Span
{

private:

    unsigned int           _maxSize;
    std::set<unsigned int> _tab;

public:

class WrongParameter : public std::exception
{
    virtual const char* what() const throw()
    {
        return ("If you want to find span between two numbers, you'll need at least two !");
    }
};

class TooManyNumbers : public std::exception
{
    virtual const char* what() const throw()
   {
        return ("You cannot add more numbers !");
   }
};
    Span(unsigned int N);
    Span(const Span &rhs);
    Span &operator=(const Span &rhs);
    ~Span();

    void            addNumber(unsigned int nb);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();

    std::set<unsigned int>  getTab();
    unsigned int            getmaxSize();

    template<class InputIt>
    void insert(InputIt first, InputIt last)
    {
        if (static_cast<unsigned int>(std::distance(first, last) <= _maxSize))
        {
            _maxSize -= static_cast<unsigned int>(std::distance(first, last));
            _tab.insert(first, last);
        }
        else
            throw(TooManyNumbers());
    }
};

#endif