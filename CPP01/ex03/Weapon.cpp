/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 17:28:25 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 14:49:12 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_weapon)
{
	setType(new_weapon);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string &Weapon::getType(void) const
{
	return (type);
}

void Weapon::setType(std::string new_weapon)
{
	type = new_weapon;
	return ;
}