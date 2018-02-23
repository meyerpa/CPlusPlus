#include <iostream>
#include <list>
using namespace std;
int main()
{
   list<int> v;
   cout << "size: " << v.size() << endl;
   cout << "max_size: " << v.max_size() << endl;
   v.push_back(556);
   v.push_back(236);
   v.push_back(526);
   v.push_back(395);
   list<int>::iterator i;
//    i=v.begin();
//    while (i < v.end())
//    {
//       cout << *i << ' ';
//       i++;
//    }
//    cout << endl;
   for (i=v.begin(); i!=v.end(); i++)
      cout << *i << ' ';
   cout << endl;
   return 0;
}