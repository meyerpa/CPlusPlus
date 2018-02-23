// File: 	print_array.cpp
// Author: 	Paige Meyer
// Assignment: 	7
// Class: 	CSIS 252
// Date: 	3/12/2015

// Description: this function will print a title for name and age in the array
//    and the array with name on the left with 20 characters space then the 
//    age right-justified.

#include <iostream>
#include <iomanip>
#include "decl.h"
#include "constants.h"
using namespace std;

/*
 * Function: 	print
 * Description: prints the array with formatting
 * Input: 	name_array (array of structs) - containing the data for names and ages
		count (int) - length of the array of structs
 * Output: 	<none>
 * Preconditions: count for length of array is correct and so is the array
 * Postcondtions: <none>
 */


void print_array(const struct person tmp_people[], int count) {
  // print heading
  cout << left << setw(WIDTH_NAME) << "NAME" << right << setw(WIDTH_AGE) << "AGE" << endl;
  // print divider
  cout << setfill(CHAR_FILL_LINE) << setw(WIDTH_NAME+WIDTH_AGE) << CHAR_FILL_LINE; 
  cout << setfill(' ') << endl;
  // print array
  for (int index = 0; index < count; index++) {
    cout << left << setw(WIDTH_NAME) << tmp_people[index].name; 
    cout << right << setw(WIDTH_AGE) << tmp_people[index].age;
    cout << endl;
  } // end for loop
} // end print array