// File: isOperator.cpp
// name: Paige Meyer
// Assignment: 11
// Date: 4/27/2015

// Description: this function will return true if the char is an 
//	operator and false if not.

bool isOperator(char tmp) {
	// check if is an operator
	return (tmp == '^' || tmp == '/' || tmp == '*' || tmp == '-' || tmp == '+');
} // end isOperator