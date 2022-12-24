//
// Created by xvoorvaa on 13/08/2022.
//

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog: Default construtor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& ref)
{
	*this = ref;
	std::cout << "Dog: Copy construtor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& ref)
{
	std::cout << "Dog: Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: WOoooeeef" << std::endl;
	return ;
}
