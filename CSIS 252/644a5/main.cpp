// file: main
// name: Paige Meyer
// assignment: 5
// class: CSIS 252
// date: 2/20/2015

/* Program Description:
  This program will take integers the user inputs, up to 10 integers long.
  It will then output:
         1. The integers separated in ascending order
         2. The integers separated by spaces in descending order
         3. Average value
         4. Median value
         5. Number of integers that is equivalent or less than or greater than the average
         6. Same as previous using a different algorithm
         7. Information for:  even integers equal or less than the average, even integers greater
                 than the average, odd integer equal to or less than the average, and even integers
                 greater than the average
         8. Separate and display two arrays, one for evens and another for the odds and then display those arrays.
*/

#include <iomanip>
#include <iostream>
#include "constants.h"
#include "prototypes.h"
using namespace std;


/* Function: 	main
 * Description: the main function of the program that calls other functions
 * Input:  	<none>
 * Output: 	<none>
 * Preconditions: <none> 
 * Postconditions: <none>
 */

int main() {

  // Variables
  
  int integers[array_size];			// create array of integers
  int tmp_number;				// temporary value for user input to the array
  int count = 0;				// create count for each time a value is added to the array for error-checking
  int sum;					// make a sum for calculating average
  double average = 0;				// create average for saving average of the array
  int ct_less_avg = 0;				// create a count for numbers less than or equal to the average
  int ct_greater_avg = 0;			// create a count for numbers greater than the average
  int ct_even_less_avg = 0;			// create a count for even numbers less than or equal to the average
  int ct_even_greater_avg = 0;			// create a count for  even numbers greater than the average
  int ct_odd_less_avg = 0;			// create a count for odd numbers less than or equal to the average
  int ct_odd_greater_avg = 0;			// create a count for odd numbers greater than the average
  int even_integers[array_size];		// initalizing even integer
  int odd_integers[array_size];			// instantiating odd integers arrar
  int index_even_integers = 0;			// instantiation count for index of even integers array
  int index_odd_integers = 0;			// instantiation count for index of odd integers array
  int index_less_avg = 0;			// variable for saving for count less than average
  int index_greater_avg = 0;			// variable for saving for count greater than average

  
  // Format to two decimal places
  
  cout << fixed << showpoint << setprecision(2);
  
  // returns nothing
  program_description(); // print description for the program
  
  
  count = input_integers_to_array(integers); // insert values into the integer array based on user input
  
  // Number 1
  cout << "1. Integer List in ascending order: ";
  print_array_ascending(integers, count);
  cout << endl;
  
  
  // Number 2
  cout << "2. Integer List in descending order: ";
  print_array_descending(integers, count);
  cout << endl;
  
  
  // Number 3
  // calculating the average value in the array
  
  cout << "3. Average Value: ";
  average = average_value(integers, count);
  cout << average << endl;
  
  // Number 4
  // calculating the median value in the array

  cout << "4. Median Value: ";
  // format to one decimal place
  cout << fixed << showpoint << setprecision(1);
  cout << median_value(integers, count) << endl;
    
  
  
  // Number 5
  // printing values for number 5
  cout << "5. Number of values less than or equal to the average: ";
  //call function and update values
  count_less_average(integers, count, average, ct_less_avg, ct_greater_avg);
  cout << ct_less_avg << endl;
  cout << "   Number of values greater than the average: ";
  cout << ct_greater_avg << endl;
  
  
  // Number 6:
  index_count_less_average(integers, count, average, index_less_avg, index_greater_avg);
  // printing output for number 6
  cout << "6. Number of values less than or equal to the average: ";
  cout << index_less_avg <<endl;
  cout << "   Number of values greater than the average: ";
  cout << index_greater_avg << endl;
  
  
  // Number 7.
  
  even_odd_counts(integers, count, average, ct_even_less_avg, ct_even_greater_avg, ct_odd_less_avg, ct_odd_greater_avg);

  //printing output for number 7
  cout << "7. Information about even and odd integers: " << endl;
  
  cout << "\tNumber of even values less than or equal to the average: ";
  cout << ct_even_less_avg << endl;
  cout << "\tNumber of even values greater than the average: ";
  cout << ct_even_greater_avg << endl;
  cout << "\tNumber of odd values less than or equal to the average: ";
  cout << ct_odd_less_avg << endl;
  cout << "\tNumber of odd values greater than the average: ";
  cout << ct_odd_greater_avg << endl;

  


  /*
  cout << "\tNumber of even values less than or equal to the average: ";
  cout << even_less_equal_average(integers, count, average) <<endl;
  cout << "\tNumber of even values greater than the average: ";
  cout << even_greater_average(integers, count, average) <<endl;
  cout << "\tNumber of odd values less than or equal to the average: ";
  cout << odd_less_equal_average(integers, count, average) <<endl;
  cout << "\tNumber of odd values greater than the average: ";
  cout << odd_greater_average(integers, count, average) <<endl;
  */
  
  // Number 8.
  separate_even_odd_arrays(integers, count, even_integers, index_even_integers, odd_integers, index_odd_integers);

  //display arrays
  cout << "8. Even array: ";
  //iterate through the even array and display
  print_array_ascending(even_integers, index_even_integers);
  cout << endl << "   Odd array: ";			//new line for odd integer array
  print_array_ascending(odd_integers, index_odd_integers);
  cout << endl << endl << "---End of Program---" << endl;

  
  return 0; 					//end program
  
} //end main
