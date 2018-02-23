#include "demo.h"

demo::demo()
{
   setX(0);
   setY(0);
}

demo::demo(int x,int y)
{
   setX(x);
   setY(y);
}

int demo::getX() const
{
   return x;
}

void demo::setX(int val)
{
   x = val;
}

int demo::getY() const
{
   return y;
}

void demo::setY(int val)
{
   y = val;
}

