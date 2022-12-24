/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                            :+:    :+:           */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:21:04 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/25 17:26:55 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int32_t	main(void)
{
	std::cout << "/* Subject test */" << std::endl;
	Fixed a;
	const Fixed b(Fixed(5.05f) * Fixed(2));
	Fixed c(50);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << std::endl << "/* User test */" << std::endl;

	std::cout << c << std::endl;
	std::cout << c / 2 << std::endl;
	std::cout << c * 2 << std::endl;
	std::cout << c + 5 << std::endl;
	c = c + 5;
	std::cout << c + 5 << std::endl;
	c = c - 10.5f;
	std::cout << c / 2 << std::endl;
	std::cout << Fixed::min(a, c) << std::endl;

	std::cout << "Check minus" << std::endl;
	c = 0;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;
	return (0);
}