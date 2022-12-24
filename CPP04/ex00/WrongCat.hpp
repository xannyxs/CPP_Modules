//
// Created by xvoorvaa on 13/08/2022.
//

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat& ref);
	~WrongCat(void);
	
	WrongCat& operator=(const WrongCat& ref);
	
	void makeSound(void) const;
};

#endif //WRONG_CAT_HPP