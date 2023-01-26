#include "Fixed.hpp"

//constructors
Fixed::Fixed()
{
	_rawBits = 0;
}

Fixed::Fixed(const int nbr)
{
	_rawBits = nbr * (1 << _bits);
}

Fixed::Fixed(const float nbr)
{
	_rawBits = roundf(nbr * (1 << _bits));
}

Fixed::Fixed(const Fixed &rhs)
{
	*this = rhs;
}

//destructor
Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	_rawBits = rhs._rawBits;
	return(*this);
}

//Member functions
void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int Fixed::getRawBits()const
{
	return(this->_rawBits);
}

float	Fixed::toFloat( void ) const
{
	return ((float)_rawBits / (float)(1 << _bits));
}

int		Fixed::toInt( void ) const
{
	return (roundf(_rawBits) / (1 << _bits));
}

//Comparison operators
bool Fixed::operator>(const Fixed &rhs)
{
	return (_rawBits > rhs._rawBits);
}

bool Fixed::operator<(const Fixed &rhs)
{
	return (_rawBits < rhs._rawBits);
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	return (_rawBits >= rhs._rawBits);
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	return (_rawBits <= rhs._rawBits);
}

bool	Fixed::operator==(const Fixed &rhs)
{
	return(_rawBits == rhs._rawBits);
}

bool	Fixed::operator!=(const Fixed &rhs)
{
	return (_rawBits != rhs._rawBits);
}

//Arithmetic operators
Fixed	Fixed::operator+(const Fixed &rhs)
{
	return (this->_rawBits + rhs._rawBits);
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	return (this->_rawBits - rhs._rawBits);
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	return (toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	return (toFloat() / rhs.toFloat());
}

//increment
Fixed	&Fixed::operator++(void)
{
	_rawBits += 1;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	_rawBits -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int n)
{
	Fixed tmp;
	(void)n;

	tmp._rawBits = _rawBits;
	_rawBits += 1;
	return (tmp);
}
Fixed	Fixed::operator--(int n)
{
	Fixed tmp;
	(void)n;

	_rawBits -= 1;
	return (tmp);
}

const Fixed   &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1._rawBits < f2._rawBits)
		return (f1);
	else
		return (f2);
}

const Fixed   &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1._rawBits < f2._rawBits)
		return (f1);
	else
		return (f2);
}

const Fixed   &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1._rawBits > f2._rawBits)
		return (f1);
	else
		return (f2);
}

const Fixed   &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1._rawBits > f2._rawBits)
		return (f1);
	else
		return (f2);
}

std::ostream	&operator<<(std::ostream& os, const Fixed& dt)
{
	os << dt.toFloat();
	return (os);
}
