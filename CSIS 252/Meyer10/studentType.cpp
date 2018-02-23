// File: studentType.cpp
// Name: Paige Meyer
// Date: 4/15/2015
// Assignment: 10

// Description: this file contains the implementation of the studentType class

#include <string>
#include "studentType.h"
#include "personType.h"
using namespace std;

int studentType::max_score = 0;

studentType::studentType() : personType() {
	setScore(0);
} // end studentType()

studentType::studentType(int score, personType person) : personType(person) {
	setScore(score);
} // end studentType(int, personType)

studentType::studentType(int score, string name) : personType(name) {
	setScore(score);
} // end studentType(int, string)

studentType::studentType(int score, string name, dateType birth) : personType(name, birth) {
	setScore(score);
} // end studentType(int, string, dateType)

studentType::studentType(int score, int tmp_max_score, string name) : personType(name) {
	setScore(score);
	setMaxScore(tmp_max_score);
} // end studentType(int, int, string)

void studentType::setScore(int tmp_score) {
	score = tmp_score;
} // end setScore(int)

void studentType::setMaxScore(int tmp_max_score) {
	max_score = tmp_max_score;
} // end setMaxScore(int)

int studentType::getScore() const {
	return score;
} // end getScore()

int studentType::getMaxScore() {
	return max_score;
} // end getMaxScore()

double studentType::getPercent() const {
	return static_cast<double>(getScore()) / getMaxScore();
} // end getPercent()

string studentType::getLetterGrade() const {
	// iterate through grades list and see where student percent falls
        const int NUM_GRADES =13;
        string letter_grades[] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "F"};
	double grade_range[] = { 200, .97, .9, .89, .87, .8, .79, .77, .70, .69, .67, .60, .59, 0 };
	double stu_pct;
	stu_pct = getPercent();
	for (int ct = 0; ct < NUM_GRADES; ct++) {
		if (stu_pct < grade_range[ct] && stu_pct >= grade_range[ct + 1]){
			return letter_grades[ct]; // if student falls in given percent, return letter grade
		} // end if
	} // end for
	// if still in loop, grade is an F
	return "F";
} // end getLetterGrade

bool studentType::operator==(const studentType& other) const {
	return getScore() == other.getScore();
} // end overloading the == operator

bool studentType::operator<(const studentType& other) const {
	return getScore() < other.getScore();
} // end overloading the < operator

bool studentType::operator<=(const studentType& other) const {
	return (*this == other || *this<other);
} // end overloading the <= operator

bool studentType::operator>(const studentType& other) const {
	return !(*this <= other);
} // end overloading the > operator

bool studentType::operator>=(const studentType& other) const {
	return !(*this >= other);
} // end overloading the >= operator

bool studentType::operator!=(const studentType& other) const {
	return !(*this == other);
} // end overloading the != operator


ostream& operator<<(ostream& out, studentType student) {
	out << student.getName() << ' ' << student.getBirthday() << ' ';
	out << student.getScore();
	return out;
} // end overloading << operator

istream& operator>>(istream& in, studentType student) {
	string name;
	int month, day, year, score;
	char tmp_char;
	in >> name >> tmp_char >> month >> tmp_char >> day >> tmp_char;
	in >> year >> tmp_char >> score;
	studentType(score, name, dateType(month, day, year));
	return in;
} // end overloading >> operator



