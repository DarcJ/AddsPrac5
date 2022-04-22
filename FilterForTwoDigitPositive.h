#ifndef FILTERFORTWODIGITPOSITIVE_H#include 
#define FILTERFORTWODIGITPOSITIVE_HFilterForTwoDigitPositive
#include "FilterGeneric.h"
class FilterForTwoDigitPositive : public FilterGeneric{
    private:

    public:
    FilterForTwoDigitPositive();
    bool g(int i);
    ~FilterForTwoDigitPositive();
};

#endif