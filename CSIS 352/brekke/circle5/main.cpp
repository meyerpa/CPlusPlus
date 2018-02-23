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
   float r;
   Circle c1;
   cout << "enter radius for a circle: ";
   cin >> r;
   c1.setRadius(r);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c1.radius() << endl;

   cout << "enter radius for another circle: ";
   cin >> r;
   Circle c2(r);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c2.radius() << endl;

   if (c1==c2)
      cout << "they're equal\n";
   else
      cout << "they're NOT equal\n";
   if (c1!=c2)
      cout << "they're NOT equal\n";
   else
      cout << "they're equal\n";
   
   Circle c3;
   c3=c1+c2;
   cout << c3.radius() << endl;
   cout << "the radius of c1 is " << c1 << ", and c2 is " << c2 << endl;
   c3=7;
   cout << c3.radius() << endl;
//   c3+=4; overload +=(double)
//   c3+=c2; work because c2 would be convert to a double
   return 0;
}
