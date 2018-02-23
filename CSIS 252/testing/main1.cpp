// File:      main.cpp
// Author:    Dan Brekke

// unit test for leapyear

#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"
using namespace std;
using namespace DateNameSpace;

bool leapyear(int year);

int main()
{
   // unit test for leapyear
   for (int year = 1600; year <= 2200; year++)
      if (leapyear(year))
         cout << year << " is a leap year\n";
   return 0;
}
