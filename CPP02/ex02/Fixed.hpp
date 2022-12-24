/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                            :+:    :+:          */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:21:04 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/25 17:26:55 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int32_t					_fp;
		static const int32_t	_fractional_bits = 8;
	public:
		/* Constructors & destructors */
		Fixed(void);
		Fixed(const int32_t);
		Fixed(const float);
		Fixed(const Fixed& ref);
		~Fixed();

		Fixed& operator=(const Fixed& ref);

		/* Arithmetic operators */
		Fixed operator*(const Fixed &ref) const;
		Fixed operator+(const Fixed &ref) const;
		Fixed operator-(const Fixed &ref) const;
		Fixed operator/(const Fixed &ref) const;

		/* Increment / Decrement */
		Fixed& operator++(void);
		Fixed operator++(int32_t);
		Fixed& operator--(void);
		Fixed operator--(int32_t);

		/* Comparison operators */
		bool operator>(const Fixed &ref) const;
		bool operator<(const Fixed &ref) const;
		bool operator==(const Fixed &ref) const;
		bool operator!=(const Fixed &ref) const;
		bool operator<=(const Fixed &ref) const;
		bool operator>=(const Fixed &ref) const;

		/* Functions */
		int32_t				getRawBits(void) const;
		void				setRawBits(const int32_t);
		int32_t				toInt(void) const;
		float				toFloat(void) const;
		static Fixed		&max(Fixed &, Fixed &);
		const static Fixed	&max(const Fixed &, const Fixed &);
		static Fixed		&min(Fixed &, Fixed &);
		const static Fixed	&min(const Fixed &, const Fixed &);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &ref);

#endif
