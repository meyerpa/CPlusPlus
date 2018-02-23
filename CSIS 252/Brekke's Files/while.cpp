// THIS IS A HORRIBLE EXAMPLE.  I'M ASHAMED THAT I DID IT
// EVEN THOUGH IT WORKS.
#include <iostream>
using namespace std;
const int sentinel = -999;
int main()
{
   int num;
   int sum=0;
   int count = 0;
   cout << "enter ints, " << sentinel << " to quit: ";
   num=498576; // THIS IS BAD.  IT'S A PATCH TO GET INTO THE LOOP
   while (num != sentinel)
   {
      cin >> num;
      sum = sum+num;
      count++;
   }
   count--; // THIS IS BAD.  IT'S A PATCH
   sum = sum-num;  // THIS IS BAD.  IT'S A PATCH
   // debugging output
   cout << "sum = " << sum << endl;
   cout << "count = " << count << endl;
   cout << "the average is " << static_cast<double>(sum)/count << endl;
   return 0;
}
