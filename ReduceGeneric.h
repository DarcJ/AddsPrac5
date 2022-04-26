#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
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