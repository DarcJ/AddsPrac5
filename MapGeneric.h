#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>

class MapGeneric{
    private:
    int mapped; 
    virtual int f(int i);

    public:
    MapGeneric();
    vector<int> map(vector<int> v);
    ~MapGeneric();

};

#endif