//
// Created by xvoorvaa on 13/08/2022.
//

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat: Default construtor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& ref)
{
	*this = ref;
	std::cout << "Cat: Copy construtor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called" << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& ref)
{
	std::cout << "Cat: Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Meouwww" << std::endl;
	return ;
}
