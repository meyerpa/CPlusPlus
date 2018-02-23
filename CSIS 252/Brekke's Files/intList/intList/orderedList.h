#ifndef _ORDEREDLIST_H_
#define _ORDEREDLIST_H_

#include "arrayListType.h"

template <class T>
class orderedList : public arrayListType<T>
{
   public:
      orderedList(int size=100);
      void insert(const T& item);
};

template <class T>
orderedList<T>::orderedList(int size) : arrayListType<T>(size)
{ }

template <class T>
void orderedList<T>::insert(const T& item)
{
   bool found=false;
   int pos=0;
   T value;
   while (!found && pos < arrayListType<T>::listSize())
   {
      arrayListType<T>::retrieveAt(pos,value);
      if (value < item)
         pos++;
      else
         found=true;
   }
   arrayListType<T>::insertAt(pos,item);
   
}

#endif
