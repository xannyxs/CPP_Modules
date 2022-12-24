/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                            :+:    :+:          */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:21:04 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/25 17:26:55 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

/* Constructors & destructors */

Fixed::Fixed(void) : _fp(0)
{
	return ;
}

Fixed::Fixed(const int32_t N) : _fp(N << _fractional_bits)
{
	return ;
}

Fixed::Fixed(const float N) : _fp(roundf(N * (1 << _fractional_bits)))
{
	return ;
}

Fixed::Fixed(const Fixed& ref)
{
	*this = ref;
}

Fixed::~Fixed()
{
	return ;
}

/* Class functions */

int32_t Fixed::getRawBits(void) const
{
	return (_fp);
}

void	Fixed::setRawBits(const int32_t raw)
{
	_fp = raw;
	return ;
}

int32_t	Fixed::toInt(void) const
{
	return (_fp >> _fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_fp / (float)(1 << _fractional_bits));
}

Fixed	&Fixed::max(Fixed &c1, Fixed &c2)
{
	return (c1 > c2 ? c1 : c2);
}

const Fixed	&Fixed::max(const Fixed &c1, const Fixed &c2)
{
	return (c1 > c2 ? c1 : c2);
}

Fixed	&Fixed::min(Fixed &c1, Fixed &c2)
{
	return (c1 < c2 ? c1 : c2);
}

const Fixed	&Fixed::min(const Fixed &c1, const Fixed &c2)
{
	return (c1 < c2 ? c1 : c2);
}

/* Operators */

Fixed&	Fixed::operator=(const Fixed& ref)
{
	_fp = ref.getRawBits();
	return (*this);
}

/* Comparison operators */

bool	Fixed::operator==(const Fixed& ref) const
{
	return (this->_fp == ref._fp);
}

bool	Fixed::operator>(const Fixed &ref) const
{
	return (this->_fp > ref._fp);
}

bool	Fixed::operator<(const Fixed &ref) const
{
	return (this->_fp < ref._fp);
}

bool	Fixed::operator>=(const Fixed &ref) const
{
	return (this->_fp >= ref._fp);
}

bool	Fixed::operator<=(const Fixed &ref) const
{
	return (this->_fp <= ref._fp);
}

bool	Fixed::operator!=(const Fixed &ref) const
{
	return (this->_fp != ref._fp);
}

/* Arithmetic operators */

Fixed	Fixed::operator/(const Fixed &ref) const
{
	return (Fixed(this->toFloat() / ref.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &ref) const
{
	return (Fixed(toFloat() * ref.toFloat()));
}

Fixed	Fixed::operator+(const Fixed &ref) const
{
	return (Fixed(this->toFloat() + ref.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &ref) const
{
	return (Fixed(this->toFloat() - ref.toFloat()));
}

/* Increment / Decrement */

Fixed&	Fixed::operator++(void)
{
	this->_fp++;
	return (*this);
}

Fixed	Fixed::operator++(int32_t)
{
	Fixed	temp(*this);

	operator++();
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	this->_fp--;
	return (*this);
}

Fixed	Fixed::operator--(int32_t)
{
	Fixed	temp(*this);

	operator--();
	return (temp);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &ref)
{
	o << ref.toFloat();
	return (o);
}

