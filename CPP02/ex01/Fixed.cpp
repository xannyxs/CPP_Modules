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

Fixed::Fixed(void) : _fp(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int32_t N) : _fp(N << _fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float N) : _fp(roundf(N * (1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fp = ref.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int32_t Fixed::getRawBits(void) const
{
	return (_fp);
}

void	Fixed::setRawBits(const int32_t raw)
{
	_fp = raw;
	return ;
}

int 	Fixed::toInt(void) const
{
	return (_fp >> _fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_fp / (float)(1 << _fractional_bits));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &ref)
{
	o << ref.toFloat();
	return (o);
}
