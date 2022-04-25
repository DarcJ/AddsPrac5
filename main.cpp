#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int s = 5;
    int x;
    vector<int> a;
    cout << "Enter Vector: ";
    for (int i = 0; i < s; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    
    
    FilterForTwoDigitPositive mapT; 
    vector<int> b(s);
    b = mapT.filter(a);

    cout << "mapped vector : ";

    for(int j=0; j < (b.size()); j++){
        cout << b[j] << ' ';

    }
    cout << endl;
    return 0;
}
