//
// Created by xvoorvaa on 13/08/2022.
//

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(const std::string& kind);
	WrongAnimal(const WrongAnimal& ref);
	~WrongAnimal(void);
	
	WrongAnimal& operator=(const WrongAnimal& ref);
	
	void makeSound(void) const;
	const std::string getType(void) const;
protected:
	std::string	_type;
};

#endif //WRONG_ANIMAL_HPP
