// File: 	read
// Author: 	Paige Meyer
// Assignment: 	6
// Class: 	CSIS 252
// Date: 	3/5/2015

// Description: this function will read integers from a file and insert those integer

#include <fstream>
#include "constants.h"
using namespace std;

/* 
 * Function: 	read
 * Description: This function will read integers from a file and insert those integer
 * to the array, will return the length of the array
 * Input: 	numbers (array of int) - empty array to insert values
 * 		file (fstream) - file to read from
 * Output: 	count (int) - the number of values read and stored into the array
 * Pre-condtions: <none>
 * Post-conditons: array with updated values
 */

int read(int numbers[], ifstream& file) {
  int count = 0;
  int tmp_num;
    
  // read integers from file and put in array until the end of file
  
  file >> tmp_num;
  while (!file.eof()) {
    if (count < array_size) { 
      numbers[count] = tmp_num;
    } // end if
    count++;
    file >> tmp_num;
  } // end while loop
  
  return count;
  
}// end read