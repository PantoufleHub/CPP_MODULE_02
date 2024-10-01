#ifndef FIXED
# define FIXED

#include <iostream>

class Fixed
{
	private:
		int _fixed_point_value;
		static const int _fractional_bits;

	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		Fixed &operator+(const Fixed &other);
		Fixed &operator-(const Fixed &other);
		Fixed &operator*(const Fixed &other);
		Fixed &operator/(const Fixed &other);
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static Fixed	&min(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif