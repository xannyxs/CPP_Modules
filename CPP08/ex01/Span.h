//
// Created by Xander Voorvaart on 9/13/22.
//

#ifndef CPP08_SPAN_H
#define CPP08_SPAN_H

#include <iostream>
#include <vector>
#include <exception>

class Span
{
public:
    Span(uint32_t);
    Span(const Span&);
    ~Span(void);

    Span& operator=(const Span&);

    // Functions
    void addNumber(int32_t);

    template <typename T>
    void addNumber(T, T, int32_t);

    void PrintVeccy(void);
    int shortestSpan(void);
    int longestSpan(void);
    std::vector<int>& SortedVeccy(void);

private:
    std::vector<int> _MyVeccy;
    int32_t _MaxAmount;
};

template <typename T>
void Span::addNumber(T begin, T end, int32_t size)
{
    if (_MaxAmount < size)
        throw (std::invalid_argument("Iterator from start till end is too big"));
    _MyVeccy.insert(_MyVeccy.begin(), begin, end);
}

#endif //CPP08_SPAN_H
