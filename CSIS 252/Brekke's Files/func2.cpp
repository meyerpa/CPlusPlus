#include <iostream>
#include <string>
using namespace std;

void addbad(int x, int y)
{
   cout << x << '+' << y << '=' <<  x+y << endl;
}

int addgood(int x,int y)
{
   return x+y;
}

int main()
{
   int a=5,b=8,c=3,d=6;
   addbad(a,b);
   addbad(c,d);
   cout << addgood(a,b) << endl;
   cout << addgood(c,d) << endl;
   cout << addgood(addgood(a,b),addgood(c,d)) << endl;
   return 0;
}
