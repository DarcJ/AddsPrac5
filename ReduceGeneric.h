#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_HReduceGeneric
#include <vector>

class ReduceGeneric{        
    private:
       virtual int binaryOperator(int a, int b);
    public:
        ReduceGeneric();
        int reduce(std::vector<int> v);
        ~ReduceGeneric();

};

#endif