/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:26:26 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 14:40:13 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

enum level {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	private:
		struct	s_functions {
			std::string	func_name;
			void		(*function)(void);
		};

		static void	_debug(void);
		static void	_info(void);
		static void	_warning(void);
		static void	_error(void); 
	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level);
};
