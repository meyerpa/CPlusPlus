// file: median_value
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015


/*
 * Function: 	calculate
 * Description: Will return median value of the array
 * Input: 	numbers (array of int) - used to find values
 * 		count (int) - length of array
 * Output: 	median_value (double) - the median value of the the array
 * Preconditions: the array has to have at least one integer within it
 * Postcondtions: <none>
 */

double median_value(const int numbers[], int ct) {
  // if odd number of integers, print one in middle
  if (ct%2 ==1) {
    return static_cast<double>(numbers[ct/2]);
  } // end if
  // if it's still here, has to be an even length
  return (static_cast<double>(numbers[(ct+1)/2]) + numbers[(ct-1)/2]) / 2; 
} // end median_value