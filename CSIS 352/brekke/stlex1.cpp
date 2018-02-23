#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v(10);
   for (int i=0; i<10; i++)
      v[i] = (i+1)*10;
   /*
   for (int i=0; i<10; i++)
      cout << v[i] << ' ';
   cout << endl;
   v.at(3) = 5;
   for (int i=0; i<10; i++)
      cout << v.at(i) << ' ';
   cout << endl;
   cout << "size: " << v.size() << endl;
   cout << "capacity: " << v.cap   /*
acity() << endl;
   cout << "max_size: " << v.max_size() << endl;
   v.push_back(556);
   for (int i=0; i<v.size(); i++)
      cout << v[i] << ' ';
   cout << endl;
   cout << "size: " << v.size() << endl;
   cout << "capacity: " << v.capacity() << endl;
   cout << "max_size: " << v.max_size() << endl;
   */
   vector<int>::iterator i;
   i=v.begin();
   while (i < v.end())
   {
      cout << *i << ' ';
      i++;
   }
   cout << endl;
   for (i=v.begin(); i!=v.end(); i++)
      cout << *i << ' ';
   cout << endl;
   return 0;
}