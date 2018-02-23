// File: 	print.cpp
// Author: 	Paige Meyer
// Assignment: 	8
// Class: 	CSIS 252
// Date: 	3/12/2015

// Description: this function will print a title for name and birthday and then
//              it will formattedly print each person on a new line underneath the title

#include <iostream>
#include <iomanip>
#include "constants.h"
#include "personType.h"
#include "dateType.h"
using namespace std;

/*
 * Function: 	print
 * Description: prints the array with formatting
 * Input: 	tmp_people (array of personType) - containing the data for names and birthdays
		count (int) - length of the array
 * Output: 	<none>
 * Preconditions: count for length of array is correct and so is the array
 * Postcondtions: <none>
 */


void print(const personType tmp_people[], int count) {
  // print heading
  cout << left << setw(WIDTH_NAME) << "NAME" << setw(WIDTH_BIRTHDAY);
  cout << " BIRTHDAY" << endl;

  // print divider
  cout << setfill(CHAR_FILL_LINE) << setw(WIDTH_NAME) << CHAR_FILL_LINE;
  cout << ' ' << setw(WIDTH_BIRTHDAY) << CHAR_FILL_LINE; 
  cout << setfill(' ') << endl;

  // print array
  for (int index = 0; index < count; index++) {
    cout << left << setw(WIDTH_NAME) << tmp_people[index].getName() << ' '; 
    cout << tmp_people[index].getBirthday();
    cout << endl;
  } // end for loop
} // end print array