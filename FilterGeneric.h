#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H 

#include <vector>


class FilterGeneric{
    private:
    virtual bool g(int i);

    public:
    FilterGeneric();
    std::vector<int> filter(std::vector<int>);
    ~FilterGeneric();


};

#endif