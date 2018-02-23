/// Name: Paige Meyer
// file: Array.h
// Class: CSIS 352
// date 02/29/2016

#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>
#include <stdexcept>
using namespace std;

namespace ArrayNameSpace {

template<class elemType> class Array {
  public:
    
    // method - constructor
    // description - construct a new Array object
    // preconditions - <none>
    // postconditions - Array object created and initialized
    // method input - stop int
    // method output - <none>
    Array<elemType>(int stop=0);
    
    // method - constructor
    // description - construct a new Array object
    // preconditions - <none>
    // postconditions - Array object created and initialized
    // method input - start int, stop int
    // method output - <none>
    Array<elemType>(int start, int stop);

    // method - constructor
    // description - construct a new Array object
    // preconditions - <none>
    // postconditions - Array object created and initialized
    // method input - start int, stop int
    // method output - <none>
    Array<elemType>(char start, char stop);
   
   // method - getLength
    // description - returns the maximum number of elements that can be in the Array
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - the maximum length of the Array (int)
    int getLength() const;
 
    // method - getStartIndex
    // description - Returns the start index of the Array
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - the start index of the Array (int)
    int getStartIndex() const;
 
    // method - Resize
    // description - resizes the array to a new lenght
    // preconditions - <none>
    // postconditions - Array object will have a new maximum length
    // method input - new length (int)
    // method output - <none>
    void Resize(int t_length);

    // method - indexing operator
    // description - Returns an object at a certain index in the Array
    // preconditions - index of array (int)
    // postconditions - <none>
    // method input - index
    // method output - an element in the list
    elemType& operator[](int index);
    
    // method - indexing operator
    // description - Updates an object at a certain index in the Array
    // preconditions - index of array (int) 
    // postconditions - <none>
    // method input - index
    // method output - an element in the list
    const elemType& operator[](int index) const;

    // method - indexing operator
    // description - Returns an object at a certain index in the Array
    // preconditions - index of array (char)
    // postconditions - <none>
    // method input - index
    // method output - an element in the list
    elemType& operator[](char index);
    
    // method - indexing operator
    // description - Updates an object at a certain index in the Array
    // preconditions - index of array (char) 
    // postconditions - <none>
    // method input - index
    // method output - an element in the list
    const elemType& operator[](char index) const;
    
    
//    ~Array<elemType>(); // destructor
//    Array<elemType> (const Array<elemType>&); // copy constructor
    
    const Array<elemType> operator=(const Array<elemType> other);
    // overloading assignment operator
//    Array<elemType>& operator=(const Array<elemType> other);

    // overloading operator ==
    bool operator==(const Array<elemType> tmp) const;
    bool operator<(const Array<elemType> tmp) const; 
    bool operator<=(const Array<elemType> tmp) const;
    bool operator>(const Array<elemType> tmp) const; 
    bool operator>=(const Array<elemType> tmp) const;
    bool operator!=(const Array<elemType> tmp) const; 
    
 
 
     
  private:
    elemType *list;  			// pointer to hold the list elements
    int start_index;			// stores the starting index
    int length;  			// stores maximum length of the list
    
}; // end class


// start implementation

// constructors

template<class elemType> Array<elemType>::Array(int stop) {
  if (stop<0)
    throw range_error("range_error array length is less than 0");
  length = stop;
  start_index = 0;
  list = new elemType[length];
}

template<class elemType> Array<elemType>::Array(int start, int stop) {
  if(stop<start)
    throw range_error("range_error array stop is before start");
  length = stop - start;
  start_index = start;
  list = new elemType[length];
}

template<class elemType> Array<elemType>::Array(char start, char stop) {	
  if(stop<start)
    throw range_error("range_error array stop is before start"); 
  length = static_cast<int>(stop)-static_cast<int>(start);
  start_index = static_cast<int>(start);
  list = new elemType[length];
}

/*
template<class elemType> Array<elemType>::~Array() {
  delete [] list;
  list = NULL;
}
*/


/*
template<class elemType> Array<elemType>::Array(const Array<elemType>& other) {
  list = new int[other.getLength()];
  length = other.getLength();
  start_index = other.getStartIndex();
  for (int index = getStartIndex(); index <= getStartIndex() + other.getLength(); index++) 
    (*this)[index] = other[index];
//  for (int i=0; i<count; i++)
//    thelist[i] = list.thelist[i];
}
*/

template<class elemType> void Array<elemType>::Resize(int t_length) {
  if (t_length<0) 
    throw range_error("range_error: array size cannot be less than 0.");
  length = t_length;
}


// indexing operators

template<class elemType> 
elemType& Array<elemType>::operator[](int index) {
  // throw an exception if outside the array boundaries
  
  //cerr << "index: " << index << " length: " << length << " length: "<< length <<endl;
   if (length<1)
//    cerr << "max length is too small\n";
    throw out_of_range("out_of_range: index out of range");
   // cerr << "start index: " << start_index << " index: " << index <<'\n';
   // cerr << (start_index > index) << ' ' << (start_index+length < index)<<'\n';  
  if (start_index > index || start_index+length < index)
//    cerr << "index is off boundaries";
    throw out_of_range("out_of_range: index out of range");
  return list[index];
  
}

// the following method allows a const pass by reference argument
// For example: void func(const Array& array)
template<class elemType> 
const elemType& Array<elemType>::operator[](int index) const {
  // throw an exception if outside the array boundaries
  // if (length>=length)
//    cerr << "max length is too small\n";
  //  throw out_of_range("out_of_range: cannot insert into a full list");
   // cerr << "start index: " << start_index << " index: " << index <<'\n';
   // cerr << (start_index > index) << ' ' << (start_index+length < index)<<'\n';  
  if (start_index > index || start_index+length < index)
//    cerr << "index is off boundaries";
    throw out_of_range("out_of_range: index out of range");
   //cerr << "index: " << index << " length: " << length << " length: "<< length <<endl;
  return list[index];
}

template<class elemType> 
elemType& Array<elemType>::operator[](char t_index) {
  int index = static_cast<int>(t_index);
   // throw an exception if outside the array boundaries
  
  //cerr << "index: " << index << " length: " << length << " length: "<< length <<endl;
  // if (length>=length)
//    cerr << "max length is too small\n";
  //  throw out_of_range("out_of_range: cannot insert into a full list");
   // cerr << "start index: " << start_index << " index: " << index <<'\n';
   // cerr << (start_index > index) << ' ' << (start_index+length < index)<<'\n';  
  if (start_index > index || start_index+length < index)
//    cerr << "index is off boundaries";
    throw out_of_range("out_of_range: index out of range");
  return list[index];
  
}

// the following method allows a const pass by reference argument
// For example: void func(const Array& array)
template<class elemType> 
const elemType& Array<elemType>::operator[](char t_index) const {
  int index = static_cast<int>(t_index);
  // throw an exception if outside the array boundaries
  // if (length>=length)
//    cerr << "max length is too small\n";
  //  throw out_of_range("out_of_range: cannot insert into a full list");
   // cerr << "start index: " << start_index << " index: " << index <<'\n';
   // cerr << (start_index > index) << ' ' << (start_index+length < index)<<'\n';  
  if (start_index > index || start_index+length < index)
//    cerr << "index is off boundaries";
    throw out_of_range("out_of_range: index out of range");
   //cerr << "index: " << index << " length: " << length << " length: "<< length <<endl;
  return list[index];
}

template<class elemType> 
int Array<elemType>::getLength() const {
  return length;
}

template<class elemType>
int Array<elemType>::getStartIndex() const {
  return start_index;
}


template<class elemType>
const Array<elemType> Array<elemType>::operator=(const Array<elemType> other) {
  start_index = other.getStartIndex(); 
//  length = other.getLength();
  Resize(other.getLength());
  for (int index = getStartIndex(); index < getStartIndex() + other.getLength(); index++) {
//    cerr << "index: " << index <<' ' << (*this)[index] << ' ';
//    cerr << other[index] << '\n';
    (*this)[index] = other[index];
  }
  return (*this);
}


// comparision operators 
template<class elemType> 
bool Array<elemType>::operator==(const Array<elemType> other) const {
  bool is_equal = 1;		// stores the equality, default is equal then changes if not
  if (getLength() != other.getLength())
    is_equal = 0;
//  cerr << "other length: " << getLength() << ' ' << other.getLength() << '\n';
//  cerr << "other start_index: " << getStartIndex() << ' ' << other.getStartIndex() << '\n';
 
  for (int index = getStartIndex(); index < getStartIndex() + other.getLength(); index++) {
//    cerr << "index: " << index << ' ';
//    cerr << (*this)[index] << ' ';
//    cerr << other[index] << '\n';
    if ((*this)[index] != other[index]) 
      is_equal = 0; 
  }
  return is_equal; 
}

template<class elemType> 
bool Array<elemType>::operator<(const Array<elemType> other) const {
  if (getLength() != other.getLength()) 
    return 0;
  else {
    // return 0 when find first one which is greater than the other
    for (int index = getStartIndex(); index < (getStartIndex() + other.getLength()); index++) {
      // check for the first one greater or less than, and will return 1 or 0
      // if it is equal, will continue with the for loop
//      cerr << "values: " <<(*this)[index] << ' ' << other[index] << endl;
      if ((*this)[index] < other[index]) {
//        cerr << "Less than\n";
	return 1;}
      else if ((*this)[index] > other[index]) {
//        cerr << "Greater than\n";
	return 0;}
    } // end for
//    cerr << "out of for loop\n";
  } // end else
  return 0;
} 

template<class elemType> 
bool Array<elemType>::operator<=(const Array<elemType> other) const {
  return (*this == other) || (*this < other);
}

template<class elemType> 
bool Array<elemType>::operator>(const Array<elemType> other) const {
  return !(*this <= other);
}

template<class elemType> 
bool Array<elemType>::operator>=(const Array<elemType> other) const {
  return !(*this < other);
}

template<class elemType> 
bool Array<elemType>::operator!=(const Array<elemType> other) const {
  return !(*this == other);
}

} // end namespace

#endif
