//
// Created by Xander Voorvaart on 9/6/22.
//

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <class T>
void PrintArray(T Array, uint32_t size)
{
    for (uint32_t i = 0; i < size; i++) {
        std::cout << Array[i] << std::endl;
    }
}

template <class T>
void iter(T Array, int sizeArray, void (PrintArray)(T, uint32_t))
{
    PrintArray(Array, sizeArray);
}

#endif //ITER_H
