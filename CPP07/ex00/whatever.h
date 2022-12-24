//
// Created by Xander Voorvaart on 9/6/22.
//

#ifndef CPP07_WHATEVER_H
#define CPP07_WHATEVER_H

template <class T>
void swap (T& a, T& b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <class T>
T min (T a, T b)
{
    return (a < b ? a : b);
}

template <class T>
T max (T a, T b)
{
    return (a > b ? a : b);
}

#endif //CPP07_WHATEVER_H
