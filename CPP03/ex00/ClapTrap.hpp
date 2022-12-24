//
// Created by xvoorvaa on 8/2/22.
//

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(const std::string);
	ClapTrap(const ClapTrap &ref);
	ClapTrap &operator=(const ClapTrap &ref);
	~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(const uint32_t amount);
	void beRepaired(const uint32_t amount);
private:
	std::string		_name;
	int32_t			_hp;
	uint32_t		_ep;
	uint32_t		_ad;
};

#endif //CLAPTRAP_H
