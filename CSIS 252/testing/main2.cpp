// File:      main.cpp
// Author:    Dan Brekke

// unit test for setDate

#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"
using namespace std;
using namespace DateNameSpace;

int main()
{
   Date d1;
   int year=1999;
   for (int month=-1; month<14; month++)
      for (int day=-1; day<33; day++)
      {
         try
         {
            d1.setDate(month,day,year);
         }
         catch (DateException error)
         {
            cout << error.what() << "  " << month<<'/'<<day<<'/'<<year<< endl;
         }
      }    
      
/*
   // test all leapyears
   int day=29;
   int month=2;
   for (int year=1600; year<=2221; year++)
   {
      try
      {
         d1.setDate(month,day,year);
         cout << d1 << " is valid" << endl;
      }
      catch (DateException error)
      {
         cout << d1.getMonth() << '/' << d1.getDay() << '/' << year  
              << " is NOT valid" << endl;

      }
   }     
*/
      

   
   return 0;
}
