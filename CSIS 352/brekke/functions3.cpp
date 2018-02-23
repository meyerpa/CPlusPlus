#include <iostream>
using namespace std;

const int arraysize=5;
const int sentinel=-999;

// function prototypes
void read(int numbers[], int& count);
void output(int numbers[],int count); 

int main()
{
   int numbers[arraysize];
   int count;

// actual parameters have no reference to their type
// just use the name of the variable
   read(numbers,count);
   output(numbers,count);
   
   return 0;
}

// formal parameters have the type associated with it
// arrays do not need the size (compiler ignores it)
// arrays are automatically pass by reference
void read(int numbers[], int& count)
{
   count = 0;
   int num;
   cout << "enter ints, " << sentinel << " to quit: ";
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count++] = num;
      cin >> num;
   }
}

void output(int numbers[],int count)
{
   for (int i=0; i<count; i++)
      cout << *(numbers+i) << endl;
   cout << endl;
}

