#include "ReduceGeneric.h"

ReduceGeneric::ReduceGeneric(/* args */)
{
}
int ReduceGeneric::binaryOperator(int a, int b){
    return a;
}
int ReduceGeneric::reduce(std::vector<int> v){

    std::vector<int> newV; // create new vector

    if(v.size() <= 2){ //Base case to return
        v[0]= binaryOperator(v[0], v[1]); //Map f onto first value of v
        v.pop_back();
        return v;
    }

    newV = v; // copy v onto temp vector
    v.pop_back(); // delete last value of 
    v = reduce(v); //recursively call map

    newV.back() = booleanOperator(newV.back()); // maps function onto last element of newV and puts it in last place of newV
    v.push_back(newV.back());// Adds last element of newV to v. 

    return v;
}
ReduceGeneric::~ReduceGeneric()
{
}
