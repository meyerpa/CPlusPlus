// File: 	read.cpp
// Author: 	Paige Meyer
// Assignment: 	10
// Class: 	CSIS 252
// Date: 	4/16/2015

// Description: this function will read input from a file and store information 
//		to an orderedList of studentType

#include <fstream>
#include <iostream>
#include <string>
#include "constants.h"
#include "studentType.h"
#include "orderedList.h"
using namespace std;

/*
 * Function: 	read
 * Description: reads names and dates separated by return character from file 
 * 	until the end of file
 * Input: 	file (ifstream) - file to read the data from
 * Output: 	stu (orderedList of studentType) - containing the data for names and scores
 * Preconditions: input file needs to contain information with max score(int),
 *       name (string) and score_recieved(int) separated by return characters iteratively;
 *       it also needs to end with a return character.
 * Postconditions: Will update the array called people with values in the file, if any.
 */

void read(orderedList<studentType>& stu, ifstream& file) {
  int max_score = 0, tmp_score;  
  string tmp_name;
  
  // extract information from file
  file >> max_score;      // get max_score, if none, will set to 0
  studentType::setMaxScore(max_score);

  file.ignore(80, '\n');
  getline(file, tmp_name);
  
  while(!file.eof() && !stu.isFull()) {
    file >> tmp_score;
    // add each student to array
    stu.insert(studentType(tmp_score, tmp_name));
    
    file.ignore(80, '\n');
    getline(file, tmp_name);

  } // end while
  
} // end read