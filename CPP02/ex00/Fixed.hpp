/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 19:37:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 20:56:03 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int32_t					_fp;
		static const int32_t	_fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &ref);
		Fixed&operator=(const Fixed &ref);
		~Fixed(void);

		int32_t		getRawBits(void) const;
		void		setRawBits(const int32_t raw);
};