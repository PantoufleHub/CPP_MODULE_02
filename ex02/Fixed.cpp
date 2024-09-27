#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(void): _fixed_point_value(0)
{
	// std::cout << "Default constructor called!" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called!" << std::endl;
	this->_fixed_point_value = value << _fractional_bits;
	
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called!" << std::endl;
	this->_fixed_point_value = value * (1 << _fractional_bits);
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called!" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignement operator called!" << std::endl;
	if (this != &other)
		this->_fixed_point_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	// std::cout << "Default destructor called!" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->_fixed_point_value;
}

void Fixed::setRawBits(const int raw)
{
	this->_fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->_fixed_point_value / (float)(1 << _fractional_bits);
}

int Fixed::toInt(void) const
{
	return this->_fixed_point_value >> _fractional_bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat() << "f";
	return os;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

Fixed &Fixed::operator+(const Fixed &other)
{
	*this = Fixed(this->toFloat() + other.toFloat());
	return *this;
}

Fixed &Fixed::operator-(const Fixed &other)
{
	*this = Fixed(this->toFloat() - other.toFloat());
	return *this;
}

Fixed &Fixed::operator*(const Fixed &other)
{
	*this = Fixed(this->toFloat() * other.toFloat());
	return *this;
}

Fixed &Fixed::operator/(const Fixed &other)
{
	*this = Fixed(this->toFloat() / other.toFloat());
	return *this;
}

Fixed Fixed::operator++()
{
	this->_fixed_point_value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->_fixed_point_value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_fixed_point_value;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_fixed_point_value;
	return (tmp);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}
