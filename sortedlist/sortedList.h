// Author: Paige Meyer
// Class: CSIS 352
// Date 04/03/2016


#ifndef _SORTEDLIST_H_
#define _SORTEDLIST_H_

#include <list>
#include <stdexcept>
using namespace std;



enum orderType {ASCENDING, DESCENDING};

// namespace GraphNameSpace {
  
template <class Type> 
class SortedList : public list<Type> {
  public:
    explicit SortedList(orderType tmp);
    // method - constructor
    // description - construct a new SortedList object
    // preconditions - <none>
    // postconditions - SortedList object created and initialized
    // method input - orderType e.g. ASCENDING or DESCENDING
    // method output - <none>
    
    SortedList();
     // method - constructor
    // description - construct a new SortedList object
    // preconditions - <none>
    // postconditions - SortedList object created and initialized
    // method input - <none>
    // method output - <none>
    
    void insert(Type tmp);
    // method - insert
    // description - insert a object into the list in the proper place
    // preconditions - parameter is the same type as the list
    // postconditions - SortedList object will include another object
    // method input - tmp (Type)
    // method output - <none>
    
    void traverse( void (*function) (const Type& item));// method - insert
    // description - traverses the tree based on the function
    // preconditions - will point to a function
    // postconditions - <none> unless specified by the function
    // method input -  a pointer to a function
    // method output - <none> unless specified by the function
    
    void reset();
    // method - reset
    // description - deletes all objects in the list and sets size to 0
    // preconditions - <none>
    // postconditions - SortedList object will be empty
    // method input - <none>
    // method output - <none>
    
    const Type& current() const;
    // method - current
    // description - deletes all objects in the list and sets size to 0
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - The current object in the list (const Type&)
    
    void next();
    // method - next
    // description - Points to the next objects in the list.  
    //		Throws range_error.
    // preconditions - <none>
    // postconditions - Points to next object in list.
    // method input - <none>
    // method output - <none>
    
    bool endOfList() const;
    // method - endOfList
    // description - Returns boolean if pointer is at the end.
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - If pointer is at the end of the list (bool)
    
    void prev();
    // method - prev
    // description - Points to the previous object in the list. 
    //		Throws range_error.
    // preconditions - <none>
    // postconditions - Points to previous object in list.
    // method input - <none>
    // method output - The current objects in the list (const Type&)
    
    bool inList(const Type& tmp) const;
    // method - inList
    // description - Returns if an objects is in the list.
    // preconditions - <none>
    // postconditions - <none>
    // method input - An object (Type)
    // method output - If a object is in the list (bool)
    
    int count(const Type& tmp) const;
    // method - count
    // description - Counts the number of objects in the list.
    // preconditions - <none>
    // postconditions - <none>
    // method input - An object (Type)
    // method output - The number of times an object is in the list (int)
    
    void erase(const Type& tmp);
    // method - erase
    // description - Erases each object in the list with same value as parameter
    // preconditions - <none>
    // postconditions - List deletes every instance of parameter
    // method input - An object (Type)
    // method output - <none>
    
    void reverse();
    // method - reverse
    // description - Reverses the list and changes order.
    // preconditions - <none>
    // postconditions - List is reveresed.
    // method input - <none>
    // method output - <none>
    
    void merge(const SortedList<Type>& other);
    // method - merge
    // description - Merges lists togther. Other list will be unchanged.
    // preconditions - <none>
    // postconditions - Lists adds each value in other list.
    // method input - Another list (SortedList<Type>)
    // method output - <none>

  private:
    orderType order;
    typename list<Type>::iterator spot;
};

template<class Type> void SortedList<Type>::merge(const SortedList<Type>& other) {
  while (!other.empty()) {
    this->insert(other.front());
    other.pop_front();
  }
}

template<class Type> void SortedList<Type>::erase(const Type& tmp) {
  for (typename list<Type>::iterator it = list<Type>::begin();
		 it!=list<Type>::end(); it++) {
    if ((*it)==tmp) {
      if (spot == it) {
	if (spot!=list<Type>::end())
	  spot++;
	else if (spot!=list<Type>::begin())
	  spot--;
	else
	  spot=list<Type>::begin();
      }
      list<Type>::erase(it);
      return;
    } // end outer if
  }// end for
}

template<class Type> void SortedList<Type>::reverse() {
  if (order==ASCENDING) 
    order = DESCENDING;
  else
    order = ASCENDING;
  list<Type>::reverse();
}

template<class Type> bool SortedList<Type>::inList(const Type& tmp) const {
  bool found = 0; // default to not found
  // inefficient
  for (typename list<Type>::const_iterator it = list<Type>::begin();
       it!=list<Type>::end(); ++it)
    if ((*it)==tmp) 
      found = 1;
  return found;
}

template<class Type> int SortedList<Type>::count(const Type& tmp) const {
  int num = 0;
  for (typename list<Type>::const_iterator it = list<Type>::begin();
       it!=list<Type>::end(); it++) {
    if((*it)==tmp)
      num++;
  }
  return num;
}

template<class Type> void SortedList<Type>::traverse (
            void (*function) (const Type& item) ) {
  for (typename list<Type>::iterator it = list<Type>::begin(); 
	    it != list<Type>::end(); it++)
    function((*it));
}

template<class Type> SortedList<Type>::SortedList(orderType tmp) {
  order = tmp;
  spot = list<Type>::begin();
}

template<class Type> SortedList<Type>::SortedList() {
  order = ASCENDING;
  spot = list<Type>::begin();
} 

template<class Type> void SortedList<Type>::insert(Type tmp) {
  // Takes care of ascending case
  if (order==ASCENDING) {
    // iterate through and find proper place
    typename list<Type>::iterator insert = list<Type>::end();
    for (typename list<Type>::iterator it = list<Type>::end();
		 it!=list<Type>::begin(); it--) {
      if ((tmp<(*it))) {
	insert = it;
      }
    }
    // test if it should go first because that wasnt' handled in iteraton
    if (list<Type>::size() >0 && list<Type>::front()< tmp)
      list<Type>::insert(insert, tmp); 
    else
      list<Type>::push_front(tmp);
  }
  // Takes care of descending
  else {
    // iterate through and find proper place
    typename list<Type>::iterator insert = list<Type>::end();
    for (typename list<Type>::iterator it = list<Type>::end();
           it!=list<Type>::begin(); it--) {
      if (((*it)<tmp)) {
	insert = it;
      }
    }
    // test if it should go first because that wasn't handled in iteraton
    if (list<Type>::size()>0 && list<Type>::front()>tmp)
      list<Type>::insert(insert, tmp); 
    else
      list<Type>::push_front(tmp);
  }
}

// For holding place in list
template<class Type> void SortedList<Type>::reset() {
  spot = list<Type>::begin();
}

template<class Type> bool SortedList<Type>::endOfList() const {
  return (spot==list<Type>::end());
}

template<class Type> const Type& SortedList<Type>::current() const {
  if (endOfList())
    throw range_error("attempt to access past end of list");
  (*spot);
}

template<class Type> void SortedList<Type>::next() {
  if (spot++ == list<Type>::end()) 
    throw range_error("attempted next already past end of the list");
}

template<class Type> void SortedList<Type>::prev() {
  if (spot == list<Type>::begin()) 
    throw range_error("attempt to move before the beginning of the list");
  else 
    spot--;
}

#endif
