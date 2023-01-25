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

	Fixed();
	Fixed(const Fixed &rhs);
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed();
	Fixed &operator=(const Fixed &rhs);

	bool	operator>(const Fixed &rhs);
	bool	operator<(const Fixed &rhs);
	bool	operator>=(const Fixed &rhs);
	bool	operator<=(const Fixed &rhs);
	bool	operator==(const Fixed &rhs);
	bool	operator!=(const Fixed &rhs);

	void 	floatToFixed(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream& os, const Fixed& dt);

#endif
