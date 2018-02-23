#include <iostream>
#include "rectangleType.h"

using namespace std;

void rectangleType::setDimension(double l, double w)
{
     if (l >= 0)
         length = l;
     else
         length = 0;

     if (w >= 0)
         width = w;
     else
         width = 0;
}

double rectangleType::getLength() const
{
     return length;
}

double rectangleType::getWidth()const
{
     return width;
}

double rectangleType::area() const
{
     return length * width;
}

double rectangleType::perimeter() const
{
     return 2 * (length + width);
}

void rectangleType::print() const
{
     cout << "Length = "  << length
          << "; Width = " << width;
}

rectangleType::rectangleType(double l, double w)
{
cerr << "in the rectangleType constructor with 2 arguments\n";
     setDimension(l, w);
}

/*
rectangleType::rectangleType()
{
cerr << "in the rectangleType constructor with NO arguments\n";
     length = 0;
     width = 0;
}
*/

