//
// Created by Xander Voorvaart on 9/13/22.
//

#include "Span.h"
#include <iostream>
#include <exception>

#define RED "\033[0;31m"
#define RESET "\033[0m"

void default_test(void)
{
    std::cout << "-- DEFAULT ---" << std::endl;
    try
    {
        Span sp = Span(7);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(1);
        sp.addNumber(1);

        sp.PrintVeccy();
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}

void too_small_test(void)
{
    std::cout << "-- TOO SMALL TEST ---" << std::endl;
    try
    {
        Span sp = Span(1);

        sp.addNumber(6);

        sp.PrintVeccy();
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}

void reach_limit(void)
{
    std::cout << "-- REACH LIMIT ---" << std::endl;
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(12);

        sp.PrintVeccy();
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}

void invalid_arg()
{
    std::cout << "-- INVALID ARG ---" << std::endl;
    try
    {
        Span sp(0);
    }
    catch (const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}

void useCool_addNumbers(void)
{
    std::cout << "--- COOL addNumber ---" << std::endl;
    try
    {
        Span sp(10);
        std::vector<int> OtherVeccy(10, 12);

        sp.addNumber(OtherVeccy.begin(), OtherVeccy.end(), OtherVeccy.size());

        sp.PrintVeccy();
    }
    catch (const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}

void reach_limit_coolAddNumber(void)
{
    std::cout << "--- REACH LIMIT COOL addNumber ---" << std::endl;
    try
    {
        Span sp(10);
        std::vector<int> OtherVeccy(11, 12);

        sp.addNumber(OtherVeccy.begin(), OtherVeccy.end(), OtherVeccy.size());

        sp.PrintVeccy();
    }
    catch (const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}

int32_t main(void)
{
    default_test();
    too_small_test();
    reach_limit();
    invalid_arg();
    useCool_addNumbers();
    reach_limit_coolAddNumber();
    return (0);
}
