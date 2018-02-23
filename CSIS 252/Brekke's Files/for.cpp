#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "how many times do you want to loop? ";
   cin >> n;
   for (int i=0; i<n; i++)
      cout << i << endl;
//    cout << i << endl;  i is out of scope
   return 0;
}