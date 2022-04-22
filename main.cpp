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
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    MapGeneric mapT; 
    b = mapT.map(a);

    cout << "mapped vector : ";

    for(int j=0; j < b.size(); j++)
    cout << a.at(j) << ' ';





    return 0;
}
