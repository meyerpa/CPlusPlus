#include <iostream>
using namespace std;

// & makes it pass by reference
void swap(int& x,int& y)
{
   int temp;
   temp = x;
   x = y;
   y = temp;
}

int main()
{
   int a = 7;
   int b = 3;
   cout << "a = " << a
        << "   b = " << b << endl;
   swap(a,b);
   cout << "a = " << a
        << "   b = " << b << endl;
   return 0;
}
