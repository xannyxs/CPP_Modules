//
// Created by xvoorvaa on 13/08/2022.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog& ref);
	~Dog(void);
	
	Dog& operator=(const Dog& ref);
	
	void makeSound(void) const;
};

#endif //DOG_HPP