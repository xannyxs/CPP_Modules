/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 11:51:05 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/08 15:12:20 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie *zombieHorde = new Zombie[N];

	while (i < N)
	{
		zombieHorde[i].newZombie(name);
		i++;
	}
	return (zombieHorde);
}