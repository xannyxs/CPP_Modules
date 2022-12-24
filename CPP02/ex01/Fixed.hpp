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
		Fixed(void);
		Fixed(const int32_t);
		Fixed(const float);
		Fixed(const Fixed& ref);
		Fixed& operator=(const Fixed& ref);
		~Fixed();

		int32_t		getRawBits(void) const;
		void		setRawBits(const int32_t);
		int			toInt(void) const;
		float		toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &ref);

#endif
