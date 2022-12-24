//
// Created by Xander Voorvaart on 9/14/22.
//

#ifndef CPP08_MUTANTSTACK_H
#define CPP08_MUTANTSTACK_H

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type container_type; // <-- Afkorting voor de onderste typedefs
    typedef typename container_type::iterator iterator;
    typedef typename container_type::const_iterator const_iterator;
    typedef typename container_type::reverse_iterator reverse_iterator;
    typedef typename container_type::const_reverse_iterator const_reverse_iterator;

    MutantStack(void) { };
    MutantStack(const MutantStack& ref) { std::cout << "Copy Constructor" << std::endl; *this = ref; };
    ~MutantStack() { };

    MutantStack& operator=(const MutantStack& ref)
    {
        if (&ref != this)
            this->c = ref.c;
        return (*this);
    };

    // Typedefs
    iterator begin()
    {
        return (this->c.begin());
    }
    const_iterator begin() const
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
    const_iterator end() const
    {
        return (this->c.end());
    }
    reverse_iterator reverse()
    {
        return (this->c.reverse());
    }
    const_reverse_iterator reverse() const
    {
        return (this->c.reverse());
    }
};

#endif //CPP08_MUTANTSTACK_H
