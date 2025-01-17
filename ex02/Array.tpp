#ifndef ARRAY_TPP
#define ARRAY_TPP


#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->_arr = new T[0];
    this->_size = 0;
}
template <typename T>
Array<T>::~Array()
{
    delete [] this->_arr;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_arr = new T[n];
    for (int i = 0; i < (int)n; i++)
        this->_arr[i] = 0;
    this->_size = n;
}

template <typename T>
Array<T>::Array(Array const &src)
{
    this->_arr = new T[src._size];
    this->_size = src._size;      
    for (int i = 0; i < src._size; ++i)
        this->_arr[i] = src._arr[i]; 
}
template <typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        if (this->_arr)
            delete [] this->_arr;
        this->_arr = new T[rhs.size()];
        for (int i = 0; i < rhs.size(); i++)
            this->_arr[i] = rhs._arr[i];
        this->_size = rhs.size();
    }
    return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int n)
{
    if ((int)n > this->_size - 1)
        throw Array::OutOfBoundsException();
    return (this->_arr[n]);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
    return ("Segfault :O");
}

template <typename T>
int Array<T>::size() const
{
    return (this->_size);
}

#endif