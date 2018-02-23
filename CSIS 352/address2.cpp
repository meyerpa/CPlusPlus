#include <iostream>
#include <iomanip>
using namespace std;

struct example
{
   int A;
   char B;
   short C;
   float D;
};

void func(int x, int& y)
{
   int a=1,b=2,c=3,d=4;
}

int main()
{
   int A = -12;
   short B = 59;
   long C = 47;
   float D = 41.5;       // 8 bit exponent, 23 bit mantissa
   double E = -15.25;    // 11 bit exponent, 52 bit mantissa
   char F = 'A';
   char G = 'B';
   short H[5] = {10,20,30,40,50};
   example I; 
   I.A = 27; 
   I.B = 'C'; 
   I.C = -18; 
   I.D = 13.625;
   int J=-74;
   float K = -51.125;
   short L = -61;
   short M = B;

   func(A,J);
   return 0;
}

