#include <iostream>
using namespace std;
int main()
{
   int smaller,larger,temp;
   cout << "enter two ints: ";
   cin >> smaller >> larger;
   if (smaller > larger)
   {
      temp = larger;
      larger = smaller;
      smaller = temp;
   }
   cout << "smaller = " << smaller << endl;
   if (smaller % 2 == 0)
      cout << smaller << " is even\n";
   else
      cout << smaller << " is odd\n";
   if (smaller < 0)
      cout << smaller << " is negative\n";
   else if (smaller > 0)
      cout << smaller << " is positive\n";
   else
      cout << smaller << " is zero\n";
   cout << "larger = " << larger << endl;
   if (larger % 2 == 0)
      cout << larger << " is even\n";
   else
      cout << larger << " is odd\n";
   return 0;
}
