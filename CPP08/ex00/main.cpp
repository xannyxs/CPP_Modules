//
// Created by Xander Voorvaart on 9/13/22.
//

#include "Easyfind.h"
#include <iostream>
#include <vector>
#include <exception>

int32_t main(void)
{
    try
    {
        int myarray [] = { 501,502,503 };
        std::vector<int> veccy;

        veccy.insert(veccy.begin(), myarray, myarray+3);
        std::cout << Easyfind(veccy, 501) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
