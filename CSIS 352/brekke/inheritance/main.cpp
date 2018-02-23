#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

int main()
{
   Base b1(5);
   Derived d1(3,6);
   cout << b1.getX() << endl;
   cout << d1.getX() << ' ' << d1.getY() << endl;
   cout << "--------------\n";
   b1.print();
   cout << "--------------\n";
   d1.print();
   return 0;
}
