#include <iostream>
using namespace std;
#include "constants.h"
#include "prototypes.h"

int main()
{
   int numbers[arraysize];
   int count;
   read(numbers,count);
   output(numbers,count);
   output(numbers,count);
   output(numbers,count);
   cout << "the biggest is " << biggest(numbers,count) << endl;
   
   int searchValue;
   cout << "enter a value to search for: ";
   cin >> searchValue;
   int position = search(numbers,count,searchValue);
   if (position >= 0)
      cout << searchValue << " found at position " << position << endl;
   else
      cout << searchValue << " not found\n";
   
   return 0;
}

