// file: separate_even_odd_arrays
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015


/*
 * Function: 	calculate
 * Description: separates the integers into two arrays based on whether they
 *		 are even or odd
 * Input: 	numbers (array of int) - used to find values
 * 		count (int) - length of array
 * Output: 	even (array of integers) - array for even integers
 * 		even_count (integer) - length of even integer array
 * 		odd (array of integers) - array for even integers
 * 		odd_count (integer) - length of odd integer array
 * Preconditions: <none>
 * Postcondtions: <none>
 */

void separate_even_odd_arrays(const int numbers[], int ct, int even[], int& count_even,
			      int odd[], int& count_odd) {
  //separating into an even and odd array
  for (int index = 0; index < ct; index++) {
	//if even add integer to even array
	if (numbers[index] % 2 == 0) 
	{
	  even[count_even] = numbers[index];
	  count_even++;	// increment index each time value is added
	} //end if 
	//else, it's an odd integer so add to odd integer array
	else {
	  odd[count_odd] = numbers[index];
	  count_odd++;	// increment index each time value is added
	} // end else
  } //end for statement
} // end separate_even_odd_array