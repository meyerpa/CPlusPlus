// file: even_greater_average
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015

/*
 * Function:		calculate
 * Description: 	returns the integer of the number of even integerwhich is greater than the average
 * Input:		numbers (array of int) - array to calculate the avearge
 * 		        count (int) - length of array
 * Output: 	  	ct_even_greater_avg (int) - number of even integers greater than average
 * Preconditions: 	<none>
 * Postconditions: 	<none>
 */

int even_greater_average(const int numbers[], int ct, double avg) {
  int ct_even_greater_avg = 0;

  // iterate through the number array and check if even, off, less than or equal to, or greater than the average
  for (int i = 0 ; i < ct; i++) {
    // check if the number is greater than the average and even, then increment count
    if (numbers[i] > avg && numbers[i] % 2 == 0) {
      ct_even_greater_avg++;
    } // end if statement
  } //end for loop
  
  return ct_even_greater_avg;
} // end even greater average