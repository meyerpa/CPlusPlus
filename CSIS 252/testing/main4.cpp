// File:      main.cpp
// Author:    Dan Brekke

// unit test for ++ and --

#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"
using namespace std;
using namespace DateNameSpace;

int main()
{
   Date d1;
   int month = 12;
   int day = 31;
   int year = 1899;
   d1.setDate(month,day,year);
   for (int i=1; i<=366; i++)
   {
      cout << d1 << endl;
      d1++;
   }
   cout << "final date: " << d1 << endl;
   cout << "-----------------------\n";
   for (int i=1; i<=366; i++)
   {
      cout << d1 << endl;
      d1--;
   }
   cout << "final date: " << d1 << endl;

/*

   // test for pre ++
   d1.setToday();
   cout << "-----------------\n";
   Date d2;
   for (int i=1; i<=366; i++)
   {
      d2 = ++d1;
      if ( !( d2.getMonth()==d1.getMonth() && 
              d2.getDay()==d1.getDay() &&
              d2.getYear()==d1.getYear() )
         )
         cout << "error:  d1=" << d1 << "  d2=" << d2 << endl;
   }

   // test for post ++
   d1.setToday();
   cout << "-----------------\n";
   for (int i=1; i<=366; i++)
   {
      d2 = d1++;
      d2++;
      if ( !( d2.getMonth()==d1.getMonth() && 
              d2.getDay()==d1.getDay() &&
              d2.getYear()==d1.getYear() )
         )
         cout << "error:  d1=" << d1 << "  d2=" << d2 << endl;
   }

   // test for pre --
   // test for post --

*/

   return 0;
}
