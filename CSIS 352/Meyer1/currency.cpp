// File: currency.cpp
// Author: Paige Meyer
// Assignment: prog1
// Class: CSIS 352
// Date: 02/1/2016


#include "currency.h"
#include <iomanip>
using namespace std;

// instantiating default of format

outputFormat Currency::formatNumbers = ShowCents;
dollarFormat Currency::formatSign = ShowDollarSign;

// Constructors 
Currency::Currency(double tmp_currency) {
  setAmount(tmp_currency);
}

Currency::Currency(int tmp_currency) {
  static_cast<double>(tmp_currency);
  setAmount(tmp_currency);
}

// sets dollar and cents to the values before and after the decimal respectively
void Currency::setAmount(double tmp_currency) {
  int centcheck;			// stores the number after pennies
  
  // set the dollar amount
  dollars = static_cast<long>(tmp_currency);
  cents = static_cast<short>((tmp_currency - dollars)*100);
  //check if there are fifty or more, if 5 or greater, round dollars up
  centcheck = static_cast<int>(tmp_currency*1000) % 10;
  // if number after penny greater than 5, add another penny
  if (centcheck >= 5) {
    cents++;
  }
}

// returns a double of the dollar amount and cents concatinated with a period between
double Currency::getAmount() const {
  return static_cast<double>(getDollars())+(static_cast<float>(getCents())/100);
}

// returns the integer value of the Currency object
long Currency::getDollars() const {
  return dollars;
}

// returns the part after the decimal of the Currency object
short Currency::getCents() const {
  return cents;
}

// update the enumerated type used for formatting printing
void Currency::setFormat(outputFormat tmp_format){
  formatNumbers = tmp_format;  
}

// returns the enumerated type used for formatting dollars
outputFormat Currency::getFormatNumbers(){
  return formatNumbers;  
}

// updated the enumerated type used for formatting printing
void Currency::setFormat(dollarFormat tmp_format){
  formatSign = tmp_format;  
}

// returns the enumerated type used for formatting dollars
dollarFormat Currency::getFormatSign(){
  return formatSign;  
}

// overriding the assignment operator

void Currency::operator=(int tmp_currency) {
  static_cast<double>(tmp_currency);
  setAmount(tmp_currency);
}

void Currency::operator=(double tmp_currency) {
  setAmount(tmp_currency);
}

void Currency::operator=(Currency tmp_currency) {
  setAmount(tmp_currency.getAmount());
}


// overriding relational operators

bool Currency::operator==(const Currency& tmp_currency) const {
  return getDollars() == tmp_currency.getDollars() && getCents()==tmp_currency.getCents();
}

bool Currency::operator==(const double tmp_currency) const {
  bool isEqual = 1;		// defaults to true, will change if false
  long tmp_dollars = static_cast<long>(tmp_currency);
  
  // compare each amount: dollars and cents
  if (getDollars() != static_cast<long>(tmp_currency))
    isEqual = 0;
  if (getCents() != static_cast<short>((tmp_currency - tmp_dollars)*100))
    isEqual = 0;
  return isEqual;
}

bool Currency::operator<(const Currency& tmp_currency) const {
  return getAmount() < tmp_currency.getAmount();
}

bool Currency::operator<(const double tmp_currency) const {
  bool isLessThan=1;			// default to true
  long tmp_dollars = static_cast<long>(tmp_currency);
  
  // check if dollar then cents are greater than
  if (getDollars() < tmp_dollars) {
    isLessThan = 0;
  }
  else if (getCents() < static_cast<short>((tmp_currency - tmp_dollars)*100)) { 
    isLessThan = 0;
  }
  return isLessThan;
}

bool Currency::operator<=(const Currency& tmp_currency) const {
  return *(this) < tmp_currency || *(this) == tmp_currency;
}

bool Currency::operator<=(const double tmp_currency) const {
  return (*this < tmp_currency) || (*this==tmp_currency);
}

bool Currency::operator>(const Currency& tmp_currency) const {
  return !(*(this) <= tmp_currency);
}

bool Currency::operator>(const double tmp_currency) const {
  return !(*this <= tmp_currency);
}

bool Currency::operator>=(const Currency& tmp_currency) const {
  return !(*(this) < tmp_currency);
}

bool Currency::operator>=(const double tmp_currency) const {
  return !(*this < tmp_currency);
}

bool Currency::operator!=(const Currency& tmp_currency) const {
  return !(*(this)==tmp_currency);
}

bool Currency::operator!=(const double tmp_currency) const {
  return !(*(this)==tmp_currency);
}

//overriding addition operator

Currency Currency::operator+(const int other) const {
  return Currency(getAmount() + other);
}

Currency Currency::operator+(const double other) const {
  return Currency(getAmount() +other);
}

Currency Currency::operator+(const Currency& other) const {
  return Currency(getAmount() + other.getAmount());
}

Currency Currency::operator-(const int other) const {
  return Currency(getAmount()-other);
}

Currency Currency::operator-(const double other) const {
  return Currency(getAmount()-other);
}

Currency Currency::operator-(const Currency& other) const {
  return Currency(getAmount() - other.getAmount());
}

Currency Currency::operator*(const int other) const {
  return Currency(getAmount()*other);
}

Currency Currency::operator*(const double other) const {
  return Currency(getAmount()*other);
}

Currency Currency::operator/(const int other) const {
  return Currency(getAmount()/other);
}

Currency Currency::operator/(const double other) const {
  return Currency(getAmount()/other);
}

// overriding cout and cin insertion/extraction operators

ostream& operator <<(ostream& out, Currency self) {
  // check which format want, and output accordingly
  
  short tmp_dollars = self.getDollars();
  int centcheck;
  switch (self.getFormatSign()) {
    case NoDollarSign:
      break;
    case ShowDollarSign:
      out <<'$';
      break;
  };
  
  switch (self.getFormatNumbers()){
    case Round:
      //check if there are fifty or more, if 5 or greater, round dollars up
      centcheck = static_cast<int>(self.getCents()) % 100;
      // if number after penny greater than 5, add another penny
      if (centcheck >= 5) 
	  tmp_dollars++;
      out << showpoint << fixed << setprecision(0);
      out << tmp_dollars;
      break;
    case Truncate:
      out << showpoint << fixed << setprecision(0);
      out << self.getDollars();
      break;
    case ShowCents:
      out << showpoint << fixed << setprecision(2) << self.getAmount();
      break;
  };
  return out;
}

ostream& operator>>(ostream& in, Currency self) {
  in >> self.getAmount();
  return in;
}

