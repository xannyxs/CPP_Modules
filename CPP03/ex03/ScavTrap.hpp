//
// Created by Xander Voorvaart on 8/2/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string &);
	ScavTrap(const ScavTrap &ref);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &ref);

	void guardGate(void) const;
	void attack(const std::string &target);
};


#endif //SCAVTRAP_HPP
