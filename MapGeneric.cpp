#include "MapGeneric.h"


MapGeneric::MapGeneric()
{
    n = 0;
}
int MapGeneric::f(int i){

    return 0;
}
std::vector<int> MapGeneric::map(std::vector<int> v){

    if ( n >= (v.size()))
    {
        return v;
    }

    v[n] = f(v.at(n));
    n++;
    return map(v);


}

MapGeneric::~MapGeneric()
{
}
