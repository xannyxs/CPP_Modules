/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact-class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 13:55:03 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/08 14:30:27 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class	Contact
{
	private:
		std::string	first_name;
		std::string	surname;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

		std::string	truncate(std::string, size_t width);
	public:
		Contact(void);
		~Contact(void);

		void	show_contact(void);
		void	get_input(std::string, std::string *);
		void	add(void);
		void	search(Contact *);
		void 	list_contact(int);
};

#endif