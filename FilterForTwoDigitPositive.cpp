#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{
}

bool FilterForTwoDigitPositive::g(int i){
    if ((i >= 10) && (i <= 99))
    {
        if (i > 0)
        {
            return true;
        }
        else if (i <=0)
        {
            return false;
        }

        return false;  
    }
    return false;
    
}

FilterForTwoDigitPositive::~FilterForTwoDigitPositive()
{
}
