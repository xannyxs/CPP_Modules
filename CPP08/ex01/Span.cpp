//
// Created by Xander Voorvaart on 9/13/22.
//

#include "Span.h"

Span::Span(uint32_t MaxAmount)
    : _MaxAmount(MaxAmount)
{
    if (MaxAmount == 0)
        throw (std::invalid_argument("Argument should be higher than 0"));
}

Span::Span(const Span& ref)
    : _MyVeccy(ref._MyVeccy), _MaxAmount(ref._MaxAmount)
{
    *this = ref;
}

Span::~Span()
{
}

Span& Span::operator=(const Span& ref)
{
    if (&ref != this)
    {
        _MaxAmount = ref._MaxAmount;
        _MyVeccy = ref._MyVeccy;
        return (*this);
    }
    return (*this);
}

void Span::addNumber(int32_t new_element)
{
    if (static_cast<uint64_t>(_MaxAmount) <= _MyVeccy.size())
        throw (std::runtime_error("Reached maximum amount"));
    _MyVeccy.insert(_MyVeccy.begin(), new_element);
}

void Span::PrintVeccy(void)
{
    for (uint64_t i = 0; i < _MyVeccy.size(); i++)
        std::cout << _MyVeccy[i] << std::endl;
    std::cout << std::endl;
}

std::vector<int>& Span::SortedVeccy(void)
{
    std::vector<int>& tmp = _MyVeccy;

    std::sort(tmp.begin(), tmp.end());
    return (tmp);
}

int Span::shortestSpan(void)
{
    if (_MyVeccy.size() == 0 || _MyVeccy.size() == 1)
        throw (std::runtime_error("Iterator is too small"));
    std::vector<int> tmp = SortedVeccy();
    int32_t shortestSpan = tmp[1] - tmp[0];

    for (uint64_t i = 0; i < tmp.size() - 1; i++)
    {
        if (shortestSpan > tmp[i + 1] - tmp[i])
            shortestSpan = tmp[i + 1] - tmp[i];
    }
    return (shortestSpan);
}

int Span::longestSpan(void)
{
    if (_MyVeccy.size() == 0 || _MyVeccy.size() == 1)
        throw (std::runtime_error("Iterator is too small"));
    std::vector<int> tmp = SortedVeccy();

    return (tmp[tmp.size() - 1] - *tmp.begin());
}
