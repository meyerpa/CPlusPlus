// File: 	read.cpp
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
 * Output: 	count (int) - the number of values read and stored in the array
 * Pre-condtions: <none>
 * Post-conditons: array with updated values
 */

int read(int numbers[], ifstream& file) {
  int count = 0;
  int tmp_num;
    
  // read integers from file and put in array until the end of file
  
  file >> tmp_num;
  while (!file.eof()) {
    // add it to the array if less than the max array size and increment count
    if (count < ARRAY_SIZE) { 
      numbers[count] = tmp_num;
      count++;
    } // end if
    file >> tmp_num;
  } // end while loop
  
  return count;
  
}// end read