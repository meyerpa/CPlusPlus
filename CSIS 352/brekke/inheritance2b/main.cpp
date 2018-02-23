#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

void func1(Base b)
{
   b.print();
}

void func2(Derived d)
{
   d.print();
}

void func3(Base& b)
{
   b.print();
}

void func4(const Derived& d)
{
   d.print();
}

int main()
{
   Base b1(5);
   Derived d1(3,6);
   b1.print();
   cout << "--------------\n";
   d1.print();
   cout << "calling Base print method using Derived object\n";
   d1.Base::print();
   cout << "assigning Base object to Derived object\n";
   b1 = d1;
   b1.print();
   b1.setX(5);  // restore it's original value
   cout << "assigning Derived object to Base object\n";
   d1 = b1;
   d1.print();
   d1.setX(3); d1.setY(6);  // restore original values
   cout << "pass by value formal Base argument with Derived actual argument\n";
   func1(d1);
   cout << "pass by value formal Derived argument with Base actual argument\n";
   func2(b1);
   cout << "pass by reference formal Base argument with Derived actual argument\n";
   func3(d1);
   cout << "pass by reference formal Derived argument with Base actual argument\n";
   cout << "note that the pass by reference formal argument must be const\n";
   func4(b1);
   return 0;
}
