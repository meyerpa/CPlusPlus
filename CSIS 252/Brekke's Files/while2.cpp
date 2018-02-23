// THIS IS A GOOD EXAMPLE.
#include <iostream>
using namespace std;
const int sentinel = -999;
int main()
{
   int num;
   int sum=0;
   int count = 0;
   cout << "enter ints, " << sentinel << " to quit: ";
   cin >> num;
   while (num != sentinel)
   {
      sum = sum+num;
      count++;
      cin >> num;
   }
   // debugging output
//    cout << "sum = " << sum << endl;
//    cout << "count = " << count << endl;
   cout << "the average is " << static_cast<double>(sum)/count << endl;
   return 0;
}
