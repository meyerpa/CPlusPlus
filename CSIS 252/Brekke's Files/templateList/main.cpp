// Filename:     main.cpp
// Author:       Dan Brekke

// Description
// This file contains the main function.  It tests the arrayListType class

#include <string>
#include <iostream>

// This program tests the arrayListType class

#include <iostream>
#include "arrayListType.h"
#include "groceryitem.h"
#include "prototypes.h"
using namespace std;

int main()
{
   arrayListType<GroceryItem> grocerylist;
   int choice;
   
   choice = menu();
   while (choice != 0)
   {
      switch (choice)
      {
         case 1 : // add an item
                  addItem(grocerylist);
                  break;
         case 2 : // delete an item
                  deleteItem(grocerylist);
                  break;
         case 3 : // print the grocery list
                  grocerylist.print();
                  break;
         case 4 : // display the number of entries in the list
                  cout << "items in list = "
                       << grocerylist.listSize() << endl;;
                  break;
         case 5 : // display the total number of items
                  cout << "total items in the list is "
                       << totalItems(grocerylist) << endl;
                  break;
         case 6 : // display the number of a particular item
                  totalOfItem(grocerylist);
                  break;
         default : cout << "invalid option\n";
      }
      choice = menu();
   }
   return 0;
}
