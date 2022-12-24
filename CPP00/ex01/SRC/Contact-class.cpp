/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact-class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 13:59:10 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/08 14:30:34 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#include "../INC/Contact-class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::truncate(std::string str, size_t width)
{
	if (str.length() > width)
	{
		return (str.substr(0, width - 1) + '.');
	}
	return (str);
}

void Contact::show_contact(void)
{
	std::cout << first_name << std::endl;
	std::cout << surname << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
	return ;
}

void Contact::get_input(std::string info, std::string *contact_info)
{
	contact_info->clear();
	while (contact_info->empty() == true && !std::cin.eof())
	{
		std::cout << info <<" [] = ";
		std::getline(std::cin, *contact_info);
		if (contact_info->empty() == true)
			std::cout << "String cannot be empty." << std::endl;
	}
}

void Contact::add(void)
{
	static int	i;

	if (i >= 8)
		i = 0;
	get_input("First name", &first_name);
	get_input("Surname", &surname);
	get_input("Nickname", &nickname);
	get_input("Phone number", &phone_number);
	get_input("Darkest Secret", &darkest_secret);
	i++;
	return ;
}

void Contact::list_contact(int i)
{
	std::cout << std::setw(10) << i + 1 << ".";
	std::cout << " | " << std::setw(10) << truncate(first_name, 10);
	std::cout << " | " << std::setw(10) << truncate(surname, 10);
	std::cout << " | " << std::setw(10) << truncate(nickname, 10);
	std::cout << std::endl;
}

void Contact::search(Contact contacts[])
{
	int			i;
	std::string	input;

	i = 0;
	while (i < 8 && contacts[i].first_name.empty() == false)
	{
		contacts[i].list_contact(i);
		i++;
	}
	while (input.empty() == true && !std::cin.eof())
	{
		std::cout << "Choose a contact: ";
		std::getline(std::cin, input);
		if (isdigit(input[0]) == false || input.length() != 1)
		{
			std::cout << "I need a valid digit!" << std::endl;
			input.clear();
		}
		else if (contacts[stoi(input) - 1].first_name.length() <= 0)
			std::cout << "Contact does not exist" << std::endl;
		else if (stoi(input) > 0 && stoi(input) < 9)
			contacts[stoi(input) - 1].show_contact();
		else
			std::cout << "Contact does not exist" << std::endl;
	}
	return ;
}