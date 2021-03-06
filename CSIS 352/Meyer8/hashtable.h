cd#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_

#include <vector>
#include <stdexcept>
using namespace std;

// Stores info. for each value
template <class Type>
class values {
public:
  values() {};
  values(const Type& tmp) {elements.push_back(tmp);};
  int size() const {return elements.size();};
  int collisions() const {
    if (elements.size()<2)
      return 0;
    else
      return elements.size()-1;
  };
  void add(const Type& tmp) {elements.push_back(tmp);};
  bool isIn(const Type& tmp) const {
    for(typename vector<Type>::const_iterator it = elements.begin(); it != elements.end(); it++)
      if (tmp == (*it))
	return true;    
    return false;
  };
  void retrieve(Type& tmp) const {
    for(typename vector<Type>::const_iterator it = elements.begin(); it != elements.end(); it++)
      if (tmp == (*it))
	tmp = (*it);    
  };
private:
 vector<Type> elements;
};

// hashtable class
template <class Type>
class HashTable {
public:
  HashTable(int tableSize=0);
    //Description: Constructs and instantiates values of 
    // hashtable to provided
    //Input: the size of the table
    //Output: <none>
    //Precondition:  <none>
    //Postcondition: <none>
  
  void insert(int (*hash) (const Type&), const Type& obj);
    //Description: Inserts an object into the hashtable
    // to the place the hash provides
    //Input: hash (pointer to a hashing function) and
    //  the object you want to insert into the hash table
    //Output: <none>
    //Precondition:  hash function pointer will be the hash used 
      // for inserting the object into the table
    //Postcondition: hashtable will be updated with the object
  
  bool search(int (*hash) (const Type&), const Type& obj);
    //Description: Returns the if an objects is already in the 
    //     hashtable (bool)
    //Input: hash (pointer to a hashing function) and
    //  the object you want to search for in the hash table
    //Output: if object is already in the table (bool)
    //Precondition: the hash function pointer will be the hash used 
    //     for inserting the object into the table
    //Postcondition: <none>
  
  int Collisions() const;
    //Description: Returns the number of collisions in the 
    // 		hashtable (int)
    //Input: <none>
    //Output: the number of collisions in the hashtable (int)
    //Precondition: <none>
    //Postcondition: <none>
  
  void retrieve(int (*hash) (const Type&), Type& obj) const;
    //Description: Returns the number of collisions in the 
    // 		hashtable (int)
    //Input: <none>
    //Output: the number of collisions in the hashtable (int)
    //Precondition: <none>
    //Postcondition: <none>
  
private:
  vector< values<Type> > vec;
  
};

// Constructor
template <class Type>
HashTable<Type>::HashTable(int tableSize) {
  // resize the vector appropriately
  vec.resize(tableSize);
}

template <class Type>
void HashTable<Type>::insert(int (*hash) (const Type& value), const Type& obj) {	
  int index = hash(obj); 		// location in outer vector
  // check that is in range
  if (index>vec.size() || index<0)
    throw out_of_range("Cannot enter hash that's out of range");
  vec[index].add(obj);
}

template <class Type>
bool HashTable<Type>::search(int (*hash) (const Type& value), const Type& obj) {
  int index = hash(obj); 		// place in outer vector
  return vec[index].isIn(obj);
}

template <class Type>
int HashTable<Type>::Collisions() const {
  int collisions = 0;
  for (int i=0; i<vec.size(); i++)
    collisions += vec[i].collisions();
  return collisions;
}

template <class Type>
void HashTable<Type>::retrieve(int (*hash) (const Type&), Type& obj) const {
  int index = hash(obj); 		// place in outer vector
  return vec[index].retrieve(obj);
}

#endif