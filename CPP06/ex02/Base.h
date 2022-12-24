//
// Created by Xander Voorvaart on 9/6/22.
//

#ifndef CPP06_BASE_H
#define CPP06_BASE_H

#include <iostream>
#include <random>

class Base
{
public:
    virtual ~Base();
};

enum e_ClassNumbers
{
    e_ClassA,
    e_ClassB,
    e_ClassC
};

void identify_from_pointer(Base* p);
void identify_from_reference(Base& p);
Base* generate(void);


#endif //CPP06_BASE_H
