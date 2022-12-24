//
// Created by xvoorvaa on 13/08/2022.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default construtor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string& kind) : _type(kind)
{
	std::cout << "WrongAnimal: Default construtor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	*this = ref;
	std::cout << "WrongAnimal: Copy construtor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	std::cout << "WrongAnimal: Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal: ?????" << std::endl;
	return ;
}

const std::string WrongAnimal::getType(void) const
{
	return (_type);
}
