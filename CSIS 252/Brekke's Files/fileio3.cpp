#include <iostream>
#include <fstream>
using namespace std;

void output(ostream& output,int numbers[],int count)
{
   for (int i=0; i<count; i++)
      output << numbers[i] << ' ';
   output << endl;
}

int main()
{
   ofstream one,two;
   one.open("file1");
   two.open("file2");
   int numbers[]={5,3,7,9,6};
   output(cout,numbers,5);
   output(one,numbers,5);
   output(two,numbers,5);
   one.close();
   two.close();
   return 0;
}

