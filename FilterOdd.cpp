#include "FilterOdd.h"

FilterOdd::FilterOdd()
{
}

bool FilterOdd::g(int i){
    if (i % 2 == 0)
    {
        return false;
    }
    else if (i % 2 != 0)
    {
        return true;
    }
    
    return true; 
    
    
}

FilterOdd::~FilterOdd()
{
}

