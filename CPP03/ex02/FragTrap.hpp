//
// Created by xvoorvaa on 8/3/22.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string &);
	FragTrap(const FragTrap &ref);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &ref);

	void	highFivesGuys(void) const;
};


#endif //FRAGTRAP_HPP
