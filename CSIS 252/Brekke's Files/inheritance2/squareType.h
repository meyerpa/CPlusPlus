#ifndef _SQUARETYPE_H_
#define _SQUARETYPE_H_
#include <iostream>
using namespace std;
#include "rectangleType.h"

class squareType : public rectangleType
{
   public:
      void setDimension(double side);
      double getSide() const;
};

#endif

