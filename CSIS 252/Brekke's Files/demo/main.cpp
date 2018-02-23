#include <iostream>
using namespace std;
#include "demo.h"

int main()
{
   demo var1;
   var1.setX(5);
   var1.setY(8);
   cout << var1.getX() << ' ' << var1.getY() << endl;
   demo var2(6,3);
   cout << var2.getX() << ' ' << var2.getY() << endl;
   return 0;
}

