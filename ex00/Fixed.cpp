#include "Fixed.hpp"
#include <iostream>

const int Fixed::frac_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called!" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called!" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called!" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called!" << std::endl;
	return this->value;
}

void Fixed::setRawBits(const int raw)
{
	this->value = raw;
}
