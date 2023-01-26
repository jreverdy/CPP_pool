#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "int constructor called" << std::endl;
	_rawBits = nbr * (1 << _bits);
}

Fixed::Fixed(const float nbr)
{
	std::cout << "float constructor called" << std::endl;
	_rawBits = roundf(nbr * (1 << _bits));
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

float	Fixed::toFloat( void ) const
{
	return ((float)_rawBits / (float)(1 << _bits));
}

int		Fixed::toInt( void ) const
{
	return (roundf(_rawBits) / (1 << _bits));
}

std::ostream	&operator<<(std::ostream& os, const Fixed& dt)
{
	os << dt.toFloat();
	return (os);
}
