// File: 	sort_age.cpp
// Author: 	Paige Meyer
// Assignment: 	7
// Class: 	CSIS 252
// Date: 	3/12/2015

// Description: this function will sort the array in ascending age order

#include "decl.h"
#include "prototypes.h"
using namespace std;

/*
 * Function: 	sort array
 * Description: sorts array in age ascending order
 * Input: 	name_array (array of structs) - containing the data for names and ages
		count (int) - length of the array of structs
 * Output: 	name_array (array of structs) - containing the data for names and ages
 * Preconditions: count for length of array is correct and so is the array
 * Postcondtions: May change order of person(s) in the array.
 */

void sort_age(struct person tmp_people[], int count) {
  person tmp_person; 		// variable for storing person temporarily, so can switch
  // iterate through each value in array
  for (int index = 0; index < count-1; index ++){
    // initalize index with smallest age to be current
    int small = index;
    // iterate through the list and compare values to update smallest
    for (int compare = index+1; compare < count; compare ++) {
      if (tmp_people[compare].age < tmp_people[small].age) {
	small = compare;
      } // end if
    } // end inner for
    // switch smallest with the current index
    tmp_person = tmp_people[small]; // store value of current index
    tmp_people[small] = tmp_people[index]; 
    tmp_people[index] = tmp_person;
  } // end outer for  
} // end sort_age