#include "Fixed.hpp"

Fixed::Fixed()
{
	_rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_rawBits = rhs._rawBits;
	return(*this);
}

int Fixed::getRawBits()const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_rawBits);
}

void	Fixed::setRawBits(const int raw)
{
	this->_rawBits = raw;
}
