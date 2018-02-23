#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
   char ch;
   stack<char> s;
   queue<char> q;
   cout << "enter a string: ";
   cin.get(ch);
   while (ch != '\n')
   {
      ch = toupper(ch);
      if (ch>='A' && ch<='Z')
      {
         s.push(ch);
         q.push(ch);
      }
      cin.get(ch);
   }
   cout << endl;
   bool isPalindrome = true;
   while (!s.empty() && isPalindrome)
   {
      isPalindrome = s.top() == q.front();
      s.pop();
      q.pop();
   }
   cout << endl;
   if (isPalindrome)
      cout << "it is a palindrome\n";
   else
      cout << "it is not a palindrome\n";
   return 0;
}
   
