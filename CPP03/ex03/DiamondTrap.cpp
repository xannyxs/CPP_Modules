//
// Created by xvoorvaa on 8/3/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("DiamondTrap_clap_name"), ScavTrap(ClapTrap::_name), FragTrap(ClapTrap::_name), _name("DiamondTrap")
{
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ad = FragTrap::_ad;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string &new_name) : ClapTrap(new_name + "_clap_name"), ScavTrap(ClapTrap::_name), FragTrap(ClapTrap::_name), _name(new_name)
{
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ad = FragTrap::_ad;
	std::cout << "DiamondTrap: String constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = ref;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ref)
{
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	_name = ref._name;
	_hp = ref._hp;
	_ep = ref._ep;
	_ad = ref._ad;
	return (*this);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is: " << _name << " & my ClapTrap name is: " << ClapTrap::_name << std::endl;
	return ;
}