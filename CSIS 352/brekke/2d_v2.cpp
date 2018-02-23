#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
void output(const int numbers[][3],int rows, int columns)
{
   cout << "output from function 'output'\n";
   for (int i=0; i<rows; i++)
   {
      for (int j=0; j<columns; j++)
//          cout << setw(4) << *(numbers + i*columns*sizeof(int) + j*sizeof(int) ) ;
         cout << setw(4) << *(numbers + i*3 + j ) ;
      cout << endl;
   }

}

void dump(const int numbers[][3],int r, int c)
{
   for (int i=0; i<r; i++)
   {
      for (int j=0; j<c; j++)
      {
         cout << "Address: " <<&numbers[i][j] << setw(4);
	 printf("   Contents: %08X ",numbers[i][j]);
	 cout << endl;
      }
   }

}

int main()
{
   int matrix[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
   cout << "output from main\n";
   for (int i=0; i<4; i++)
   {
      for (int j=0; j<3; j++)
         cout << setw(4) << *(matrix + i*12 + j*4 ) ;
//          cout << setw(4) << matrix[i][j];
      cout << endl;
   }
   cout << endl;
   output(matrix,4,3);
   dump(matrix,4,3);
   return 0;
}
