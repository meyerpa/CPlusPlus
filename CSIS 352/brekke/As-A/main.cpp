#include <iostream>
using namespace std;
#include "stack.h"

int main()
{
   stack<int> s;
   s.push(34);
   s.push(65);
   s.push(23);
   s.push(92);
   s.push(59);
   while (!s.empty())
   {
      cout << s.top() << ' ';
      s.pop();
   }
   cout << endl;
   
   return 0;
}

   