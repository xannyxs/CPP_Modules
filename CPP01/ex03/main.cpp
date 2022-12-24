/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 17:11:01 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 14:50:43 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int32_t	main(void)
{
	Weapon club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("sword");
	bob.attack();

	club.setType("fists");

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("Gun");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();

	return (0);
}
