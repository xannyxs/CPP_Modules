/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 17:11:36 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/08 20:20:45 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanA(std::string, Weapon &);
		~HumanA(void);

		void	attack();
};