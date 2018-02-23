//Program: Largest of three numbers
#include <iostream>

using namespace std;

double larger(double x, double y);
double compareThree(double x, double y, double z);

int main() 
{
   double one, two;										//Line 1

   cout << "Line 2: The larger of 5 and 10 is "
	    << larger(5, 10) << endl;						//Line 2
   cout << "Line 3: Enter two numbers: ";				//Line 3
   cin >> one >> two;									//Line 4
   cout << endl;										//Line 5

   cout << "Line 6: The larger of " << one << " and "
	    << two << " is " << larger(one, two) << endl;	//Line 6
   cout << "Line 7: The largest of 23, 34, and 12 is "
	    << compareThree(23, 34, 12) << endl;			//Line 7

   return 0;
}

double larger(double x, double y)
{
   if (x >= y)
	   return x;
   else 
       return y;
}

double compareThree (double x, double y, double z)
{
   return larger(x, larger(y, z));
}
