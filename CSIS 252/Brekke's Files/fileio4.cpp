#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void output(ostream& output,const int numbers[],int count)
{
   for (int i=0; i<count; i++)
      output << numbers[i] << ' ';
   output << endl;
}

void outputResults(const int numbers[],int count)
{
   ofstream outfile;
   char filename[] = "file3";
   outfile.open(filename); // filename must be a C string
   outfile << "some stuff before the array is output\n";
   output(outfile,numbers,count);
   outfile << "some stuff after the array is output\n";
   outfile.close();
}


int main()
{
   int numbers[]={5,3,7,9,6};
   outputResults(numbers,5);
   return 0;
}

