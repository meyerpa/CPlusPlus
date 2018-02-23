#include <iostream>
using namespace std;
const int arraysize=5;
const int sentinel=-999;
int main()
{
   int numbers[arraysize];
   int count=0;
   cout << "enter ints, " << sentinel << " to quit: ";
// DON'T READ DIRECTLY INTO AN ARRAY
//    cin >> numbers[count]; 
//    while (numbers[count] != sentinel && count < arraysize)
//    {
//       count++;
//       cin >> numbers[count];
//    }
//    cout << "count is " << count << endl;
   int num;
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
   for (int i=count; i>0; i--)
      cout << numbers[i-1] << ' ';
   cout << endl;
// ANY EXTRA INPUT REMAINS IN THE INPUT BUFFER
//    int age;
//    cout << "how old are you? ";
//    cin >> age;
//    cout << "you are " << age << " years old\n";
   return 0;
}
