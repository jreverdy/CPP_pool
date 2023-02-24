#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stddef.h>
#include <iostream>
#include <string>

template<typename T>
class Array
{
private:

    T       *_tab;
    size_t  _size;

public:

    Array()
    {
        _tab = new T;
        _size = 0;
    }

    Array(unsigned int n)
    {
        _tab = new T[n];
        for (unsigned int i = 0; i < n; i++)
            _tab[i] = 0;
        _size = n;
    }

    Array(const Array &rhs)
    {
        _tab = rhs._tab;
        _size = rhs._size;
        *this = rhs;
    }

    Array &operator=(const Array &rhs)
    {
        if (rhs._size)
        {
            _tab = new T[rhs._size];
            for (unsigned int i = 0; i < rhs._size; i++)
                _tab[i] = rhs._tab[i];
        }
        else
            _tab = NULL;
        _size = rhs._size;
    }

    ~Array()
    {
        if (_tab)
            delete [] _tab;
    }

    T &operator[](int n)
    {
        if (isInvalid(n)) {
            throw(InvalidIndexException());
        }
        return(_tab[n]);
    }

    const T &operator[](int n)const
    {
        if (isInvalid(n)) {
            throw(InvalidIndexException());
        }
        return(_tab[n]);
    }

    class InvalidIndexException : public std::exception
    {
        virtual const char* what()const throw()
        {
            return ("Index not valid");
        }
    };

    bool    isInvalid(int index)
    {
        return (index > static_cast<int>(size()) || index < 0);
    }

    size_t  size()
    {
        return (_size);
    }

};

#endif