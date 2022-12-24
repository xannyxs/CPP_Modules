/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 20:28:04 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/22 18:57:23 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string new_name) : name(new_name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon new_weapon)
{
	weapon = &new_weapon;
	return ;
}

void HumanB::attack(void)
{
	std::cout << name <<  " attacks with their " << weapon->getType() << std::endl;
}