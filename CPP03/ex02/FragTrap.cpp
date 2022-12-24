//
// Created by xvoorvaa on 8/3/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string &new_name) : ClapTrap(new_name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap: String constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = ref;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap &ref)
{
	_name = ref._name;
	_hp = ref._hp;
	_ep = ref._ep;
	_ad = ref._ad;
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void) const
{
		std::cout << "FragTrap: High Five guys!!! <3" << std::endl;
	return ;
}
