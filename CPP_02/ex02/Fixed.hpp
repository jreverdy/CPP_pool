#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:

	int 				_rawBits;
	static const int	_bits = 8;

public:

	//canonical class
	Fixed();
	Fixed(const Fixed &rhs);
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed();
	Fixed &operator=(const Fixed &rhs);

	//comparison operators
	bool	operator>(const Fixed &rhs);
	bool	operator<(const Fixed &rhs);
	bool	operator>=(const Fixed &rhs);
	bool	operator<=(const Fixed &rhs);
	bool	operator==(const Fixed &rhs);
	bool	operator!=(const Fixed &rhs);

	//arithmetic operators
	Fixed	operator+(const Fixed &rhs);
	Fixed	operator-(const Fixed &rhs);
	Fixed	operator*(const Fixed &rhs);
	Fixed	operator/(const Fixed &rhs);

	//increment
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int n);
	Fixed	operator--(int n);

	//members functions
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	void 	floatToFixed(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
	static const Fixed   &min(Fixed &f1, Fixed &f2);
	static const Fixed   &min(const Fixed &f1, const Fixed &f2);
	static const Fixed   &max(Fixed &f1, Fixed &f2);
	static const Fixed   &max(const Fixed &f1, const Fixed &f2);
};

std::ostream	&operator<<(std::ostream& os, const Fixed& dt);

#endif
