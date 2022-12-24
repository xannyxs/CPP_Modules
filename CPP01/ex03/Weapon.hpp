/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 17:15:28 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/08 20:25:17 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string new_weapon);
		~Weapon(void);

		const std::string	&getType(void) const;
		void setType(std::string new_weapon);
};