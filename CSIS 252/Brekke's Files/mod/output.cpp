#include <iostream>
using namespace std;

void output(const int numbers[],int count)
{
   cout << "Array: ";
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
}

