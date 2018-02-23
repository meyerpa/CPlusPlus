#include <iostream>
using namespace std;

#include "arrayList2.h"
void output(arrayListType<int> list)
{
   int num;
   for (int i=0; i<list.listSize();i++)
   {
      list.retrieveAt(i,num);
      cout << num << ' ';
   }
   cout << endl;
}

void visit(int& num)
{
   cout << num << ' ';
}

void doubleit(int& num)
{
   num *= 2;
}

int main()
{
   arrayListType<int> list;
   list.insert(43);
   list.insert(17);
   list.insert(50);
   list.insert(37);
   list.insert(21);
   output(list);
   list.traversal(visit);
   cout << endl;
   list.traversal(doubleit);
   list.traversal(visit);
   cout << endl;
   return 0;
}
   
   