// File: 	file_print.cpp
// Name: 	Paige Meyer
// Assignment: 	6
// Class: 	CSIS 252
// Date: 	3/5/2015

// Description: will output the array separated by spaces to a file

#include <fstream>
#include "constants.h"
using namespace std;

/*
 * Function: 	output
 * Description: will output the array separated by spaces to a file
 * Input: 	numbers (array of int) - used to find values
 * 		count (int) - length of array
 * 		output_file (ofstream) - name of file to print to
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

void file_print(const int numbers[], int ct, ofstream& file) {
  

  // iterate through the array append string with each value separated by a space
  for (int i = 0 ; i < ct; i++) {
    file << numbers[i] << " ";
  } // end for loop

} // end file_print