// File: currency.h
// Author: Paige Meyer
// Assignment: prog1
// Class: CSIS 352
// Date: 01/27/2016

#ifndef _CURRENCY_H_
#define _CURRENCY_H_

#include <iostream>
using namespace std;

enum outputFormat {Round, Truncate, ShowCents};
enum dollarFormat {NoDollarSign, ShowDollarSign};

class Currency {
  public:
    // method - constructor
    // description - construct a new Currency object
    // preconditions - <none>
    // postconditions - Currency object created and initialized to values provided
    // method input - currency: float
    // method output - <none>
    Currency(double tmp_currency);
    
    // method - constructor
    // description - construct a new Currency object
    // preconditions - <none>
    // postconditions - Currency object created and initialized to values provided 
    //			if none are provided, defaults to 0
    // method input - currency: int
    // method output - <none>
    Currency(int tmp_currency=0);
    
    // method - setAmount
    // description - change the amount of the Currency object
    // preconditions - <none>
    // postconditions - amount value with be updated
    // method input - tmp_currency : float
    // method output - <none>
    void setAmount(double tmp_currency);
    
    // method - getAmount
    // description - returns the amount of the Currency object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - double
    double getAmount() const;
    
    // method - getDollars
    // description - returns the cent amount of the Currency object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - long
    long getDollars() const;
    
    // method - getCents
    // description - returns the cent amount of the Currency object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - short
    short getCents() const;
    
    // method - setFormat
    // description - Updates format to value provided so printing 
    // 		of the Currency object will be updated
    // preconditions - <none>
    // postconditions - Updates format to the value provided
    // method input - One of the enumerated types
    // method output - <none>
    static void setFormat(outputFormat);
  
    // method - getFormatSign
    // description - Returns the current format of the sign of the Currency object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - One of the enumerated types
    dollarFormat getFormatSign();
    
    // method - setFormat
    // description - Updates format to value provided so printing 
    // 		of the Currency object will be updated
    // preconditions - <none>
    // postconditions - Updates format to the value provided
    // method input - One of the enumerated types
    // method output - <none>
    static void setFormat(dollarFormat);
    

    // method - getFormat
    // description - Returns the current format of the Currency object
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - One of the enumerated types
    outputFormat getFormatNumbers();
    
    
    // overriding the assignment operator
    void operator=(int tmp_currency);
    void operator=(double tmp_currency);
    void operator=(Currency tmp_currency);
    
    // overriding relational operators
    bool operator==(const Currency& tmp_currency) const;
    bool operator==(const double tmp_currency) const;
    bool operator<(const Currency& tmp_currency) const;
    bool operator<(const double tmp_currency) const;
    bool operator>(const Currency& tmp_currency) const;
    bool operator>(const double tmp_currency) const;
    bool operator<=(const Currency& tmp_currency) const;
    bool operator<=(const double tmp_currency) const;
    bool operator>=(const Currency& tmp_currency) const;
    bool operator>=(const double tmp_currency) const;
    bool operator!=(const Currency& tmp_currency) const;
    bool operator!=(const double tmp_currency) const;
    
    //overriding addition, subtraction, multiplication, and division operators
    Currency operator+(const int other) const;
    Currency operator+(const double other) const;
    Currency operator+(const Currency& other) const;
    Currency operator-(const int other) const;
    Currency operator-(const double other) const;
    Currency operator-(const Currency& other) const;
    Currency operator*(const int other) const;
    Currency operator*(const double other) const;
    Currency operator/(const int other) const;
    Currency operator/(const double other) const;
    
  private: 
    long dollars;				// holds cent value
    short cents;				// holds cent value
    static outputFormat formatNumbers; 		// defaults to ShowCents
    static dollarFormat formatSign; 		// defaults to ShowCents
    
}; // end Currency

ostream& operator <<(ostream& out, Currency self);
istream& operator >>(istream& in, Currency self);

    
#endif
  
