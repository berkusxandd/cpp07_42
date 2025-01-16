#include "iter.hpp"
#include <iostream>
template <typename T> 
void printValue(T &val)
{
    std::cout << val << std::endl;
}

int main()
{
    int arr[6] = {0,1,2,3,4,5};
    char str[10] = {'a','b','c','d','e','f','g','h','i','j'};

    iter(arr, 6,printValue); 
    iter(str, 10,printValue); 
}
