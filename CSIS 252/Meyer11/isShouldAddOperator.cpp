// File: isShouldAdd.cpp
// name: Paige Meyer
// Assignment: 11
// Date: 4/21/2015

// Description: this will check if a value should be added to postfix expression

using namespace std;

/*
* Function: 	isShouldAddOperator
* Description:  check if a value should be added to postfix expression
* Input: 	<none>
* Output: 	add (boolean) - whether the user should add to Postfix expression
* Preconditions: <none>
* Postconditions: <none>
*/


bool isShouldAddOperator(char token, char other) {
	if (token == '^'){
		return true;
	} // end if
	if (other == '('){
		return true;
	} // end if
	if ((other == '+' || other == '-') && (token == '*' || token == '/')) {
		return true;
	}// end if
	return false;			// if none of above, return false
  
} // end isShouldAddOperator