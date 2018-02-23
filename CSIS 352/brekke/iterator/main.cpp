#include <iostream>
using namespace std;
#include "list.h"
using namespace ListNameSpace;

int main()
{
   List<int> list(10);
   list.add(10);
   list.add(20);
   list.add(30);

   List<int>::iterator p;

   for (p=list.begin(); p!=list.end(); p++)
      cout << *p << ' ';
   cout << endl;

   p = list.begin();
   while (p != list.end())
      cout << *p++ << ' ';
   cout << endl;
   
   p = list.begin();
   p = p+2;
   cout << *p << endl;
   p = p-2;
   cout << *p << endl;
   
   return 0;
}
