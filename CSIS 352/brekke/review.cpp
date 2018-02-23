#include <iostream>
using namespace std;

int main()
{
   for (int i=1; i<=10; i++)
      cout << i << " ";
   cout << endl;

   int num=1;
   while (num <= 10)
   {
      cout << num << ' ';
      num++;
   }
   cout << endl;

   num = 1;
   do
   {
      cout << num << ' ';
      ++num;
   }
   while (num <=10);      
   cout << endl;

   for (int i=1; i<=10; i++)
      if (i % 2 == 1)
        cout << i << " ";
      else
         cout << "* ";
   cout << endl; 

   for (int i=1; i<=10; i++)
      switch (i)
      {
         case 1 : cout << "one\n"; break;
         case 2 : cout << "two\n"; break;
         case 3 : cout << "three\n"; break;
         default: cout << "*\n";
      }
   cout << endl;

   for (int i=1; i<=10; i++)
      switch (i)
      {
         case 1 : 
         case 2 : 
         case 3 : cout << "X\n"; break;
         default: cout << "*\n";
      }
   return 0;
}
