#ifndef FIXED
# define FIXED

class Fixed
{
private:
int value;
static const int frac_bits;

public:
Fixed(void);
Fixed(const Fixed &other);
Fixed &operator=(const Fixed &other);
~Fixed(void);
int getRawBits(void) const;
void setRawBits(int const raw);
};

#endif