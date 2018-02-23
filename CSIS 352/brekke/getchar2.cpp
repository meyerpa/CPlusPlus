#include <iostream>
#include <stack>
using namespace std;
int main()
{
   char ch;
   stack<char> s;
   cout << "enter a string: ";
   cin.get(ch);
   while (ch != '\n')
   {
      ch = toupper(ch);
      if (ch>='A' && ch<='Z')
      {
         s.push(ch);
         cout << ch;
      }
      cin.get(ch);
   }
   cout << endl;
   while (!s.empty())
   {
      cout << s.top();
      s.pop();
   }
   cout << endl;
}
   
