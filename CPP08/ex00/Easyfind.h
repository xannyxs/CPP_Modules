//
// Created by Xander Voorvaart on 9/13/22.
//

#ifndef CPP08_EASYFIND_H
#define CPP08_EASYFIND_H

#include <algorithm>
#include <vector>
#include <iostream>
#include <exception>
#include <stdexcept>


template<typename T>
T Easyfind(std::vector<T> veccy, T val)
{
    typename std::vector<T>::iterator result;

    result = std::find(veccy.begin(), veccy.end(), val);
    if (*result != val)
        throw (std::invalid_argument("Je bent nep"));
    return (*result);
}

#endif //CPP08_EASYFIND_H
