// File: 	read.cpp
// Author: 	Paige Meyer
// Assignment: 	7
// Class: 	CSIS 252
// Date: 	3/9/2015

// Description: this function will read integers from a file and insert those integers
// to structs

#include <ifstream>
#include <string>
#include "constants.h"
#include "decl.h"
using namespace std;

/*
 * Function: 	read
 * Description: reads names and dates separated by return character from file 
 * 	until the end of file
 * Input: 	<none>
 * Output: 	name_array (array of structs) - containing the data for names and ages
		count (int) - length of the array of structs
 * Preconditions: input file, data, needs to contain information with name 
 * 	and then string separated by return characters iteratively; it also 
 * 	needs to end with a return character.
 * Postcondtions: Will update the name_array with values in the data file, if any.
 */


int read(struct person name_array[]) {
  ifstream file;
  int count = 0;
  
  // open file
  file.open(INPUT_FILE_NAME);
  
  // extract information from file
  do {
    // create struct of person each time
    person tmp_person;
    getline(file, tmp_person.name);
    file >> tmp_person.age;
    file.ignore(80, '\n');
    
    // add each person to array of persons
    name_array[count] = tmp_person;
    // increment count if it's not the end of the file
    if (!file.eof()){
      count ++;
    } // end if
  } while(!file.eof() && count < ARRAY_SIZE);
  
  return count; 		// return the length of the array
} // end read