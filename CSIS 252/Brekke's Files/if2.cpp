#include <iostream>
using namespace std;
int main()
{
   int num;
   cout << "enter an int: ";
   cin >> num;
//    if (-9 <= num <= 9)  doesn't work
   if (-9 <= num && num <= 9)
      cout << num << " is a single digit number\n";
   else
      cout << num << " is NOT a single digit number\n";
   cout << "true is " << true << endl;
   cout << "false is " << false << endl;
   return 0;
}
