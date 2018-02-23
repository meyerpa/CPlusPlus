// File: 	personType.cpp
// Author: 	Paige Meyer
// Assignment: 	8
// Class: 	CSIS 252
// Date: 	3/25/2015

// Description: this file contains the implementation of the personType class

#include <iostream>
#include <string>
#include "personType.h"
#include "dateType.h"
using namespace std;


personType::personType() {
  setName("");
} // end default constructor

personType::personType(string tmp_name,dateType tmp_dateType) {
  setName(tmp_name);
  setBirthday(tmp_dateType);
} // end  constructor

void personType::setName(string tmp_name) {
  name = tmp_name;
} // end setName

void personType::setBirthday(dateType tmp_dateType) {
  birthday = tmp_dateType;
} // end setBirthday dateType

dateType personType::getBirthday() const {
  return birthday;
} // end getBirthday

string personType::getName() const {
  return name;
} // end getName

bool personType::operator==(const personType& other) const{
  return (getBirthday()) == (other.getBirthday());
} // end ==

bool personType::operator!=(const personType& other) const {
  return !(*this==other);
} // end !=

bool personType::operator<(const personType& other) const {
  return (getBirthday() < other.getBirthday());
} // end <

bool personType::operator<=(const personType& other) const {
  return (*this == other || *this < other);
} // end <=

bool personType::operator>(const personType& other) const {
  return !(*this <= other);
} // end >

bool personType::operator>=(const personType& other) const {
  return !(*this < other);
} // end >=

// don't think nessary
ostream& operator<<(ostream& out, personType self) {
  out << self.getName() << " " << self.getBirthday();
  return out;
} // end overload <<

istream& operator>>(istream& in, personType self) {
  string tmp_name;
  dateType tmp_date;
  in >> tmp_name >> tmp_date;
  self.setName(tmp_name);
  self.setBirthday(tmp_date);
  return in;
} // end overlead >>


