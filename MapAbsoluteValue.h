#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

#include "MapGeneric.h"
#include <stdlib.h>

class MapAbsoluteValue : public MapGeneric
{
private:
    
    int f(int);
public:
    MapAbsoluteValue();
    ~MapAbsoluteValue();
};

#endif
