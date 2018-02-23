// File: 	dateType.cpp
// Author: 	Paige Meyer
// Assignment: 	8
// Class: 	CSIS 252
// Date: 	3/25/2015

// Description: this file contains the implementation of the dateType class

#include <iostream>
#include "dateType.h"
using namespace std;

dateType::dateType() {
  setDate(0,0,0);
} // end constructor with no parameters

dateType::dateType(int tmp_month, int tmp_day, int tmp_year) {
  setDate(tmp_month, tmp_day, tmp_year);
} // end contructor with three ints

void dateType::setDate(int tmp_month, int tmp_day, int tmp_year) {
  month = tmp_month;
  day = tmp_day;
  year = tmp_year;
} // end setDate

int dateType::getYear() const {
  return year;
} // end getYear

int dateType::getMonth() const {
  return month;
} // end getMonth

int dateType::getDay() const {
  return day;
} // end getDay

void dateType::getDate(int& tmp_month, int& tmp_day, int& tmp_year) const {
  tmp_month = getMonth();
  tmp_day = getDay();
  tmp_year = getYear();
} // end getDate

bool dateType::operator==(const dateType& other) const {
  if (getYear()==other.getYear() && getMonth()==other.getMonth()) {
    return (getDay()==other.getDay());
  } // end if
  // if still here, not the same so return false
  return false;
} // end dateType==dateType

bool dateType::operator!=(const dateType& other) const {
  return !(*this==other);
} // end dateType==dateType

bool dateType::operator<(const dateType& other) const {
  // check if year is less than
  if (getYear()<other.getYear()) {
    return true;
  } // end if
  // if year is same, check month
  else if (getYear() == other.getYear() && getMonth()<=other.getMonth()) {
    // if month is less, statement is true
    if (getMonth()<other.getMonth()) {
	return true;
    } // end if
    // if month is same, check day
    else {
      if (getDay()<other.getDay()) { 
	return true;
      } // end inner if
    } // end else
  } // end else if
  return false; // if didn't satisfy other conditions, is not less than 
} // end dateType<dateType

bool dateType::operator<=(const dateType& other) const {
  return (*this==other || *this<other);
} // end dateType<=dateType

bool dateType::operator>(const dateType& other) const {
  return !(*this<=other);
} // end dateType>dateType

bool dateType::operator>=(const dateType& other) const {
  return !(*this<other);
} // end dateType>=dateType

ostream& operator << (ostream& out, const dateType& self) {
   out <<  self.getMonth() << '/' << self.getDay() << '/' << self.getYear();
   return out;
} // end printing dateType

istream& operator >> (istream& in, dateType& self) {
  // get month, day, and year from user
  int tmp_month, tmp_day, tmp_year;
  char tmp_char;
  in >> tmp_month >> tmp_char >> tmp_day >> tmp_char >> tmp_year;
  // set values appropriately
  self.setDate(tmp_month, tmp_day, tmp_year);
  return in; 					// return input stream
} // end reading dateType



