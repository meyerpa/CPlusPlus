// File:      main.cpp
// Author:    Dan Brekke

// unit test for addDay and subDay
// addDay and subDay are used for ++ and --

#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"
using namespace std;
using namespace DateNameSpace;

const int iterations = 10000;

int main()
{
   Date d1;
   cout << d1 << endl; 
   for (int i = 0; i < iterations; i++)
      d1.addDay();
   cout << d1 << endl;
   for (int i = 0; i < iterations; i++)
      d1.subDay();
   cout << d1 << endl;
   
/*
   // above doesn't let us see the individual dates
   cout << "-----------------------\n";
   int month = 12;
   int day = 31;
   int year = 1899;
   d1.setDate(month,day,year);
   for (int i=1; i<=366; i++)
   {
      cout << d1 << endl;
      d1.addDay();
   }
   cout << "final date: " << d1 << endl;
   cout << "-----------------------\n";
   for (int i=1; i<=366; i++)
   {
      cout << d1 << endl;
      d1.subDay();
   }
   cout << "final date: " << d1 << endl;
*/
  
   return 0;
}
