#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>

class MapGeneric{
    private:
    int n;
    virtual int f(int i);

    public:
    MapGeneric();
    std::vector<int> map(std::vector<int> v);
    ~MapGeneric();

};

#endif