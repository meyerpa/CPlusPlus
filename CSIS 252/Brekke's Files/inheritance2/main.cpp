#include <iostream>
#include <iomanip>
#include "rectangleType.h"
#include "squareType.h"

using namespace std;

int main()
{
   squareType s1;
   s1.setDimension(3);
   cout << "side: " << s1.getSide() << endl;
   cout << "area: " << s1.area() << endl;
    return 0;                                      //line 24
}
