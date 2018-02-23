// File: main.cpp
// Name: Paige Meyer
// Date: 04/28/2014
// Assignment: 12

// Description: this will call other functions for assignment 12

#include <iostream>
#include <fstream>
#include "prototypes.h"
#include "bst.h"
#include "phoneEntry.h"
using namespace std;

int main(int argc, char *argv[]) {
  ifstream in;
  ofstream out;
  BST<phoneEntry> phoneBook;
  
  // open file 
  if (argc == 2) {
	  //open file and read from it
	  in.open(argv[1]);
	  if (!in.fail()){
		  // read names and phones from file into 
		  read(phoneBook, in);
		  in.close();
	  } // end inner if
  }// end outer if
    
  // display options and handle accordingly until user wants to exit
  menu(phoneBook, argc, argv);
  
  cout << endl << "-----End of Program-----" << endl;
  
  return 0;
} // end main