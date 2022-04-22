#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive(){

}
bool FilterNonPositive::g(int i){
    if (i <= 0)
    {
        return true;
    }
    else if (i > 0)
    {
        return false;
    }
    return true;
    
    

}
 FilterNonPositive::~FilterNonPositive(){

 }