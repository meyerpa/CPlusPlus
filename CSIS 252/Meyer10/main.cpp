// File: 	main.cpp
// Author: 	Paige Meyer
// Assignment: 	10
// Class: 	CSIS 252
// Date: 	4/15/2015

// Description: calls other functions for assignment 9

#include <iostream>
#include <fstream>
#include "prototypes.h"
#include "orderedList.h"
#include "constants.h"
#include "studentType.h"
using namespace std;

/*
 * Function: 	main
 * Description: calls other functions
 * Input: 	<none>
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

int main(int argc, char *argv[]) {  
  orderedList<studentType> students(ARRAY_SIZE);
  ifstream input;
  ofstream output;
  
  description();
  
  // check cmd args
  if (argc >= 2) {
	  //open files
	  input.open(argv[1]);
	  if (!input.fail()) {
		  //read from input file
		  read(students, input);
	  } // end innter if
  } // end outer if
   
  // print information formatted
  print(students, output);
  

  } // end if
  
  cout << endl << "---END OF PROGRAM---\n";
  
  return 0; // end program
  
} // end main