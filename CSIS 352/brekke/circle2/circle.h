// File:     circle.h
// Author:   Dan Brekke

// Description
// This file contains the specification for a circle class

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <iostream>
const double PI = 3.141592654;
using namespace std;

class Circle
{
   public:
      Circle(double=0);  // constructor with default radius
      void setRadius(double);
      double radius() const;
      double diameter() const;
      double area() const;
      double circumference() const;
      bool operator==(const Circle&) const;
      bool operator!=(const Circle&) const;
      bool operator<(const Circle&) const;
      Circle operator+(const Circle&) const;
   private:
      double rad;
};

ostream& operator<<(ostream&,const Circle&);

#endif
