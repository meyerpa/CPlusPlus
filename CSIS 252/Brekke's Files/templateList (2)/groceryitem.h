// Filename:     groceryitem.h
// Author:       Dan Brekke

// Description
// This file contains the specification for the GroceryItem class

#ifndef _GROCERYITEM_H_
#define _GROCERYITEM_H_
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class GroceryItem
{
   public:
      GroceryItem(string item = "",int num = 0);
      string GetItem() const;
      void SetItem(string);
      int GetCount() const;
      void SetCount(int);
      bool operator==(const GroceryItem&);
   private:
      string itemname;
      int count;
};

ostream& operator << (ostream&,const GroceryItem&);
#endif

