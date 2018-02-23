// NOTE: This is a nonsense program.  Don't try to make any
// sense of it.  The purpose is to show the structure of a
// C++ program and provide descriptions.

// These two lines should be put at the top of each file that
// uses keyboard input and screen output.  Other includes are
// used when necessary to access other libraries.
#include <iostream>
using namespace std;

// These are constants. They cannot change. Advantages
// 1. Constants enhance readability of a program by assigning
//    a name to a value.
// 2. Constants make changes easier and less error prone.
// Constants are typically declared outside of functions.
const double A_min = 0.9; // minimum pct for an A grade
const double B_min = 0.8;
const double C_min = 0.7;
const double D_min = 0.6;

int main()
{
// These are variables.  They can change.
// Variables should be declared at the top of functions.
   int score;
   int maxScore;
   double pct;
   
   cout << "enter maximum test score: ";
   cin >> maxScore;
   cout << "enter student test score: ";
   cin >> score;
   pct = static_cast<double>(score) / maxScore;
   cout << "your percentage is " << pct << endl;
   cout << "Grade Range\n";
   cout << "   A >= " << A_min << endl;
   cout << "   B >= " << B_min << endl;
   cout << "   C >= " << C_min << endl;
   cout << "   D >= " << D_min << endl;
   
   return 0;
}
   
