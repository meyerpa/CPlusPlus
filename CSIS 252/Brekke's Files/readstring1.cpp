#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;
   int age;
   cout << "enter your name: ";
//   cin >> name;  only reads until whitespace
   getline(cin,name);  // reads an entire line
   cout << "enter your age: ";
   cin >> age;
   cout << "your name is " << name << " and you are "
        << age << " years old.\n";
   return 0;
}