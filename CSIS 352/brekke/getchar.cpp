#include <iostream>
using namespace std;
int main()
{
   char ch;
   cout << "enter a string: ";
   cin.get(ch);
   while (ch != '\n')
   {
      ch = toupper(ch);
      if (ch>='A' && ch<='Z')
      {
         cout << ch;
      }
      cin.get(ch);
   }
   cout << endl;
}
   
