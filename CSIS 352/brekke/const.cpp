// read const statements right to left

#include <iostream>
#include <string>
using namespace std;

// exception to the right to left: const at the beginning of type declaration
const int num1 = 3; // same as: int const num1 = 3;  num1 is a const int
const int num2 = 7;

int main()
{
   cout << "constant num1 = " << num1 << " at address " << &num1 << endl;
   cout << "constant num2 = " << num2 << " at address " << &num2 << endl;
 
   int const * p1 = &num1; // p1 is a pointer to a constant int
   cout << "p1 address:" << &p1 << "  points to address:" << p1 
        << "  value:" << *p1 << endl;
   p1 = &num2;
   cout << "p1 address:" << &p1 << "  points to address:" << p1 
        << "  value:" << *p1 << endl;
   const int * p2 = &num2; // syntax exception
   cout << "p2 address:" << &p2 << "  points to address:" << p2 
        << "  value:" << *p2 << endl;

// p3 is a constant pointer to a constant int
   int const * const p3 = &num1;
   cout << "p3 address:" << &p3 << "  points to address:" << p3 
        << "  value:" << *p3 << endl;

// Note: p1 and p2 can change, p3 cannot since it is a constant pointer

// p4 is a reference to a constant pointer to a constant int
   int const * const & p4 = p3;
   cout << "p4 address:" << &p4 << "  points to address:" << p4 
        << "  value:" << *p4 << endl;
// Note: p4 is an alias for p3

// p5 is a constant pointer to a constant pointer to a constant int
   int const * const * const p5 = &p3;
   cout << "p5 address:" << &p5 << "  points to address:" << p5 
        << "  value:" << *p5 << endl;
   cout << "   **p5 = " << **p5 << endl;


// p6 is a reference to a constant pointer to a constant pointer to a const int
   int const * const * const & p6 = p5;
   cout << "p6 address:" << &p6 << "  points to address:" << p6 
        << "  value:" << *p6 << endl;
   cout << "   **p6 = " << **p6 << endl;
// Note: p6 is an alias for p5
   return 0;
}
