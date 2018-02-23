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

void read(int numbers[], int& count)
{
   count = 0; // since it wasn't function input
   cout << "enter ints, " << sentinel << " to quit: ";
   int num;
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
}

int biggest(const int numbers[],int count)
{
   int biggest = numbers[0];
   for (int i=0; i<count; i++)
      if (numbers[i] > biggest)
         biggest = numbers[i];
   return biggest;
}

void output(const int numbers[],int count)
{
   cout << "Array: ";
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
}

int search(const int numbers[],int count, int searchValue)
{
   bool found=false;
   int pos=0;
   while (!found && pos<count)
   {
      if (numbers[pos] == searchValue)
         found = true;
      else
         pos++;
   }
   if (found)
      return pos;
   else
      return -1;
}

