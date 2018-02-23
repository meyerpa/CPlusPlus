// File: 	read.cpp
// Author: 	Paige Meyer
// Assignment: 	8
// Class: 	CSIS 252
// Date: 	3/26/2015

// Description: this function will read integers from a file and insert those integers
// to structs

#include <fstream>
#include <string>
#include "constants.h"
#include "personType.h"
using namespace std;

/*
 * Function: 	read
 * Description: reads names and dates separated by return character from file 
 * 	until the end of file
 * Input: 	<none>
 * Output: 	people (array of personType) - containing the data for names and brithdays
		count (int) - length of the array of personType
 * Preconditions: input file, people, needs to contain information with name 
 * 	(string) and birthday(date) separated by return characters iteratively; it also 
 * 	needs to end with a return character.
 * Postcondtions: Will update the array called people with values in the file, if any.
 */


int read(personType people[]) {
  ifstream file;
  int count = 0;
  
  // open file
  file.open(INPUT_FILE_NAME);
  
  // extract information from file
  do {
    // create personType of person each time
    string tmp_name;
    int tmp_month, tmp_day, tmp_year;
    char tmp_char;
    
    getline(file, tmp_name);
    file >> tmp_month >> tmp_char >> tmp_day >> tmp_char >> tmp_year;
    file.ignore(80, '\n');
    
    // add each person to array of personTypes
    people[count] = personType(tmp_name, dateType(tmp_month, tmp_day, tmp_year));
    
    // increment count if it's not the end of the file
    if (!file.eof()){
      count ++;
    } // end if
  } while(!file.eof() && count < ARRAY_SIZE);
  
  return count; 		// return the length of the array
} // end read