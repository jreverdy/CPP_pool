#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N)
{
    if (_maxSize < 2)
        throw(WrongParameter());
    /*srand(time(0));
    for (unsigned int i = 0; i < _size; i++)
    {
        int nb = rand()%100 + 1;
        _tab.insert(nb);
    }*/
}

Span::Span(const Span &rhs)
{
    *this = rhs;
}

Span &Span::operator=(const Span &rhs)
{
    _maxSize = rhs._maxSize;
    return (*this);
}

Span::~Span()
{
}

std::set<unsigned int> Span::getTab()
{
    return(_tab);
}

unsigned int Span::getmaxSize()
{
    return(_maxSize);
}

void Span::addNumber(unsigned int nb)
{

    if (_maxSize)
    {
        _tab.insert(nb);
        _maxSize -= 1;
    }
    else
        throw(TooManyNumbers());
}

unsigned int Span::longestSpan()
{
    unsigned int res = (*(--_tab.end()) - *_tab.begin());
    return (res);
}

unsigned int Span::shortestSpan()
{
    unsigned int res;
    unsigned int span2;
    std::set<unsigned int>::iterator it;
    std::set<unsigned int>::iterator it2;

    if (_tab.size() < 2) {
        throw(WrongParameter());
    }
    it = _tab.begin();
    it2 = ++_tab.begin();
    res = *it2 - *it;
    for (unsigned int i = 0; i < _tab.size(); ++i)
    {
        span2 = *it2 - *it;
        if (res > span2)
            res = span2;
        ++it;
        ++it2;
    }
    return (res);
}