// Filename:     menu.cpp
// Author:       Dan Brekke

// Description
// This file contains the menu function.  It will display a list of choices
// and return the choice the user selected.
#include <iostream>
using namespace std;
int menu()
{
   char ch;
   int choice;
   cout << endl;
   cout << "0. exit program\n";
   cout << "1. enter an item\n";
   cout << "2. delete an item\n";
   cout << "3. print the list\n";
   cout << "4. how many in current list\n";
   cout << "5. calculate total items\n";
   cout << "6. how many of an item\n";
   cout << "\nchoice? ";
   cin >> choice;
   cin.ignore(80,'\n');
   return choice;
}

