// File:     circle.cpp
// Author:   Dan Brekke

// Description
// This file contains the implementation for a circle class

#include "circle.h"

ostream& operator<<(ostream& out,const Circle& c)
{
   out << c.radius();
   return out;
}


Circle Circle::operator+(const Circle& c) const
{
      return Circle (radius()+c.radius());
//       return temp;
}

bool Circle::operator==(const Circle& c) const
{
   return radius() == c.radius();
}

bool Circle::operator!=(const Circle& c) const
{
   return !(*this==c);
}

bool Circle::operator<(const Circle& c) const
{
   return radius() < c.radius();
}

Circle::Circle(double r)
{
   rad = r;
}

void Circle::setRadius(double r)
{
   rad = r;
}

double Circle::radius() const
{
   return rad;
}

double Circle::diameter() const
{
   return rad*2;
}

double Circle::area() const
{
   return PI*rad*rad;
}

double Circle::circumference() const
{
   return 2*PI*rad;
}
