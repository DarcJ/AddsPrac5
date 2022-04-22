#ifndef FILTERODD_H
#define FILTERODD_H

#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric{
    private:

    public:
    FilterOdd();
    bool g(int i);
    ~FilterOdd();

};

#endif