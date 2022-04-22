#include "ReduceMinimum.h"
ReduceMinimum::ReduceMinimum()
{
}

int ReduceMinimum::binaryOperator(int a, int b){

    if (a < b)
    {
        return a;
    }
    if (b < a)
    {
        return b;
    }
    if (b = a)
    {
        return a;
    }

    return 1; 
    
    
}

ReduceMinimum::~ReduceMinimum()
{
}
