/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook-class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 22:23:42 by xander        #+#    #+#                 */
/*   Updated: 2022/07/08 11:32:33 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact-class.hpp"

class	Phonebook
{
	private:
		Contact		contacts[8];

		std::string	truncate(std::string, size_t width);
	public:
		Phonebook(void);
		~Phonebook(void);

		void add(void);
		void search(void);
};
