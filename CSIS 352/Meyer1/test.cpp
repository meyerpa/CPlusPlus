// file: test
// author: Paige Meyer
// Description: used for testing the currency class and methods

#include <iostream>
#include "currency.h"
#include <typeinfo>
using namespace std;

int main() {
  Currency c1(2342.53);
  Currency c2(2342.525); // there is no half cent coin, round it to 2342.52
  Currency c3(423);
  Currency c4;
  
  
  cout << "Testing constructors..." << endl;
  cout << (static_cast<float>(c1.getAmount()) == static_cast<float>(2342.53)) << endl;
  cout << (static_cast<float>(c1.getAmount()) != static_cast<float>(2342.0)) << endl;
  cout << (static_cast<float>(c2.getAmount()) == static_cast<float>(2342.53)) << endl;
  cout << (static_cast<float>(c2.getAmount()) != static_cast<float>(2342.52)) << endl;
  cout << (static_cast<float>(c3.getAmount()) == static_cast<float>(423.0)) << endl;
  cout << (static_cast<float>(c3.getAmount()) != static_cast<float>(423.1)) << endl;
  cout << (static_cast<float>(c4.getAmount()) == static_cast<float>(0.0)) << endl;
  cout << (static_cast<float>(c4.getAmount()) != static_cast<float>(0.1)) << endl << endl;
  
  cout << "Testing relational operators..." << endl;
  cout << (c1 == 2342.53) << endl;
  cout << (c1 == c2) << endl;
  cout << "c1: " << c1 <<"< 2342.54" << endl;
  cout << (c1 < 2342.54) << endl;
  c2 = 2342.535;
  cout << c3 << "< " << c2 << endl;
  cout << (c3 < c2) << endl;
  cout << "c3: " << c3 << "!= 423.01"<< endl;
  cout << (c3 != static_cast<double>(423.01)) << endl;
  cout << (c1 != c2) << endl;
  cout << (c1 <= 2342.53) << endl;
  c2 = 2342.534;
  cout << (c3 <= c2) << endl;
  
  cout << "Testing addition, subtraction, multiplication, and division operators..." << endl;
  cout << (c3+10 == 433) << endl;
//  cout << (c3+10) <<" == 423.1" << endl;
  cout << (c3+.1 == 423.1) <<endl;
//  cout << (c3+.1) <<" == 423.1" << endl;
  cout << (c3-10 == 413) <<endl;
//  cout << (c3-10) <<" == 413" << endl;
  cout << (c3-.1 == 422.9) <<endl;
//  cout << (c3-.1) <<" == 422.9" << endl;
  c3 = 433;
  cout << (c3*2 == 866) << endl;
//  cout << (c3*2) <<" == 866" << endl;
  cout << (c3/2 == 216.5) << endl;
//  cout << (c3/2) <<" == 216.5" << endl;
  cout << (c3/.5 == 866) << endl;
//  cout << (c3/.5) <<" == 866" << endl;
  cout << (c3*0.5 == 216.5) << endl;
//  cout << (c3*.5) <<" == 216.5" << endl;
  c1 = 10.99;
  c2 = 20.01;
  cout << ( c1+c2==31) <<endl;
//   cout << "c2-c1: " << c2-c1 <<endl;
  cout << (static_cast<float>((c2-c1).getAmount()) == static_cast<float>(9.02)) << endl << endl;

  cout << "Testing getters..." << endl;
  cout << (c1.getDollars() == 10) << endl;
  cout << (c1.getCents() == 99) << endl;
  cerr << "Debugging..." << endl;
  cerr << c1.getAmount() << " == 10.99" << endl;
  cerr << typeid(c1.getAmount()).name() << ' ' << typeid(10.99).name() << endl;
  cout << (c1 == 10.99) << endl;
  
  return 0;
  
}

