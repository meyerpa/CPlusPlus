#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main()
{
   vector<int> numbers1;
   numbers1.resize(10);
   for (int i=0; i<10; i++)
      numbers1[i] = (i+1)*10;
   for (int i=0; i<10; i++)
      cout << numbers1[i] << ' ';
   cout << endl;
   for (int i=0; i<10; i++)
      cout << numbers1.at(i) << ' ';
   cout << endl;
   vector<int>::iterator p1;
   for (p1=numbers1.begin(); p1<numbers1.end(); p1++)
      cout << *p1 << ' ';
   cout << endl;
   numbers1.push_back(110);
   for (p1=numbers1.begin(); p1<numbers1.end(); p1++)
      cout << *p1 << ' ';
//    numbers1.push_front(0);
   cout << endl;
   cout << endl;
   
   
   
   list<int> numbers2;
   for (int i=0; i<10; i++)
      numbers2.push_back( (i+1)*10 );
   list<int>::iterator p2;
   for (p2=numbers2.begin(); p2!=numbers2.end(); p2++)
      cout << *p2 << ' ';
   cout << endl;
   numbers2.push_back(110);
   for (p2=numbers2.begin(); p2!=numbers2.end(); p2++)
      cout << *p2 << ' ';
   cout << endl;
   numbers2.push_front(0);
   for (p2=numbers2.begin(); p2!=numbers2.end(); p2++)
      cout << *p2 << ' ';
   cout << endl;
  
   return 0;
}

   