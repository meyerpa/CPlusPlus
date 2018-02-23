#include <iostream>
using namespace std;

struct example
{
   int i;
   char c;
   double d;
};

int main()
{
   example x;
   x.i =12;
   x.c = 'T';
   x.d =23.432;
   cout << x.i << endl;
   cout << x.c << endl;
   cout << x.d << endl;
   example array[10];
   for (int i=0; i<10; i++)
   {
      array[i].i = 0;
      array[i].c = 'T';
      array[i].d = 0;
   }
   return 0;
}
