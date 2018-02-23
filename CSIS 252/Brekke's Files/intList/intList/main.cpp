#include <iostream>
using namespace std;
#include "orderedList.h"

void read(orderedList<int>& list)
{
   int num;
   cout << "enter ints, 0 to quit\n";
   cin >> num;
   while (num!=0 && !list.isFull())
   {
      list.insert(num);
      cin >> num;
   }
}

int main()
{
   int num;
   orderedList<int> list(5);
   read(list);
   cout << "list contents\n";
   list.print();
   int sum = 0;
   for (int i=0; i<list.listSize(); i++)
   {
      list.retrieveAt(i,num);
      sum += num;
   }
   cout << "the sum is " << sum << endl;
   return 0;
}

