/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:32:25 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 12:01:20 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int32_t main(void)
{
	Harl		Karen;
	std::string	input;

	while (true)
	{
		std::cout << "Send Command To Karen: ";
		getline(std::cin, input);
		if (std::cin.eof() == true)
			break ;
		Karen.complain(input);
	}
	return (0);
}
