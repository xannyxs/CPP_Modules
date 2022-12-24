/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 22:04:38 by xander        #+#    #+#                 */
/*   Updated: 2022/07/08 11:34:38 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../INC/Phonebook-class.hpp"
#include "../INC/Contact-class.hpp"

#define SUCCES 1

int32_t	main(void)
{
	std::string	user_input;
	Phonebook	user_phonebook;

	while (true)
	{
		std::cout << "UltraBookPhone: ";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
			break ;
		if (user_input == "ADD")
			user_phonebook.add();
		else if (user_input == "SEARCH")
			user_phonebook.search();
		else if (user_input == "EXIT")
			break ;
		else
			std::cout << "You only have 3 actions: ADD, SEARCH or EXIT" << std::endl;
		user_input.clear();
	}
	return (SUCCES);
}
