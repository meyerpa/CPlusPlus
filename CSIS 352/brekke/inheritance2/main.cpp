#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

void func1(Base b)
{
   cout << "---------- starting func1 --------\n";
   b.print();
   cout << "---------- exiting func1 --------\n";
}

void func2(Derived d)
{
   cout << "---------- starting func2 --------\n";
   d.print();
   cout << "---------- exiting func2 --------\n";
}

void func3(Base& b)
{
   cout << "---------- starting func3 --------\n";
   b.print();
   cout << "---------- exiting func3 --------\n";
}

void func4(Derived& d)
{
   cout << "---------- starting func4 --------\n";
   d.print();
   cout << "---------- exiting func4 --------\n";
}

int main()
{
   Base b(5);
   Derived d(3,6);
   cout << "--------------\n";
   b.print();
   cout << "--------------\n";
   d.print();
   cout << "--------------\n";
   d.Base::print();
   cout << "--------------\n";
   b = d;
   b.print();
//   d = b;  // error unless operator = overloaded
   func1(b);
   func1(d);
//    func2(b); // error unless copy constructor
   func2(d);
   func3(b);
   func3(d);
//   func4(b); // error and there's nothing we can do about it
               // though could if it's const reference, then
               // the copy constructor would execute
   func4(d);

// pointer stuff
   Base *bp;
   Derived *dp;
   cout << "Base pointer pointing to a Base object\n";
   bp = &b;
   bp->print();
   cout << "Base pointer pointing to a Derived object\n";
   bp = &d;
   bp->print();
   cout << "Derived pointer pointing to a Derived object\n";
   dp = &d;
   dp->print();
   cout << "Derived pointer pointing to a Base object\n";
//   dp = &b;  // can't, could static_cast<Derived*>(&b)
               // but there would be garbage in the Y attribute
//   dp->print();
   cout << "can't do it\n";
   return 0;
}
