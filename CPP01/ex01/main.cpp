/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 15:25:29 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 14:58:49 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int32_t main(void)
{
	int		i = 0;
	Zombie	*zombieHorde = NULL;

	zombieHorde = zombieHorde->zombieHorde(3, "Horde-1");
	while (i < 3)
	{
		zombieHorde[i].announce();
		i++;
	}
	delete [] zombieHorde;

	std::cout << std::endl;

	i = 0;
	zombieHorde = zombieHorde->zombieHorde(10, "Horde-2");
	while (i < 10)
	{
		zombieHorde[i].announce();
		i++;
	}
	delete [] zombieHorde;
	std::cout << std::endl;
	system("leaks zombie_horde");
	return (0);
}