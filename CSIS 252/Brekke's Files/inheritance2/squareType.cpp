#include "squareType.h"

void squareType::setDimension(double side)
{
   rectangleType::setDimension(side,side);
}

double squareType::getSide() const
{
   return getLength();
}
