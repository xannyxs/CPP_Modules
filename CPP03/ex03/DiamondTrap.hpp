//
// Created by xvoorvaa on 8/3/22.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(const std::string &);
	DiamondTrap(const DiamondTrap &ref);
	~DiamondTrap(void);

	DiamondTrap &operator=(const DiamondTrap &ref);

	void whoAmI(void) const;
private:
	std::string _name;
};


#endif //DIAMONDTRAP_HPP
