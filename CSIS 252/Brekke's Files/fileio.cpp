#include <iostream>  // not needed if no keyboard or screen
#include <fstream>
using namespace std;

int main()
{
   ifstream infile;
   ofstream outfile;
   int num1,num2,sum;

   infile.open("input");  // must exist
   infile >> num1;
   infile >> num2;
   infile.close();

   sum = num1+num2;

   outfile.open("output"); // creates or overwrites
   outfile << num1 << "+" << num2 << "=" << sum << endl;
   outfile.close();
   return 0;
}
