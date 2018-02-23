// Description:  of the Date class. Please note, the Date 
// 	class in DateNameSpace
// file: date.h
// author:  Paige Meyer
// class: CSIS 352
// date: 02/08/2016

#ifndef _DATE_H_
#define _DATE_H_

#include "dateException.cpp"
using namespace std;

namespace DateNameSpace {

enum outFormat {TEXT, DAYTEXT, NUMERIC, DAYNUMERIC};
enum arithmeticFormat {DAYS, YEARS};

class Date {
  
  public:
    // method - constructor
    // description - construct a new Date object
    // preconditions - <none>
    // postconditions - Date object created and initialized to default, today
    // method input - <none>
    // method output - <none>
    Date();
    
    // method - constructor
    // description - construct a new Date object
    // preconditions - <none>
    // postconditions - Date object created and initialized to arguments provided
    // method input - <none>
    // method output - <none>
    Date(int t_month, int t_day, int t_year);
    
    // getters and setters
    
    // method - setMonth
    // description - updates the month
    // preconditions - <none>
    // postconditions - month is updated to argument
    // method input - t_month (int) - numeric month to update it to
    // method output - <none>
    void setMonth(int t_month);
    
    // method - getMonth
    // description - returns the numeric month
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - t_month (int) - numeric month of object
    int getMonth() const;
    
    // method - setDay
    // description - updates the day
    // preconditions - <none>
    // postconditions - day is updated to argument
    // method input - t_day(int) - numeric month to update it to
    // method output - <none>
    void setDay(int t_day);
    
    // method - getDay
    // description - returns the numeric day
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - numeric month of object (int)
    int getDay() const;
    
    // method - setYear
    // description - updates the year
    // preconditions - <none>
    // postconditions - year is updated to argument
    // method input - t_year(int) - numeric month to update it to
    // method output - <none>
    void setYear(int t_year);
    
    // method - getYear
    // description - returns the numeric year
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - numeric year of object (int)
    int getYear() const;
    
    // method - getDayOfWeek
    // description - returns the day of the week (string)
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - he day of the week (string)
    const string getDayOfWeek() const;
    
    // method - getDayOfWeek
    // description - returns the day of the week (string)
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - he day of the week (string)
    const string getMonthString() const;

    // method - setDate
    // description - updates the month, day and year
    // preconditions - <none>
    // postconditions - month, day and year are updated to arguments
    // method input - t_day (int) - numeric day to update
    //		      t_month(int) - numeric month to update 
    //		      t_year(int) - numeric month to update
    // method output - <none>
    void setDate(int, int, int);
    
    // method - setToday
    // description - updates the month, day, and year to today's values
    // preconditions - <none>
    // postconditions - month, day and year are updated
    // method input - <none>
    // method output - <none> 
    void setToday();
    
    // method - Today
    // description - Returns a Date instantiated with today's values
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - today's date (Date)
    static const Date Today();
    
    // method - outputFormat
    // description - updates the format used for printing
    // preconditions - <none>
    // postconditions - the format used for printing will be updated
    // method input - outFormat e.g. TEXT, DAYTEXT, NUMERIC, or DAYNUMERIC
    // method output - <none>
    static void outputFormat(outFormat tmp_format);
    
    // method - getFormat
    // description - returns the format used for printing
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - outFormat e.g. TEXT, DAYTEXT, NUMERIC, or DAYNUMERIC
    static outFormat getFormat();
    
    // method - Arithmetic
    // description - updates the format used for arithmetic
    // preconditions - <none>
    // postconditions - arithmeticFormat is updated
    // method input - arithmeticFormat e.g. YEARS or DAYS  
    // method output - <none>
    static void Arithmetic(arithmeticFormat);

    // method - getArithmetic
    // description - Returns the format used for arithmetic
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>  
    // method output - arithmeticFormat e.g. YEARS or DAYS  
    static arithmeticFormat getArithmetic();

    // method - daysUntil
    // description - returns an integer of the number of days until
    // preconditions - <none>
    // postconditions - <none>
    // method input - [optional] a Date, which it will calculate the days until
    //        if none is provided, it will default to today.
    // method output - the number of days until a certain date (int)
    int daysUntil(Date tmp=Today()) const;
    
    // assignment operators
    const Date operator=(const Date);

    // boolean operators
    
    bool operator==(const Date);
    bool operator<(const Date);
    bool operator<=(const Date);
    bool operator>=(const Date);
    bool operator>(const Date);
    bool operator!=(const Date);
    
    // pre and post-increment and decrement operators
    
    const Date operator++();
    const Date operator++(int); 
    const Date operator--();
    const Date operator--(int);

    // operators for adding, subtracting
    const Date operator+(int) const;
    int operator-(const Date) const;
    const Date operator-(int) const;
    
    
  private:
    bool leapyear(int year) const; 	// returns true or false if it's a leapyear
    int month;			// holds the numerical month
    int day;			// holds the numerical day
    int year;			// holds the numerical year
    static outFormat format;		// holds the information for formatting the output
    static arithmeticFormat arithFormat;	// holds the information for formatting arithmetic op.s
};

} // end dateNameSpace


ostream& operator<<(ostream& out, const DateNameSpace::Date self);
istream& operator>>(istream& in, DateNameSpace::Date self);

#endif

