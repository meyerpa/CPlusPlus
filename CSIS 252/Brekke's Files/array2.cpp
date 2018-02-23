#include <iostream>
using namespace std;
const int arraysize=5;
const int sentinel=-999;
int main()
{
   int numbers[arraysize];
   int count=0;
   cout << "enter ints, " << sentinel << " to quit: ";
   int num;
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
   cout << "Array: ";
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
   
   int biggest = numbers[0];
   for (int i=0; i<count; i++)
      if (numbers[i] > biggest)
         biggest = numbers[i];
   cout << "biggest is " << biggest << endl;
   
   bool found=false;
   int pos=0;
   int searchValue;
   cout << "enter a value to search for: ";
   cin >> searchValue;
   while (!found && pos<count)
   {
      if (numbers[pos] == searchValue)
         found = true;
      else
         pos++;
   }
   if (found)
      cout << searchValue << " found at " << pos << endl;
   else
      cout << searchValue << " not found\n";
   return 0;
}
