// File: 	personType.h
// Author: 	Paige Meyer
// Assignment: 	8
// Class: 	CSIS 252
// Date: 	3/25/2015

#ifndef _PERSONTYPE_H_
#define _PERSONTYPE_H_

#include <string>
#include "dateType.h"
using namespace std;

class personType {
  public:
    // method - constructor
    // description - construct a new personType object
    // preconditions - <none>
    // postconditions - personType object created and initialized name to null 
    //    string and birthday to 0/0/0.
    // method input - <none>
    // method output - <none>
    personType();
    
    // method - constructor
    // description - construct a new personType object
    // preconditions - <none>
    // postconditions - personType object created and initialized 
    //      to values provided
    // method input - name : string
    //		      birthday : dateType
    // method output - <none>
    personType(string tmp_name, dateType tmp_dateType);
    
    // method - setName
    // description - change the name of the personType object
    // preconditions - <none>
    // postconditions - name value with be updated
    // method input - name : string
    // method output - <none>
    void setName(string tmp_name);
    
    // method - setBirthday
    // description - change the birthday of the personType object
    // preconditions - <none>
    // postconditions - birthday will be updated
    // method input - birthday: dateType
    // method output - <none>
    void setBirthday(dateType tmp_birthday);
    
    // method - getName
    // description - return the name of the personType object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - name : string
    string getName() const;
    
    // method - getBirthday
    // description - return the birthday of the personType object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - birthday : dateType
    dateType getBirthday() const;
    
    
    // Operator overloading
    // Please note compares birthdays, using comparison of dateType class
    bool operator==(const personType&) const;
    bool operator!=(const personType&) const;
    bool operator<(const personType&) const;
    bool operator<=(const personType&) const;
    bool operator>(const personType&) const;
    bool operator>=(const personType&) const;
    
    
  private:
    string name;
    dateType birthday;
}; // end personType

ostream& operator << (ostream& out, const personType& self);
istream& operator >> (istream& in, personType& self);

#endif
