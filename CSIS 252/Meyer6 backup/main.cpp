// File: 	main
// Author: 	Paige Meyer
// Assignment: 	6
// Class: 	CSIS 252
// Date: 	3/5/2015

// Description: calls other functions and writes values to files

#include <fstream>
#include <iomanip>
#include "constants.h"
#include "prototypes.h"
using namespace std;

/*
 * Function: 	main
 * Description: calls other functions and writes values to files
 * Input: 	<none>
 * Output: 	<none>
 * Preconditions: <none>
 * Postcondtions: <none>
 */

int main() {
  int count, integers[array_size];
  ifstream input_file;
  ofstream output_file;
  
  input_file.open(read_file_name);			// open file for input
  
  count = read(integers, input_file); 			// put integers into array
  sort(integers, count); 				// sort the array
  
  input_file.close();					//close input_file
  
  output_file.open(save_file_name);			// open file for output
  
  output_file << fixed << showpoint << setprecision(1);	// format to one decimal place
  
  //output information
  output_file << "average: " << average(integers, count) << endl;
  output_file << "median: " << median(integers, count) << endl;
  output_file << "mode: " << mode(integers, count) << endl;
  
  file_print(integers, count, output_file);
  
  output_file.close();					// close file
  
  return 1;
  
} // end main
  


