// file: odd_less_equal_average
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015


/*
 * Function: 	calculate
 * Description: Will return the integer of the number of odd integers which are less than 
 * 		or equal to the average.
 * Input: 	numbers (array of int) - used to find values
 * 		count (int) - length of array
 * Output: 	count_odd_less_avg (int) - the count of the integers which are
 *			less than or equal to the average
 * Preconditions: <none>
 * Postcondtions: <none>
 */

int odd_less_equal_average(const int numbers[], int ct, double avg) {
  int ct_odd_less_avg = 0;

  // iterate through the number array and check if even, off, less than or equal to, or greater than the average
  for (int i = 0 ; i < ct; i++) {
    // check if the number is less than or equal to the average and odd, then increment count
    if (numbers[i] <= avg && numbers[i] % 2 == 1) {
      ct_odd_less_avg++;
    } // end else if loop
  } // end for loop
  
  return ct_odd_less_avg;
} // end odd less equal average