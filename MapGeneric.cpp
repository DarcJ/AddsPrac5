#include "MapGeneric.h"


MapGeneric::MapGeneric()
{
    n = 0;
}
std::vector<int> map(std::vector<int> v){

    if ( n > (v.size()+1))
    {
        return v;
    }
    
    v[n] = f(v.at(n));
    n++;
    map(v);

}

MapGeneric::~MapGeneric()
{
}
