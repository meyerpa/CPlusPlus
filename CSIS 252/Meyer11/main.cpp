// File: main.cpp
// name: Paige Meyer
// Assignment: 11
// Date: 4/20/2015

// Description: this main function will call other functions

#include <iostream>
#include "constants.h"
#include "prototypes.h"
#include "queueType.h"
using namespace std;

int main() {
  // decare variables
  queueType<char> inFix;
  queueType<char> postFix;
  queueType<char> tmp;
  
  //read input from keyboard
  cout << "Please enter a infix expression: ";
  read(inFix);
  tmp = inFix; // assigning this seems like bad notation
  
  // print infix notation
  cout << endl << "Infix notation: ";
  print(tmp);

  // change to postfix notation
  toPostFix(inFix, postFix);

  // print postfix notation
  cout << endl << "Postfix expresion: ";
  print(postFix);
  cout << endl;
  
  
  return 0;
} // end main