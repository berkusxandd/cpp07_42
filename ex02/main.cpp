#include <iostream>
#include "Array.hpp"
int main()
{
    Array<int> arr(1000);
    Array<int> arrCpy0(arr);
    Array<int> arrCpy1;
    arrCpy1 = arr;

    std::cout << "Array's size : " << arr.size() << std::endl;
    std::cout << "Copy Overload Array's size : " << arrCpy1.size() << std::endl;
    std::cout << "Copy Array's size : " << arrCpy0.size() << std::endl << std::endl;
    for (int i = 0; i < arr.size(); i++)
        arr[i] = i;
    for (int i = 0; i < arr.size(); i++)
        std::cout << "Original Array: " << arr[i]  << std::endl << "Copy Overload Array : " << arrCpy1[i] << std::endl << "Copy Array: " << arrCpy0[i] << std::endl << std::endl;

    try
    {
        arr[arr.size() + 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<char> strArr(10);
    
    for (int i = 33; i < 43; i++)
    {
        strArr[i - 33] = i;
        std::cout << strArr[i - 33] << std::endl;
    }
}