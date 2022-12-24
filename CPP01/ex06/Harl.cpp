/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:31:23 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 14:41:03 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	const s_functions Harl_complainer[] = {
		{ "DEBUG", &_debug },
		{ "INFO", &_info },
		{ "WARNING", &_warning },
		{ "ERROR", &_error }
	};

	for (int i = 0 ; i < 4 ; i++)
	{
		if (Harl_complainer[i].func_name == level)
		{
			switch (i)
			{
				case DEBUG:
					Harl_complainer[DEBUG].function();
				case INFO:
					Harl_complainer[INFO].function();
				case WARNING:
					Harl_complainer[WARNING].function();
				case ERROR:
					Harl_complainer[ERROR].function();
				default:
					break;
			}
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}