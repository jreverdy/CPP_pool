#include <iostream>
#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

//int main()
//{
//	float nbr = 2.8f;
//	float nbr1 = -7.1253153513513f;
//
//	std::cout << nbr + nbr1 << std::endl;
//
//	std::cout << int(nbr) << std::endl;
//	std::cout << roundf(nbr) << std::endl;
//
//	int _rawBits = (roundf(nbr * (1 << 8)));
//	int _rawBits1 = ((nbr1 * (1 << 8)));
//
//	int sum = _rawBits + _rawBits1;
//	std::cout <<  sum << std::endl;
//
//	std::cout << (_rawBits /(float)(1 << 8)) << std::endl;
//}
