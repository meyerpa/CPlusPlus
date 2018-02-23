#include <iostream>
using namespace std;
const int arraysize=5;
int main()
{
   int numbers[arraysize];
   for (int i=0; i<arraysize; i++)
      numbers[i] = (i+1)*10;
   for (int i=0; i<arraysize; i++)
      cout << numbers[i] << endl;
   cout << "-------------\n";
   cout << numbers[-5] << endl;
   for (int i=100000; i<100010; i++)
      cout << numbers[i] << endl;
   return 0;
}
