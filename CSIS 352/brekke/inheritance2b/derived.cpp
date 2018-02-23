#include "derived.h"

Derived::Derived(const Base& b) : Base(b.getX()), Y(0)
{cerr << "in Derived copy constructor\n"; }
   
Derived& Derived::operator=(const Base& b)
{
cerr << "in Derived operator=\n";
   setX(b.getX());
   Y = 0; // or leave uninitialized
   return *this;
}

Derived::Derived(double val1, double val2) 
     : Base(val1), Y(val2)
{ }

void Derived::setY(double val)
{
   Y = val;
}

double Derived::getY() const
{
   return Y;
}

void Derived::print() const
{
//    Base::print();  // can't because Base::print is non const
   const_cast<Derived*>(this)->Base::print();
   cout << "Y = " << getY() << endl;
}

