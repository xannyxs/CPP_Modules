/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 15:25:29 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/08 13:41:24 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int32_t main(void)
{
	Zombie	*Zombie_lisa;
	Zombie	*Zombie_jack;
	Zombie	*randomChump;

	Zombie_lisa = NULL;
	Zombie_jack = NULL;
	Zombie_lisa = Zombie_lisa->newZombie("Lisa");
	Zombie_jack = Zombie_jack->newZombie("Jack");
	Zombie_lisa->announce();
	Zombie_jack->announce();
	delete Zombie_lisa;
	delete Zombie_jack;

	randomChump = NULL;
	randomChump->randomChump("Turlough");
	return (0);
}