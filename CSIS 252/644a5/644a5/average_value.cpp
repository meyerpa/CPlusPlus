// file: average_value
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015



/*
 * Function: 	calculate
 * Description: returns the average value of the array, 
 * 		if the array is empty will return 0
 * Input: 	numbers (array of int) - array to calculate the avearge
 * 		count (int) - length of array
 * Output: 	average (double) - avearge value of integer array
 * Preconditions: array has have at least one value within it
 * Postcondtions: <none>
 */

double average_value(const int numbers[], int ct) {
  int tmp_sum = 0;
  for (int i = 0 ; i < ct; i++) {
    tmp_sum += numbers[i];
  } // end for loop
  return static_cast<double>(tmp_sum)/ct;	// return average value
} // end average_value