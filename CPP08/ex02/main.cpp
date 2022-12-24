//
// Created by Xander Voorvaart on 9/14/22.
//

#include "MutantStack.h"

#include <stack>
#include <list>
#include <iostream>

void MutantStack_check(void)
{
    std::cout << "Stack" << '\n';

    MutantStack<int> mstack;
    MutantStack<int> test(mstack); // Checking if Copy Contructor works
    test.push(5);

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it_begin = mstack.begin();
    MutantStack<int>::iterator it_end = mstack.end();
    ++it_begin;
    --it_begin;
    while (it_begin != it_end)
    {
        std::cout << *it_begin << std::endl;
        ++it_begin;
    }

    std::stack<int> s(mstack);
    std::cout << std::endl;
}

void List_check(void)
{
    std::cout << "List" << '\n';

    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << *mstack.begin() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);

    std::list<int>::iterator it_begin = mstack.begin();
    std::list<int>::iterator it_end = mstack.end();
    ++it_begin;
    --it_begin;
    while (it_begin != it_end)
    {
        std::cout << *it_begin << std::endl;
        ++it_begin;
    }
    std::cout << std::endl;
}

int32_t main(void)
{
    MutantStack_check();
    List_check();
    return (0);
}
