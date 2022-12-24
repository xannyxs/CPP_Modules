//
// Created by xvoorvaa on 13/08/2022.
//

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default construtor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& ref)
{
	*this = ref;
	std::cout << "WrongCat: Copy construtor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor called" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	std::cout << "WrongCat: Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Meouwww" << std::endl;
	return ;
}
