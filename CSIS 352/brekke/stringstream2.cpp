#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
   cout << "123456789012345678901234567890\n";
   int month = 2, day = 9, year = 2016;
   cout << setw(20) << left << month << '/'
        << day << '/' << year << endl;
   stringstream s;
   s << month << '/' << day << '/' << year;
   cout << setw(20) << left << s.str() << '*' << endl;
   
   return 0;
}
