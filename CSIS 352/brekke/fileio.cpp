#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

   int num;
   int sum=0;
   int count=0;
   ifstream in;
   ofstream out;
   in.open("data");
   in >> num;
   while (!in.eof())
   {
      sum += num;
      count++;
      in >> num;
   }
   in.close();
   out.open("result");
   cerr << "count is " << count << endl;
   cerr << "sum is " << sum << endl;
   out << "the average is " << static_cast<double>(sum)/count << endl;
   out.close();
   return 0;
}
