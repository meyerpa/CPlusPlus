// description: testing program
// author: Paige Meyer
// class: CSIS 352


#include <iostream>
#include "array.h"
using namespace std;
using namespace ArrayNameSpace;

int main() {  
  
  cout << "Testing integer usage..." << endl << endl;
  cout << "Testing constructors..." << endl;
  // try { Array<int> numbers(0,12); }
  // catch (const exception& ex) { cout << "error - constructor with two int indicies doesn't work \n"; } 
  
  // try { Array<int> numbers(-4,0); cout << "error - constructor with two int allows stop to be before start \n";}
  // catch (const exception& ex) { } 
  
  // try { Array<int> numbers(3); }
  // catch (const exception& ex) { cout << "error -constructor with one int index doesn't work \n"; } 
  
  // try { Array<int> numbers(-3); cerr <<"error - allows negative length\n";}
  // catch (const exception& ex) { }
  
  cout << "Testing indexing operators..." << endl;
  // try { numbers[1]; }
  // catch (const exception& ex) { cout << "error - accessing by indexing array doesn't work \n"; } 
  
  // try { numbers[4]; cout << "error - shouldn't allow to access outside of array boundaries \n";}
  // catch (const exception& ex) {  } 
  
  // try { numbers[1] =2; }
  // catch (const exception& ex) { cout << "error - assigning by indexing array doesn't work \n"; } 
  
  // try { numbers[4] =2; cout << "error - shouldn't allow to assingment outside of array boundaries \n"; }
  // catch (const exception& ex) {  }  
  
  if (numbers[1]!=2) 
    cout << "error- did not update indexes accordingly";
  
  
  
  
  
  return 0;

} // end main
