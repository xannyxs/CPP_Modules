/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook-class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 22:23:42 by xander        #+#    #+#                 */
/*   Updated: 2022/07/08 14:16:43 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#include "../INC/Phonebook-class.hpp"
#include "../INC/Contact-class.hpp"

Phonebook::Phonebook(void)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destroying all contacts" << std::endl;
	return ;
}

void Phonebook::add(void)
{
	static int	i;

	if (i >= 8)
		i = 0;
	contacts[i].add();
	i++;
	return ;
}

void Phonebook::search(void)
{
	contacts->search(contacts);
	return ;
}
