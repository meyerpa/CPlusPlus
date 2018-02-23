// File: 	dateType.h
// Author: 	Paige Meyer
// Assignment: 	8
// Class: 	CSIS 252
// Date: 	3/25/2015

#ifndef _DATETYPE_H_
#define _DATETYPE_H_

#include <iomanip>
using namespace std;

class dateType {
  public:
    // method - constructor
    // description - construct a new datetype object
    // preconditions - <none>
    // postconditions - dateType object created and initialized 
    //    to 0/0/0
    // method input - <none>
    // method output - <none>
    dateType();
    
    // method - constructor
    // description - construct a new datetype object
    // preconditions - <none>
    // postconditions - dateType object created and initialized 
    //      to values provided
    // method input - month : int
    //		      day : int
    //		      year : int
    // method output - <none>
    dateType(int tmp_month, int tmp_day, int tmp_year);
    
    // method - setDate
    // description - change the date of the datetype object
    // preconditions - <none>
    // postconditions - month day and year values will be updated
    //			according to the parameters given
    // method input - month : int
    //		      day : int
    //		      year : int
    // method output - <none>
    void setDate(int tmp_month, int tmp_day, int tmp_year);
    
    // method - getYear
    // description - return the year of the dateType object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - year : int
    int getYear() const;
    
    // method - getMonth
    // description - return the month of the dateType object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - month : int
    int getMonth() const;
    
    // method - getDay
    // description - return the day of the dateType object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - day : int
    int getDay() const; 
    
    // method - getDate
    // description - get the date of the dateType object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - month : int
    //		       day : int
    //		       year : int
    void getDate(int& tmp_month, int& tmp_day, int& tmp_year) const;
  
    // Operator overloading
    // Please note, when comparing dates compare year, month, and day respectively.
    bool operator==(const dateType&) const;
    bool operator!=(const dateType&) const;
    bool operator<(const dateType&) const;
    bool operator<=(const dateType&) const;
    bool operator>(const dateType&) const;
    bool operator>=(const dateType&) const;
    
  private:
    int year;
    int month;
    int day;
  
}; // end dateType class


ostream& operator << (ostream& out, const dateType& self);
istream& operator >> (istream& in, dateType& self);


#endif