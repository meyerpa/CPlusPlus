// File: print.cpp
// name: Paige Meyer
// Assignment: 11
// Date: 4/21/2015

// Description: this fill will change a infix expression to postfix expression

#include <iostream>
#include "queueType.h"
using namespace std;

/*
* Function: 	print
* Description:  outputs 
* Input: 	queue (queueType) - contains data for infix expression
* Output: 	<none>
* Preconditions: queueType will contain the correct information
* Postconditions: <none>
*/

void print(queueType<char>& queue) {
	char tmp_char;

	while (!queue.isEmptyQueue()) {
		tmp_char = queue.front();
		queue.deleteQueue();
		cout << tmp_char;
	} // end while
} // end print