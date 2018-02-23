// File: 	mode
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
 * Preconditions: array has have at least one value within it and sorted in
		      ascending order
 * Postcondtions: <none>
 */

int mode(const int numbers[], int ct) {
  // assign mode to first value
  int mode = numbers[0];
  int mode_count = 1;
  for (int i = 0; i < ct; i++) {
    int tmp_mode_count = 1;
    for (int compare_index = i + 1; compare_index < ct; compare_index++){
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
  
  return mode;			// return the mode
} // end mode