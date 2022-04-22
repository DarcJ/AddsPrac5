#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(-3);
    a.push_back(4);
    a.push_back(0);
    MapSquare mapT; 
    vector<int> b;
    b = mapT.map(a);

    cout << "mapped vector : ";

    for(int j=0; j < (b.size()); j++)
    cout << b.at(j) << ' ';





    return 0;
}
