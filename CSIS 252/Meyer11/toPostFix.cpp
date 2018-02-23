// File: toPostFix.cpp
// name: Paige Meyer
// Assignment: 11
// Date: 4/28/2015

// Description: this fill will change a infix expression to postfix expression

#include <ctype.h>
#include <iostream>
#include "queueType.h"
#include "stackType.h"
#include "prototypes.h"
using namespace std;

/*
* Function: 	toPostFix
* Description: changes an expression to postfix notation
* Input: 	inFix (queueType) - contains data for infix expression
* Output: 	postfix (queueType) - contains data for the postfix expression
* Preconditions: <none>
* Postconditions: queueType will be instantiated and initialized to user input
* of the infix expression.
*/

void toPostFix(queueType<char>& inFix, queueType<char>& postFixQueue) {
	stackType<char> postFixStack;
	queueType<char> temp;

	char token, next, tmp_token;

	while (!inFix.isEmptyQueue() && !postFixQueue.isFullQueue() && !postFixStack.isFullStack()){
		// get each element and remove from inFix 
		token = inFix.front();
		inFix.deleteQueue();

		// CHECKS:
		// if token is operand, add it to queue
		if (isalnum(token)) {
			postFixQueue.addQueue(token);
		} // end if alpha numeric
		// if token is Left parenthesis, push it on stack
		else if (token == '(') {
			postFixStack.push(token);
		} // end if (
		// if token is right parentesis
		else if (token == ')') {
			// pop operators from stack to queue and add to 
			// postFix until ( shows up
			while (!postFixStack.isEmptyStack() && postFixStack.top()!='(' && !postFixQueue.isFullQueue()) {
				postFixQueue.addQueue(postFixStack.top());
				postFixStack.pop();
			} // end while
		} // end else if )
		// if token is operator
		else if (isOperator(token)) {
			// check if postFixStack is empty, if not grab item
			if (!postFixStack.isEmptyStack()) {
				next = postFixStack.top();
				while (!postFixStack.isEmptyStack() && !isShouldAddOperator(token, next)) {
					postFixStack.pop();
					postFixQueue.addQueue(next);
					if (!postFixStack.isEmptyStack()) {
						next = postFixStack.top();
					} // end if
				}// end while
			} // end if
			postFixStack.push(token);
		} // else if is an operator
	} // end while

	// now add char from postFixStack to postFixQueue
	while (!postFixQueue.isFullQueue() && !postFixStack.isEmptyStack()) {
		token = postFixStack.top();
		postFixStack.pop();
		if (token != '(') {
			postFixQueue.addQueue(token);
		} // end if left parenth.
	} // end while
} // end toPostFix