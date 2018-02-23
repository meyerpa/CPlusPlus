#include <iostream>  // not needed if no keyboard or screen
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   ifstream infile;
   ofstream outfile;
   int num,sum=0,count=0;
   double average;

   infile.open("input");  // must exist
   infile >> num;
   while (!infile.eof())
   {
      sum += num;
      count++;
      infile >> num;
   }
   infile.close();

   average = static_cast<double>(sum)/count;
   
   outfile.open("output"); // creates or overwrites
   outfile << fixed << showpoint << setprecision(2);
   outfile << "the count is " << count << endl;
   outfile << "the sum is " << sum << endl;
   outfile << "the average is " << average << endl;
   outfile.close();
   return 0;
}
