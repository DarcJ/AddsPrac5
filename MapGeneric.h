#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>

class MapGeneric{
    private:

    public:
    MapGeneric();
    int n;
    virtual int f(int i);
    std::vector<int> map(std::vector<int> v);
    ~MapGeneric();

};

#endif