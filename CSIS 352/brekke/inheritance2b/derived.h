#ifndef _DERIVED_H
#define _DERIVED_H
#include "base.h"

class Derived : public Base
{
   public:
      Derived(double val1, double val2);
      Derived(const Base&); // copy constructor
      void setY(double);
      double getY() const;
      void print() const;
      Derived& operator=(const Base&);
   private:
      double Y;
};
#endif
