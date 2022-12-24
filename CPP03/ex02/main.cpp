//
// Created by xvoorvaa on 8/2/22.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int32_t main(void)
{
	ClapTrap ClapBiba("Biba");
	ScavTrap ScavNina;
	ScavTrap Decoy = ScavNina;
	FragTrap FragDima;

	std::cout << std::endl << "/* ClapTrap */" << std::endl;
	ClapBiba.takeDamage(5);
	ClapBiba.beRepaired(3);
	ClapBiba.attack("Xander");
	ClapBiba.takeDamage(15);
	ClapBiba.beRepaired(3);

	std::cout << std::endl << "/* ScavTrap */" << std::endl;
	ScavNina.attack("Peer");
	ScavNina.beRepaired(10);
	ScavNina.guardGate();
	ScavNina.takeDamage(1200);
	ScavNina.attack("Peer");

	std::cout << std::endl << "/* FragTrap */" << std::endl;
	FragDima.highFivesGuys();
	FragDima.attack("Job");
	FragDima.beRepaired(10);
	FragDima.takeDamage(1200);
	FragDima.attack("Job");
	std::cout << std::endl << "/* Destructors */" << std::endl;
	return (0);
}
