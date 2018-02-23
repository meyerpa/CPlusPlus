// File:     main.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

/*
// Below works but it should be in the Circle class
bool operator==(const Circle& lhs,const Circle& rhs)
{
   return lhs.radius() == rhs.radius();
//    if (lhs.radius() == rhs.radius())
//       return true;
//    else
//       return false;
}
*/ 

int main()
{
   cout << showpoint << fixed << setprecision(2);
   float r;
   Circle c1;
   cout << "enter radius for a circle: ";
   cin >> c1;

   cout << "enter radius for another circle: ";
   cin >> r;
   Circle c2(r);
   
   if (c1 <= c2)
      cout << "c1 is <= to c2\n";
   else
      cout << "c1 is NOT <= to c2\n";
   
   cout << "area: " << c1 << endl << "area: " << c2 << endl;
   return 0;
}
