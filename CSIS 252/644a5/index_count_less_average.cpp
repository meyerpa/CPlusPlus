// file: index_count_less_average
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015


/*
 * Function: 	calculate
 * Description: Will return the integer of the number of integers in the array which are
 * 		less than or equal to than the average
 * Input:	numbers (array of int) - used to find values
 * 		count (int) - length of array
 * Output: 	index_less_avg (int) - index of array where integers less or 
 * 			equal to average
 * 		index_greater_avg (int) - index of array where integers greater 
 * 			than the average
 * Preconditions: <none>
 * Postcondtions: <none>
 */

void index_count_less_average(const int numbers[], int ct, double avg, int& index_less_avg, int& index_greater_avg) {
  index_less_avg = 0; // initialize the indexes to zero
  index_greater_avg = 0;
  
  // check if the number is greater than the average and have index saved to variable
  for (int i = 0 ; i < ct; i++) {
    // check if the number we are on is greater than the average
    // and the one after is less than or equal the average
    if (numbers[i] > avg && numbers[i-1] <= avg) {
      index_less_avg = i;
    } // end if loop
    index_greater_avg = ct - index_less_avg;
  } // end for loop

  //check it only one integer long
  if (ct == 1) {
    index_less_avg = 1;
    index_greater_avg = 0;
  } // end if statement
} // end index_count_less_average