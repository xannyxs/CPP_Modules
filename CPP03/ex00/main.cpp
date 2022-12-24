//
// Created by xvoorvaa on 8/2/22.
//

#include "ClapTrap.hpp"

int32_t main(void)
{
	ClapTrap ClapBiba("Biba");

	ClapBiba.takeDamage(5);
	ClapBiba.beRepaired(3);
	ClapBiba.attack("Xander");
	ClapBiba.takeDamage(15);
	ClapBiba.beRepaired(3);
	return (0);
}
