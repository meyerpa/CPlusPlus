// file: description
// name: Paige Meyer
// assignment: 10
// class: CSIS 252
// date: 4/16/2015

#include <iostream>
#include "constants.h"
using namespace std;

/*
 * Function: 	print
 * Description: will print the description for the program
 * Input: 	<none>
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

void description() {
  
  // Describe to user what program does
  
  cout << "\nThis program will read names and scores, up to " << ARRAY_SIZE <<" each from\n";
  cout << "an input file as writted on the command line while executing. It will store them\n";
  cout << "in an ordered list of studentType. Then, display students sorted ascendingly\n";
  cout << "according to score" << endl;
  
} // end program_description