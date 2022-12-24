//
// Created by xvoorvaa on 8/2/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string &new_name) : _name(new_name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap: String constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	_name = ref._name;
	_hp = ref._hp;
	_ep = ref._ep;
	_ad = ref._ad;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string &target)
{
	if (_ep > 0 && _hp > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad
				  << " points of damage " << std::endl;
		_ep--;
	}
	return ;
}

void ClapTrap::takeDamage(const uint32_t amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage" << std::endl;
	_hp -= amount;
	if (_hp <= 0)
		std::cout << "*BOEM* ClapTrap " << _name << " explodes into bits!" << std::endl;
	return ;
}

void ClapTrap::beRepaired(const uint32_t amount)
{
	if (_ep > 0 && _hp > 0) {
		std::cout << "ClapTrap " << _name << " repairs itself " << amount << " of damage" << std::endl;
		_ep--;
	}
	return ;
}