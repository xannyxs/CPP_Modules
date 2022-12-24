//
// Created by Xander Voorvaart on 8/30/22.
//

#include "Data.h"

Data::Data(void)
    : _SpookyData(42)
{
    return ;
}

Data::Data(const Data& ref)
        : _SpookyData(42)
{
    *this = ref;
    return ;
}

Data::~Data(void)
{
    return ;
}

Data& Data::operator=(const Data& ref)
{
    (void) ref;
    return (*this);
}

// Functions

void Data::HelloWorld(void)
{
    std::cout << "Hello World" << std::endl;
}

void Data::SpookyPrint(void)
{
    std::cout << _SpookyData << std::endl;
}
