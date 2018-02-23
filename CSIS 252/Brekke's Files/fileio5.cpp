#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
   ifstream infile;
   char filename[] = "namefile";
   infile.open(filename);
   string name;
   int age;
   getline(infile,name);
   while (!infile.eof())
   {
      infile >> age;
      infile.ignore(80,'\n');
      cout << name << " is " << age << " years old\n";
      getline(infile,name);
   }
   infile.close();
   return 0;
}

