// file: program_description
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/27/2015

#include <iostream>
#include "constants.h"
using namespace std;

/*
 * Function: 	print
 * Description: will print the description for the program
 * Input: 	<none>
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

void program_description() {
  
  // Describe to user what program does
  
  cout << "\n\nThis program will take integers the user inputs, up to " << array_size << " integers long. \n";
  cout << "It will then output: \n \t 1. The integers separated in ascending order \n \t 2. ";
  cout << "The integers separated by spaces in descending order \n \t 3. Average value \n \t ";
  cout << "4. Median value \n \t 5. Number of integers that is equivalent or less than or greater than ";
  cout << "the average \n \t 6. Same as previous using a different algorithm \n \t 7. Information for: ";
  cout << " even integers equal or less than the average, even integers greater \n \t \t than the average, ";
  cout << "odd integer equal to or less than the average, and even integers \n \t \t greater than the average";
  cout << " \n \t 8. Separate and display two arrays, one for evens and another for the odds.";
  cout << endl << endl;
  
} // end program_description