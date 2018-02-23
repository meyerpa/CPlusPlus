// File: 	phoneEntry.h
// Author: 	Paige Meyer
// Assignment: 12
// Class: 	CSIS 252
// Date: 	4/28/2015

// Description: this will create the header for the PhoneEntry class

#ifndef _PHONEENTRY_H_
#define _PHONEENTRY_H_


#include "personType.h"
using namespace std;

class phoneEntry {
  public:
    // method - constructor
    // description - construct a new personType object
    // preconditions - <none>
    // postconditions - phoneEntry object created and initialized name to null 
    //    string and birthday to 0/0/0, and phone number is a null string
    // method input - <none>
    // method output - <none>
    phoneEntry();
    
    // method - constructor
    // description - construct a new personType object
    // preconditions - <none>
    // postconditions - personType object created and initialized name parameter
    //    string, birthday to 0/0/0, and phone number to parameter
    // method input - <none>
    // method output - <none>
    phoneEntry(string name, string phone);

    // method - constructor
    // description - construct a new personType object
    // preconditions - <none>
    // postconditions - personType object created and initialized name parameter
    //    string, birthday to parameter, and phone number to parameter
    // method input - <none>
    // method output - <none>
    phoneEntry(string name, string phone, dateType birth);
    
    // method - constructor
    // description - construct a new personType object
    // preconditions - <none>
    // postconditions - personType object created and initialized name to null 
    //    string, birthday to 0/0/0 and phone to parameter.
    // method input - <none>
    // method output - <none>
    phoneEntry(string phone);
    
    // method - getName
    // description - gets the name of the phone Entry
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - name(string) - string of the name of the phoneEntry
    string getName() const;
    
    // method - getPhone
    // description - gets the phone number of the phone Entry
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - phone(string) - string of the phone number of the phoneEntry
    string getPhone() const;
    
    // method - getBirthday
    // description - gets the birthday of the phone Entry
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - birthday(dateType) - the birthday of the phoneEntry
    dateType getBirthday() const;
    
    // method - getName
    // description - updates the name of the phone Entry
    // preconditions - <none>
    // postconditions - <none>
    // method input - name(string) - string of the name of the phoneEntry
    // method output - <none>
    void setName(string tmp_name);
    
    // method - setPhone
    // description - updates the phone number of the phone Entry
    // preconditions - <none>
    // postconditions - <none>
    // method input - phone(string) - string of the phone number of the phoneEntry
    // method output - <none>
    void setPhone(string tmp_phone);
    
    // method - setBirthday
    // description - updates the birthday of the phone Entry
    // preconditions - <none>
    // postconditions - <none>
    // method input - birthday(dateType) - the birthday of the phoneEntry
    // method output - <none>
    void setBirthday(dateType Birthday);
    
    // Operator overloading
    // Please note compares birthdays, using comparison of dateType class
    bool operator==(const phoneEntry&) const;
    bool operator!=(const phoneEntry&) const;
    bool operator<(const phoneEntry&) const;
    bool operator<=(const phoneEntry&) const;
    bool operator>(const phoneEntry&) const;
    bool operator>=(const phoneEntry&) const;
    
  
  private:
    personType person;
    string phone;
  
}; // end class phoneEntry

ostream& operator << (ostream& out, const phoneEntry& self);
istream& operator >> (istream& in, phoneEntry& self);

#endif
