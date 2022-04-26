#include "ReduceGeneric.h"
#include <iostream>

ReduceGeneric::ReduceGeneric()
{
}
int ReduceGeneric::binaryOperator(int a, int b){
    return a;
}
int ReduceGeneric::reduce(std::vector<int> v){

    std::vector<int> newV; // create new vector
    int r;

    if(v.size() <= 1){ //Base case to return
        r = v[0];
        return r;
    }

    r = binaryOperator(v[v.size()-2], v.back());
    v.pop_back(); // delete last value of 
    v.pop_back();
    v.push_back(r);
 
    r = reduce(v); //recursively call mapu
    return r;
}
ReduceGeneric::~ReduceGeneric()
{
}
