#include "FilterGeneric.h"
#include <iostream>

FilterGeneric::FilterGeneric()
{
}

bool FilterGeneric::g(int i){
    return false;
}

std::vector<int> FilterGeneric::filter(std::vector<int> v) {

    std::vector<int> newV; // create new vector
   
    if(v.size() <= 1){ //Base case to return
        if (g(v[0]) == true)
        {
            v[0] = v[0];
        }
        else if (g(v[0])== false)
        {
            v.erase(v.begin());
        }
        return v;
    }

    newV  = v;

    v.pop_back();
    v = filter(v);

    if (g(newV.back()) == true)
    {
        v.push_back(newV.back());
    }
    
    return v;

}

FilterGeneric::~FilterGeneric()
{
}
