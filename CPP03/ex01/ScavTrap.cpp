//
// Created by Xander Voorvaart on 8/2/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
	_hp = 100;
	_ep = 40;
	_ad = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string &new_name) : ClapTrap(new_name)
{
	_hp = 100;
	_ep = 40;
	_ad = 20;
	std::cout << "ScavTrap: String constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	_name = ref._name;
	_hp = ref._hp;
	_ep = ref._ep;
	_ad = ref._ad;
	return (*this);
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap: Yoo I am guarding" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string &target)
{
	if (_ep > 0 && _hp > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad
				  << " points of damage " << std::endl;
		_ep--;
	}
}
