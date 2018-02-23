// File: studentType.h
// Name: Paige Meyer
// Assignment: 10
// Date: 4/17/2015

// Description: This file contains the 

#ifndef __STUDENTTYPE_H__
#define __STUDENTTYPE_H__

#include <string>
#include <iostream>
#include <fstream>
#include "personType.h"
#include "dateType.h"
using namespace std;

class studentType  : public personType {
  public:
    // method - constructor
    // description - construct a new studentType
    // preconditions - <none>
    // postconditions - studentType is constructed and initialized
    // method input - <none>
    // method output - <none>
    studentType();
    
    // method - constructor
    // description - construct a new studentType
    // preconditions - called with a score and a personType
    // postconditions - studentType is constructed and initialized
    // method input - score(int) and personType
    // method output - <none>
    studentType(int score, personType person);

    // method - constructor
    // description - construct a new studentType
    // preconditions - called with a score and a string for name
    // postconditions - studentType is constructed and initialized
    // method input - score(int) and name(string)
    // method output - <none>
    studentType(int score, string name);

    // method - constructor
    // description - construct a new studentType
    // preconditions - called with a score, string for name, and
    // 		dateType for birthday
    // postconditions - studentType is constructed and initialized
    // method input - score(int) and name(string)
    // method output - <none>
    studentType(int score, string name, dateType birth);

    // method - constructor
    // description - construct a new studentType
    // preconditions - called with a score, max score and a string 
    //		for name
    // postconditions - studentType is constructed and initialized
    // method input - score(int) and name(string)
    // method output - <none>
    studentType(int score, int max_score, string name);
    
    // method - setScore
    // description - changes the score
    // preconditions - called with a score(int)
    // postconditions - score is changed to parameters
    // method input - score(int)
    // method output - <none>
    void setScore(int score);

    // method - setMaxScore
    // description - changes the maximum score
    // preconditions - called with a max_score(int)
    // postconditions - max_score is changed to parameters
    // method input - max_score(int)
    // method output - <none>
    static void setMaxScore(int tmp_max_score);
    
    // method - getScore
    // description - returns the score
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - score(int)
    int getScore() const;
    
    // method - getMaxScore
    // description - returns the maximum score
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - max_score(int)
    static int getMaxScore();

    // method - getPercent
    // description - returns the percentage
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - percent(double)
    double getPercent() const;
    
    // method - getLetterGrade
    // description - returns the letter grade or E if percent
    //		is below 0.
    // preconditions - percent is no more than 100%
    // postconditions - <none>
    // method input - <none>
    // method output - letterGrade(string)
    string getLetterGrade() const;

    //overloading relational operators
    bool operator==(const studentType& other) const;
    bool operator<(const studentType& other) const;
    bool operator<=(const studentType& other) const;
    bool operator>(const studentType& other) const;
    bool operator>=(const studentType& other) const;
    bool operator!=(const studentType& other) const;    
    
    
  private:
    int score;
    static int max_score;
    

    
}; // end studentType class

ostream& operator<<(ostream& out, studentType student);
istream& operator>>(istream& in, studentType student);


#endif
