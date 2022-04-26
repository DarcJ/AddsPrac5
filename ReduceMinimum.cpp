#include "ReduceMinimum.h"
#include <iostream>
ReduceMinimum::ReduceMinimum()
{
}

int ReduceMinimum::binaryOperator(int a, int b){

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    if (a < b)
    {
        std::cout << "a < b: " << a << std::endl;
        return a;
    }
    if (b < a)
    {
        std::cout << "b < a: " << b << std::endl;
        return b;
    }
    if (b == a)
    {
        std::cout << "a = b: " << a << std::endl;
        return a;
    }

    std::cout << "Default: " << a << std::endl;
    return a; 
    
    
}

ReduceMinimum::~ReduceMinimum()
{
}
