// File: read.cpp
// name: Paige Meyer
// Assignment: 11
// Date: 4/20/2015

// Description: this file will read input from a keyboard

#include <iostream>
#include "queueType.h"
using namespace std;


/*
 * Function: 	read
 * Description: reads characters for infix expressions
 * Input: 	<none>
 * Output: 	infix (queueType) - contains data for infix expression
 * Preconditions: Data entered will be in the correct format and all on one line.
 * Postconditions: queueType will be instantiated and initialized to user input 
 * of the infix expression.
 */

void read(queueType<char>& infix) {
  char tmp_char;

  cin.get(tmp_char);
  while (tmp_char!= '\n' && !infix.isFullQueue() ) {
    //read charatures and put on queueType
    if (tmp_char != ' ' && tmp_char !='\t') {
		// change to uppercase
		tmp_char = toupper(tmp_char);
		infix.addQueue(tmp_char);
    } // end if not whitespace
    cin.get(tmp_char);
  } // end while
} // end read