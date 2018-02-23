#include <iostream>
#include <iomanip>
using namespace std;

const int rows=5;
const int columns=10;

void output(int** numbers,int r, int c)
{
   cout << "output from function 'output'\n";
   for (int i=0; i<r; i++)
   {
      for (int j=0; j<c; j++)
         cout << setw(4) << numbers[i][j];
      cout << endl;
   }
}

int main()
{
   // create the dynamically allocated 2d array
   int** m = new int*[rows];  // m is an array of pointers to ints
   for (int i=0; i<rows; i++)
      m[i] = new int[columns];  // allocate each row of ints

   // use the dynamically allocated 2d array
   int count=1;
   for (int i=0; i<rows; i++)
      for (int j=0; j<columns; j++)
         m[i][j] = count++;
   for (int i=0; i<rows; i++)
   {
      for (int j=0; j<columns; j++)
      {
         cout << setw(4) << m[i][j];
      }
      cout << endl;
   }
   
   output(m,rows,columns);
   
   // delete the dynamically allocated 2d array
   for (int i=0; i<rows; i++)
      delete [] m[i];   // delete each row of ints
   delete [] m;   // delete the array of pointers to ints
      
   return 0;
}
