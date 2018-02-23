#include <iostream>
//using namespace std;
using std::cout;

int main()
{
   int cin = 27;
   cout << cin << std::endl;
   int num = 2;
   cout << num << std::endl;
   cin >> num;
   cout << num << std::endl;
   cout << (cin >> num) << std::endl; // from C, >> is a bit shift right
   std::cin >> num;
   cout << num << std::endl;
   return 0;
}
