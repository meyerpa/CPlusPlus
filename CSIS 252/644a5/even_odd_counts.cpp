// file: even_odd_counts
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015


/*
 * Function: 		calculate
 * Description: 	Will return the integer of the number of even integers 
 * 			`	in the array which are
 * 			greater than the average
 * Input:		numbers (array of int) - used to find values
 * 		        count (int) - length of array
 * Output: 	  	ct_even_greater_avg (int) - number of even integers less or equal than average
 * Preconditions: 	<none>
 * Postconditions: 	<none>
 */

void even_odd_counts(const int numbers[], int ct, double avg, int& ct_even_less, int& ct_even_greater, int& ct_odd_less, int& ct_odd_greater) {
  // iterate through the number array and check if even, off, less than or equal 
  //to, or greater than the average
  for (int i = 0 ; i < ct; i++) {
    // check if number is equal or equal to the average and even, then increment count
    if (numbers[i] <= avg && numbers[i]%2 == 0) {
      ct_even_less++;
    } //end if loop   
    else if (numbers[i] > avg && numbers[i]%2 == 0) {
      ct_even_greater++;
    } //end else if loop   
    else if (numbers[i] <= avg && numbers[i]%2 == 1) {
      ct_odd_less++; 
    } //end else if loop 
    else {
      ct_odd_greater++;
    } // end else loop
  } // end for loop
} // end even_odd_counts
