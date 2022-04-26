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
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int s = 5;
    char x[s*2];
    int k;
    vector<int> a;
    cout << "Enter Vector: ";
    cin>>x;
    char *z;
    z = strtok(x, ",");
    while (z != NULL)
    {
       k = atoi(z);
       a.push_back(k);
       z = strtok(NULL, ","); 
    }
    
    MapTriple mapT; 
    vector<int> b(s);
    b = mapT.map(a);

    cout << "mapped vector : ";

    for(int j=0; j < (b.size()); j++){
        cout << b[j] << ' ';

    }
    cout << endl;
    return 0;
}
