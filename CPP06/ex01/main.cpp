//
// Created by Xander Voorvaart on 8/23/22.
//

#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Data.h"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int32_t	main(void)
{
    uintptr_t   test;
    Data*   d = new Data;

    std::cout << &d << std::endl;
    d->HelloWorld();
    test = serialize(d);
    d = deserialize(test);
    std::cout << &d << std::endl;
    d->HelloWorld();
	return (0);
}