#include <iostream>
using namespace std;

int main()
{
   int num;
   do
   {
      cout << "enter a number from 1 to 10: ";
      cin >> num;
   }
   while (num < 1 || num > 10);
   cout << "you entered " << num << endl;
   return 0;
}