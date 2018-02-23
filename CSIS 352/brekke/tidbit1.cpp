#include <iostream>
using namespace std;

int main()
{
   int num = 1;
   for (int i=0; i<10; i++)
      cout << num << ' ' << num++ << endl;
   return 0;
}

