// File: 	main.cpp
// Author: 	Paige Meyer
// Assignment: 	8
// Class: 	CSIS 252
// Date: 	3/25/2015

// Description: calls other functions for assignment 8

#include <iostream>
#include "prototypes.h"
#include "sort.h"
#include "constants.h"
#include "personType.h"
using namespace std;

/*
 * Function: 	main
 * Description: calls other functions
 * Input: 	<none>
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

int main() {  
  int ct;
  personType people[ARRAY_SIZE];
  
  description();
  
  // first read file
  ct = read(people);
  
  // sort array descendingly according to birthday
  sort(people, ct);

  // print information formatted
  print(people, ct);
  
  cout << endl << "---END OF PROGRAM---";
  
  
  return 0; // end program
} // end main