#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int s = 3;
    int x;
    vector<int> a;
    cout << "Enter Vector: ";
    for (int i = 0; i < s; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    
    
    MapAbsoluteValue mapT; 
    vector<int> b(s);
    b = mapT.map(a);

    cout << "mapped vector : ";

    for(int j=0; j < (b.size()); j++){
        cout << b[j] << ' ';

    }
    cout << endl;
    return 0;
}
