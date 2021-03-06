// file: print_array_descending
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015



#include <iostream>
using namespace std;

/*
 * Function: 	print
 * Description: will print the integer array separated by spaces in descending order
 * Input: 	numbers (array of int) - used to find values
 * 		count (int) - length of array
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

void print_array_descending(const int numbers[], int ct) {
  
  // iterate through the list and print values in descending order
  for (int i = ct; i > 0; i--) {
    cout << numbers[i-1] << " ";	// prints each number in the array separated by spaces
  } // end for loop

} // end print_array_descending