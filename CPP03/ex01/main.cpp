//
// Created by xvoorvaa on 8/2/22.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int32_t main(void)
{
	ClapTrap ClapBiba("Biba");
	ScavTrap ScavTrap;

	std::cout << std::endl << "/* ClapTrap */" << std::endl;
	ClapBiba.takeDamage(5);
	ClapBiba.beRepaired(3);
	ClapBiba.attack("Xander");
	ClapBiba.takeDamage(15);
	ClapBiba.beRepaired(3);

	std::cout << std::endl << "/* ScavTrap */" << std::endl;
	ScavTrap.attack("Peer");
	ScavTrap.beRepaired(10);
	ScavTrap.takeDamage(1200);
	ScavTrap.attack("Peer");

	std::cout << std::endl << "/* Destructors */" << std::endl;
	return (0);
}
