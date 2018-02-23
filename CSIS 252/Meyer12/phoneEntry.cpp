// File: 	phoneEntry.cpp
// Author: 	Paige Meyer
// Assignment: 	12
// Class: 	CSIS 252
// Date: 	4/28/2015

// Description: this file contains the implementation of the phoneEntry class

#include <iostream>
#include <string>
#include "phoneEntry.h"
#include "dateType.h"
#include "personType.h"
using namespace std;

phoneEntry::phoneEntry() {
  person = personType();
  setPhone("");
} // end default constructor

phoneEntry::phoneEntry(string name, string phone, dateType birth) {
  person = personType(name, birth);
  setPhone(phone);
} // end 3 param. constructor

phoneEntry::phoneEntry(string name) {
  person = personType(name);
  setPhone("");
} // end name param constructor

phoneEntry::phoneEntry(string name, string phone) {
  setPhone(phone);
  person = personType(name);
} // end name, phone constructor

string phoneEntry::getName() const {
  return person.getName();
} // end getName

string phoneEntry::getPhone() const {
  return phone;
} // end getPhone

dateType phoneEntry::getBirthday() const {
  return person.getBirthday();
} // end getBirthday

void phoneEntry::setName(string tmp_name) {
  person.setName(tmp_name);
} // end setName

void phoneEntry::setPhone(string tmp_phone) {
  phone = tmp_phone;
} // end setPhone

void phoneEntry::setBirthday(dateType birthday) {
  person.setBirthday(birthday);
} // end setBirthday

bool phoneEntry::operator==(const phoneEntry& other) const {
  return (phoneEntry::getName() == other.getName());
} // end ==

bool phoneEntry::operator!=(const phoneEntry& other) const {
  return !(*this==other);
} // end !=

bool phoneEntry::operator<(const phoneEntry& other) const {
  return phoneEntry::getName() < other.getName();
} // end <

bool phoneEntry::operator<=(const phoneEntry& other) const {
  return (*this==other || *this<other);
} // end <=

bool phoneEntry::operator>(const phoneEntry& other) const {
  return !(*this<=other);
} // end >

bool phoneEntry::operator>=(const phoneEntry& other) const {
  return !(*this<other);
} // end >=

// don't think nessary
ostream& operator<<(ostream& out, const phoneEntry& self) {
	out << self.getName() << " " << self.getPhone();
	return out;
} // end overload <<

istream& operator>>(istream& in, phoneEntry& self) {
	string tmp_phone, tmp_name;
	char tmp_char;

	in >> tmp_name >> tmp_char >> tmp_phone;
	self.setPhone(tmp_phone);
	self.setName(tmp_name);
	return in;
} // end overlead >>
