// Filename:     groceryitem.cpp
// Author:       Dan Brekke

// Description
// This file contains the implementation for the GroceryItem class

#include "groceryitem.h"

GroceryItem::GroceryItem(string item, int num)
{
   itemname=item;
   count=num;
}

string GroceryItem::GetItem() const
{
   return itemname;
}

void GroceryItem::SetItem(string item)
{
   itemname=item;
}

int GroceryItem::GetCount() const
{
   return count;
}

void GroceryItem::SetCount(int num)
{
   count=num;
}

bool GroceryItem::operator==(const GroceryItem& other)
{
   return GetItem() == other.GetItem();
}

ostream& operator << (ostream& o, const GroceryItem& item)
{
   o << item.GetItem();
   o << " (" << item.GetCount() << ")";
   return o;
}

