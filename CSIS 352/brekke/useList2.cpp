#include <iostream>
using namespace std;

#include "linkedList.h"

/*
void visit(int& num)
{
   cout << num << ' ';
}

void doubleit(int& num)
{
   num *= 2;
}
*/

int main()
{
   linkedListType<int> list;
   list.insertLast(43);
   list.insertLast(17);
   list.insertLast(50);
   list.insertLast(37);
   list.insertLast(21);
   list.print();
   cout << endl;
/*
   list.traversal(visit);
   cout << endl;
   list.traversal(doubleit);
   list.traversal(visit);
   cout << endl;
*/
   return 0;
}
   
   