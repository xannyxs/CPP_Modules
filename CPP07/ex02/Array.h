//
// Created by Xander Voorvaart on 9/11/22.
//

#ifndef CPP07_ARRAY_H
#define CPP07_ARRAY_H

#include <iostream>
#include <exception>

template <class T>
class Array
{
public:
    Array(void);
    Array(unsigned int);
    Array(const Array<T>&);
    ~Array();

    // Operators
    Array<T>& operator=(const Array<T>&);
    T& operator[](int32_t);

    uint32_t getSize(void) const;

    // Exceptions
    class OutOfBoundsException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Out of bounds");
        }
    };
private:
    T *_array;
    const uint32_t _size;
};


// Class Functions
template<class T>
Array<T>::Array(void) : _array(new T[0]), _size(0)
{
}

template<class T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template<class T>
Array<T>::Array(const Array<T>& ref) : _array(new T[ref._size]), _size(ref._size)
{
    *this = ref;
}

template<class T>
Array<T>::~Array(void)
{
    delete [] _array;
}

template<class T>
T& Array<T>::operator[](int32_t i)
{
    if (static_cast<uint32_t>(i) >= _size || i < 0)
        throw (OutOfBoundsException());
    return (_array[i]);
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& ref)
{
    if (&ref != this) {
        for (uint32_t i = 0; i < ref._size; i++)
            _array[i] = ref._array[i];
    }
    return (*this);
}

template<class T>
uint32_t Array<T>::getSize(void) const
{
    return (_size);
}


#endif //CPP07_ARRAY_H
