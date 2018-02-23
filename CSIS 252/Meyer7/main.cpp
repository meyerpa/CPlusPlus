// File: 	main.cpp
// Author: 	Paige Meyer
// Assignment: 	7
// Class: 	CSIS 252
// Date: 	3/9/2015

// Description: calls other functions for assignment 7

#include "prototypes.h"
#include "constants.h"
#include "decl.h"
#include <iostream>
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
  cout << "\nThis program will take names and ages(int) from a file called data ";
  cout << "up to \n20 people long. It will then output those names in age ";
  cout << "ascending order \nto the screen." << endl <<endl;
 
  
  int ct;
  person people[ARRAY_SIZE];
  
  // first read file
  ct = read(people);
  
  // sort array ascendingly according to age
  sort_age(people, ct);

  // print information formatted
  print_array(people, ct);
  
  cout << endl << "---END OF PROGRAM---";
  
  return 0;		// end program
} // end main