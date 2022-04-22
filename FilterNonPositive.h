#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H

#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric{
    private:

    public:
    FilterNonPositive();
    bool g(int i);
    ~FilterNonPositive();


};

#endif