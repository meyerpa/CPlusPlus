#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;
   int age;
   char tempchar;
   cout << "enter your age: ";
   cin >> age;
// we need to discard the end-of-line char before using getline below
//   cin >> tempchar; doesn't work because it skips whitespace
/* this loop works the same as the cin.ignore
   do
      cin.get(tempchar);
   while (tempchar != '\n');
*/
   cin.ignore(80,'\n');
   cout << "enter your name: ";
   getline(cin,name); 
   cout << "your name is " << name << " and you are "
        << age << " years old.\n";
   return 0;
}