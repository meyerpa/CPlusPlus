// File:      main.cpp
// Author:    Dan Brekke

// unit test for operator== and operator<

#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"
using namespace std;
using namespace DateNameSpace;

bool leapyear(int year);

int main()
{

   // test operator==
   Date d1(1,1,1900);
   Date d2(1,1,1900);
   for (int i=0; i<100000; i++)
   {
      d1++;
      d2++;
      if (!(d1==d2))
         cout << "operator== is incorrect\n";
   }
   cout << "d1 = " << d1 << endl;
   cout << "d2 = " << d2 << endl;
   if (d1 == d2)
      cout << "operator== is correct\n";
         
/*
   // test operator<
   d1.setDate(1,1,600);
   d2.setDate(1,1,2600);
   while (d1 < d2)
   {
      if (d1 == d2)
         cout << "operator< is incorrect\n";
      d1++;
   }
   cout << d1 << endl;
   cout << d2 << endl;
   if (d1 == d2)
      cout << "operator< is correct\n";

   
   // complete test for operator<
   for (int i=0; i<100000; i++)
   {
      if (d1<d2)
         cout << "operator< is incorrect\n";
      d1++;
   }
*/

   return 0;
}
