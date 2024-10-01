#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	if (a < b)
		std::cout << "b is bigger than a" << std::endl;
	else if (a > b)
		std::cout << "a is bigger than b" << std::endl;
	else
		std::cout << "a and b are equal" << std::endl;

	b = b - Fixed(10.09f);
	std::cout << b << std::endl;

	if (a < b)
		std::cout << "b is bigger than a" << std::endl;
	else if (a > b)
		std::cout << "a is bigger than b" << std::endl;
	else
		std::cout << "a and b are equal" << std::endl;

	std::cout << (Fixed(4.75f) + Fixed(6.5f)) / Fixed(5.0f) * Fixed(30.5f)  << std::endl;
	
	return 0;
}
