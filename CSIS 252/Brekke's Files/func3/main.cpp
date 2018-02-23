#include <iostream>
using namespace std;
const int arraysize=5;
const int sentinel=-999;

// function prototypes
// comment: in prototypes, parameter names are not needed
int biggest(const int numbers[],int count);
void output(const int numbers[],int count);
int search(const int numbers[],int count, int searchValue);
void read(int numbers[], int& count);

int main()
{
   int numbers[arraysize];
   int count;
   read(numbers,count);
   output(numbers,count);
   output(numbers,count);
   output(numbers,count);
   cout << "biggest is " << biggest(numbers,count) << endl;
   
   int searchValue;
   cout << "enter a value to search for: ";
   cin >> searchValue;
   int position = search(numbers,count,searchValue);
   if (position >= 0)
      cout << searchValue << " found at position " << position << endl;
   else
      cout << searchValue << " not found\n";
   
   return 0;
}



