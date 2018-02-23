// File: 	average.cpp
// Author: 	Paige Meyer
// Assignment:	6
// Class: 	CSIS 252
// Date: 	3/5/2015

// Description: returns the average value of the array, if the array is 
//		empty will return 0

/*
 * Function: 	calculate
 * Description: returns the average value of the array, 
 * 		if the array is empty will return 0
 * Input: 	numbers (array of int) - array to calculate the average
 * 		count (int) - length of array
 * Output: 	average (double) - avearge value of integer array
 * Preconditions: array has have at least one value within it
 * Postcondtions: <none>
 */

double average(const int numbers[], int ct) {
  int tmp_sum = 0;
  for (int i = 0 ; i < ct; i++) {
    tmp_sum += numbers[i];
  } // end for loop
  return static_cast<double>(tmp_sum)/ct;	// return average value
} // end average