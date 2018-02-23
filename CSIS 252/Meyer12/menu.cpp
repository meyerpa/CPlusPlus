// File: menu.cpp
// Name: Paige Meyer
// Date: 04/28/2014
// Assignment: 12

// Description: will display and use menu for assignment 12

#include <iostream>
#include <fstream>
#include <string>
#include "bst.h"
#include "phoneEntry.h"
using namespace std;

// function to write each phoneEntry
void visit(ostream& file, phoneEntry& entry) {
  file << entry.getName() << ';' << entry.getPhone() << "\n";
} // end write


void menu(BST<phoneEntry> phoneBook, int argc, char *argv[]) {
  string prompt = "\n0. exit\n1. Print the phonebook\n2. Add an  entry\n3. Delete an entry\n";
  string prompt2 = "Please enter an integer with your choice: ";
  int resp;
  string tmp_name, tmp_phone;
  
  // ask before loop
  cout << prompt << prompt2;
  cin >> resp;
  while (resp != 0) {
    // check that it 1, 2 or 3
    if (resp == 1) {
      // print phonebook
	  phoneBook.inorderTraversal();
      //phoneBook.writefile(argv[1], visit);
    } // end if
    
    else if (resp == 2) {
      // ask for name and phone
      cout << endl << "Please enter a name to add: ";
      cin >> tmp_name;
      cout << endl << "Please the phone number of " << tmp_name << ": ";
      cin >> tmp_phone;
      // add entry
      phoneBook.insert(phoneEntry(tmp_name, tmp_phone));
    } // end else if
    
    else if (resp==3) {
      cout << endl << "Please enter a name to delete: ";
	  cin.ignore(80, '\n');
      getline(cin, tmp_name);
      // delete entry
      phoneBook.deleteNode(phoneEntry(tmp_name));
    } // end else if
    
    else {
      // bad input, so ouput response
      cout << endl << "Bad input. Try again.\n";
    } // end else
	// ask for input again
	cout << prompt <<prompt2;
	cin >> resp;
  } // end while
} // end menu
