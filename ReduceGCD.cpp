#include "ReduceGCD.h"
ReduceGCD::ReduceGCD(/* args */)
{
}

int ReduceGCD::binaryOperator(int a, int b){
    if (b == 0){
        return a;
    }
    return binaryOperator(b, a % b);

}

ReduceGCD::~ReduceGCD()
{
}
