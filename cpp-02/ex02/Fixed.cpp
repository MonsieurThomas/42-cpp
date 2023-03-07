#include "Fixed.hpp"
#include <cmath>

const int Fixed::_bitsInt = 8;

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = src.getRawBits();
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;

	this->_value = value << Fixed::_bitsInt;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;

	this->_value = (int)roundf(value * (1 << _bitsInt));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();

	return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

int Fixed::getRawBits( void ) const
{
    return (this->_value);
}

int Fixed::toInt(void) const
{
	return this->_value >> _bitsInt;
}

float Fixed::toFloat(void) const
{
	return this->_value / (float)(1 << _bitsInt);
}

std::ostream &operator<<(std::ostream &temp, Fixed const &rhs)
{
	temp << rhs.toFloat();
    return temp;
}

bool	Fixed::operator<(Fixed rhs) const
{
	if(this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed rhs) const
{
	if(this->getRawBits() > rhs.getRawBits())
		return true;
	return false;

}
bool	Fixed::operator<=(Fixed rhs) const
{
	if(this->getRawBits() <= rhs.getRawBits())
			return true;
	return false;
}
bool	Fixed::operator>=(Fixed rhs) const
{
	if(this->getRawBits() >= rhs.getRawBits())
			return true;
	return false;
}

bool	Fixed::operator==(Fixed rhs) const
{
	if(this->getRawBits() == rhs.getRawBits())
			return true;
	return false;
}

bool	Fixed::operator!=(Fixed rhs) const
{
	if(this->getRawBits() != rhs.getRawBits())
			return true;
	return false;	
}

float   Fixed::operator+(Fixed rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

float   Fixed::operator-(Fixed rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

float   Fixed::operator*(Fixed rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

float   Fixed::operator/(Fixed rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->_value++;
	return (tmp);
}

Fixed &Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
}
