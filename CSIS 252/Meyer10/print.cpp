// File: 	print.cpp
// Author: 	Paige Meyer
// Assignment: 	10
// Class: 	CSIS 252
// Date: 	4/17/2015

// Description: this function will print a title for name and scores and then
//              it will formattedly print each person on a new line underneath the title

#include <fstream>
#include <iomanip>
#include "constants.h"
#include "studentType.h"
#include "orderedList.h"
using namespace std;

/*
 * Function: 	print
 * Description: prints the array with formatting
 * Input: 	stu (orderedList of studentType) - containg the data for names and scores
		count (int) - length of the array
 * Output: 	<none>
 * Preconditions: the orderedList is correct and the file is open
 * Postcondtions: <none>
 */


void print(const orderedList<studentType>& stu, ofstream& file) {
  studentType tmp_stu;
  
  //print Maximum score
  file << "Maximum score: " << studentType::getMaxScore() << endl;
  
  // print heading
  file << left << setw(WIDTH_NAME) << "NAME" <<' ' << setw(WIDTH_SCORE);
  file << "SCORE" << ' ' << setw(WIDTH_PCT) << "  PCT" << ' ' << setw(WIDTH_GRADE);
  file << "GRADE" << endl;

  // print divider
  file << setfill(CHAR_FILL_LINE) << setw(WIDTH_NAME) << CHAR_FILL_LINE <<' ';
  file << setfill(CHAR_FILL_LINE) << setw(WIDTH_SCORE) << CHAR_FILL_LINE << ' ';
  file << setfill(CHAR_FILL_LINE) << setw(WIDTH_PCT) << CHAR_FILL_LINE << ' ';
  file << setfill(CHAR_FILL_LINE) << setw(WIDTH_GRADE) << CHAR_FILL_LINE << ' ';
  file << setfill(' ') << endl;

  // show two decimal places
  file << fixed << showpoint << setprecision(2);
  
  // print each student, in descedning order
  for (int index = stu.listSize() - 1; index > 0 ; index--) {
	stu.retrieveAt(index, tmp_stu); // get student
	file << left << setw(WIDTH_NAME) << tmp_stu.getName() << ' ';
	file << right << setw(WIDTH_SCORE) << tmp_stu.getScore() << ' ';
	file << setw(WIDTH_PCT) << tmp_stu.getPercent() << ' ';
	file << setw(WIDTH_GRADE) << tmp_stu.getLetterGrade() << ' ';
    file << endl;
  } // end for loop
} // end print