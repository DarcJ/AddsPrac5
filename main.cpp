#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <vector>
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int s = 20;
    char x[s*2];
    char *z;
    char *y;
    int k;
    vector<int> a;
    cout << "Enter Vector: ";
    cin>>x;
    //y = strtok(x, " ");
    z = strtok(y, ",");
    while (z != NULL)
    {
       k = atoi(z);
       a.push_back(k);
       z = strtok(NULL, ","); 
    }

    vector<int> b(s);
    vector<int> c(s);
    vector<int> d(s);
    vector<int> e(s);
    int f;
    int g;
    

    //Mapping
    MapAbsoluteValue mapA;
    b = mapA.map(a);
    MapTriple mapB;
    c = mapB.map(b);

    //Filtering
    FilterForTwoDigitPositive filterC;
    d = filterC.filter(c);
    FilterOdd filterD;
    e = filterD.filter(d);

    //Reducing
    ReduceMinimum reduceM;
    f = reduceM.reduce(e);
    ReduceGCD reduceGCD;
    g = reduceGCD.reduce(e);

    cout << f << " " << g << endl;

    return 0;
}
