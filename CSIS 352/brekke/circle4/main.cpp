// File:     main.cpp
// Author:   Dan Brekke

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;
using namespace CircleNameSpace;

int main()
{
   cout << showpoint << fixed << setprecision(2);
   Circle c1(3);
   Circle c2(4);
   Circle c3(5);
   Circle c4;
   cout << c1 << endl;
   cout << c2 << endl;
   cout << c3 << endl;
   c3 += c2;
   cout << c3 << endl;
   c1 = c2 += c3;
   cout << c1 << endl;
   cout << c2 << endl;
   cout << c3 << endl;
   c3 += 5;
   cout << c3 << endl;
   ++c3;
   cout << c3 << endl;
   c2 = ++c3;
   cout << c2 << endl;
   cout << c3 << endl;
   c2 = c3++;
   cout << c2 << endl;
   cout << c3 << endl;
   return 0;
}
