// File: 	read.cpp
// Author: 	Paige Meyer
// Assignment: 	12
// Class: 	CSIS 252
// Date: 	4/28/2015

// Description: this function will read input from a file and store information 
//		to an orderedList of studentType

#include <fstream>
#include <iostream>
#include <string>
#include "bst.h"
#include "phoneEntry.h"
using namespace std;

/*
 * Function: 	read
 * Description: reads names and phone numbers separated by a semicolon from a file and
 * Input: 	file (ifstream) - file to read the data from
 * Output: 	stu (orderedList of studentType) - containing the data for names and scores
 * Preconditions: input file needs to contain information with name (string) and 
 *       tmp_phone(string) separated by return ; iteratively;
 *       it also needs to end with a return character.
 * Postconditions: Will update the array called people with values in the file, if any.
 */

void read(BST<phoneEntry>& tree, ifstream& file) {
  string tmp_name, tmp_phone;
  
  // extract information from file
  getline(file, tmp_name, ';');   // get semicolon-delimeted line
  getline(file, tmp_phone);
  
  while(!file.eof()) {
    // add each student to array
    tree.insert(phoneEntry(tmp_name, tmp_phone));
    
	getline(file, tmp_name, ';');   // get semicolon-delimeted line
	getline(file, tmp_phone);
  } // end while
  // print phonebook
  tree.inorderTraversal();
} // end read