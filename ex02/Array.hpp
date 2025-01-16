#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        Array & operator = (Array const &rhs);
        T operator[](int n);
        ~Array();
    private:
        T *_arr;
        int _size

    class OutOfBoundsException : public std::exception
    {
        public:
            virtual const char * what() const throw();
    };
};

#endif