// File: 	mode.cpp
// Name: 	Paige Meyer
// Assignment: 	6
// Class: 	CSIS 252
// Date: 	3/4/2015

// Description: returns the mode of the array

/*
 * Function: 	calculate
 * Description: returns the mode of the array
 * Input: 	numbers (array of int) - array to calculate the avearge
 * 		count (int) - length of array
 * Output: 	mode (int) - mode of integer array
 * 		frequency (int) - number of times the mode occurs
 * Preconditions: array has have at least one value within it
 * Postcondtions: <none>
 */

void mode(const int numbers[], int ct, int& mode, int& mode_count) {
  // assign mode to first value
  mode = numbers[0];
  mode_count = 1;
  
  // iterate through array, initializing tmp_mode_count to 1 for each new int
  for (int i = 0; i < ct; i++) {
    int tmp_mode_count = 1;
    // iterate through the end of the list
    for (int compare_index = i + 1; compare_index < ct; compare_index++){
      // check if the integer is the same as another in the list
      if (numbers[compare_index] == numbers[i]) {
	tmp_mode_count ++;
      } // end if
      // check if tmp_mode_count > than last mode count, if so have new mode
      if (tmp_mode_count >= mode_count) { 
	mode_count = tmp_mode_count;
	mode = numbers[i];
      } // end if
    } // end inner for loop
  } // end outer for loop
} // end mode