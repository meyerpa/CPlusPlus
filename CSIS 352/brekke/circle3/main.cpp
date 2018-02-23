// File:     main.cpp
// Author:   Dan Brekke

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

int main()
{
   cout << showpoint << fixed << setprecision(2);
   Circle c1(3);
   Circle c2;
   Circle c3;
   c2 = c1;
   cout << c2 << endl;
   c1 = c2 = c3 = 5;
   Circle::setValue(DIAMETER);
   cout << c1 << endl;
   Circle::setValue(AREA);
   cout << c2 << endl;
   Circle::setValue(CIRCUMFERENCE);
   cout << c3 << endl;
   return 0;
}
