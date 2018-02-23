// file: print_array_ascending
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015

/*
 * Function: 	print
 * Description: will print the array separated by spaces in ascending order
 * Input: 	numbers (array of int) - used to find values
 * 		count (int) - length of array
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

#include <iostream>
using namespace std;

void print_array_ascending(const int numbers[], int ct) {
  
  // iterate through the array append string with each value separated by a space
  for (int i = 0 ; i < ct; i++) {
    cout << numbers[i] << " ";
  } // end for loop

} // end print_array_ascending