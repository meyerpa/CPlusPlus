// File: prototypes.h
// name: Paige Meyer
// Assignment: 11
// Date: 4/20/2015

#include "stackType.h"
#include "queueType.h"
using namespace std;

// Description: this file contains the prototypes for other functions

void read(queueType<char>& infix);
void toPostFix(queueType<char>& inFix, queueType<char>& postFix);
bool isShouldAddOperator(char token, char next);
void print(queueType<char>& stack);
bool isOperator(char tmp);
