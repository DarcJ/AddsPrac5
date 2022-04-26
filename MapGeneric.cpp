#include "MapGeneric.h"
#include <iostream>

MapGeneric::MapGeneric()
{
}
int MapGeneric::f(int i){

    return i;
}
std::vector<int> MapGeneric::map(std::vector<int> v){

    std::vector<int> newV; // create new vector

    if(v.size() <= 1){ //Base case to return
        v[0]= f(v[0]); //Map f onto first value of v
        return v;
    }

    newV = v; // copy v onto temp vector
    v.pop_back(); // delete last value of 
    v = map(v); //recursively call map

    newV.back() = f(newV.back()); // maps function onto last element of newV and puts it in last place of newV
    v.push_back(newV.back());// Adds last element of newV to v. 

    return v;

}

MapGeneric::~MapGeneric()
{
}
