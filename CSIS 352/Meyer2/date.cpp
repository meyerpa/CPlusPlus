// Description: implementation of the Date class, has Date 
// 	class in DateNameSpace
// file: date.cpp
// author: Paige Meyer
// class: CSIS 352
// date: 02/08/2016

#include "date.h"
#include <boost/lexical_cast.hpp>
using namespace std;

namespace DateNameSpace {

// initializing the format to NUMERIC
outFormat Date::format = NUMERIC;
arithmeticFormat Date::arithFormat = DAYS;
  
// constructors
Date::Date() {  
  setToday(); // call set today, which will month, day and year equal to today's values 
}

Date::Date(int t_month, int t_day, int t_year) {
  setMonth(t_month);
  setDay(t_day);
  setYear(t_year);
}

// setters

void Date::setMonth(int t_month) {
  // check that the month is less than 12
  if (t_month > 12)
    // Note did this before we talked about sstream. 
    throw DateException(("DateException: invalid month, month=" + boost::lexical_cast<string>(t_month)));
  month = t_month;
}

void Date::setDay(int t_day) {
  
  // makes sure the day is correct according to the month
  // Note: did this before we talked about sstream. 
  switch (getMonth()) {
    case 1:
      if (t_day > 31)
        throw DateException("DateException: invalid day, month=1, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 2:
      if (t_day > 28 || (t_day==29 && leapyear(getYear())))
        throw DateException("DateException: invalid day, month=2, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 3:
      if (t_day > 31)
        throw DateException("DateException: invalid day, month=3, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 4:
      if (t_day > 30)
        throw DateException("DateException: invalid day, month=4, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 5:
      if (t_day > 31)
        throw DateException("DateException: invalid day, month=5, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 6:
      if (t_day > 30)
        throw DateException("DateException: invalid day, month=6, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 7:
      if (t_day > 31)
        throw DateException("DateException: invalid day, month=7, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 8:
      if (t_day > 31)
        throw DateException("DateException: invalid day, month=8, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 9:
      if (t_day > 30)
        throw DateException("DateException: invalid day, month=9, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 10:
      if (t_day > 31)
        throw DateException("DateException: invalid day, month=10, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 11:
      if (t_day > 30)
        throw DateException("DateException: invalid day, month=11 day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    case 12:
      if (t_day > 31)
        throw DateException("DateException: invalid day, month=12, day="
	   +boost::lexical_cast<string>(t_day)+", year="+boost::lexical_cast<string>(getYear()));
      break;
    }
  day = t_day;
}

void Date::setYear(int t_year) {
  year = t_year;
}

void Date::setDate(int t_month, int t_day, int t_year) {
  setMonth(t_month);
  setYear(t_year);
  setDay(t_day);
}

void Date::setToday() {
  //Note: Credit to Brekke's handout
  tm *current;
  time_t lt;
  lt = time('\0');
  current = localtime(&lt);
  int t_year = current->tm_year + 1900;
  int t_month = current->tm_mon+1;
  int t_day = current->tm_mday;
  
  setMonth(t_month);
  setYear(t_year);
  setDay(t_day);
}

// getters

int Date::getMonth() const {
  return month;
}

int Date::getDay() const {
  return day;
}

int Date::getYear() const {
  return year;
}

const string Date::getDayOfWeek() const {
  int t_year, t_month, t_day, t_centuries, months, dayofweek;	// used for calculations
  string dayString;
  
  t_year = getYear();
  t_month = getMonth();
  t_day = getDay();
  
  //Note: credit due to Brekke's handout
  t_centuries = (3-t_year/100%4)*2;
  switch (getMonth())
   {
      case 1  : if (leapyear(t_year))
                   months = 6;
                else
                   months = 0; break;
      case 2  : if (leapyear(t_year))
                   months = 2;
                else
                   months = 3; break;
      case 3  : months = 3; break;
      case 4  : months = 6; break;
      case 5  : months = 1; break;
      case 6  : months = 4; break;
      case 7  : months = 6; break;
      case 8  : months = 2; break;
      case 9  : months = 5; break;
      case 10 : months = 0; break;
      case 11 : months = 3; break;
      case 12 : months = 5; break;
   }
  
  dayofweek = (t_centuries+t_year%100+t_year%100/4+months+t_day)%7;
  switch (dayofweek)
  {
    case 0 : dayString = "Sunday"; break;
    case 1 : dayString = "Monday"; break;
    case 2 : dayString = "Tuesday"; break;
    case 3 : dayString = "Wednesday"; break;
    case 4 : dayString = "Thursday"; break;
    case 5 : dayString =  "Friday"; break;
    case 6 : dayString = "Saturday"; break;
  }
  return dayString;
}

const string Date::getMonthString() const {
  string monthStr;
  switch (getMonth()) {
    case 1  : monthStr="January"; break;
    case 2  : monthStr="February"; break;
    case 3  : monthStr="March"; break;
    case 4  : monthStr="April"; break;
    case 5  : monthStr="May"; break;
    case 6  : monthStr="June";  break;
    case 7  : monthStr="July"; break;
    case 8  : monthStr="August"; break;
    case 9  : monthStr="September"; break;
    case 10 : monthStr="October"; break;
    case 11 : monthStr="November"; break;
    case 12 : monthStr="December"; break;
  }
  return monthStr; 
}



// assignment operator
const Date Date::operator=(const Date other) {
   setMonth(other.getMonth());
   setYear(other.getYear());
   setDay(other.getDay());
   return Date(other.getMonth(), other.getDay(), other.getYear());
}

// comparison operator
  
bool Date::operator==(Date other) {
  return getYear()==other.getYear() && getMonth()==other.getMonth() && getDay()==other.getDay();
}

bool Date::operator<(Date other) {
  bool isLessThan = 1;		// default to less then, changes value if greater than
  // first check years
  if (getYear() > other.getYear())
    isLessThan = 0;
  // if years are equal, need to check months
  else if (getYear() == other.getYear()) {
    // checking months
    if (getMonth() > other.getMonth()) 
      isLessThan = 0;
    // if year, and months are equal, need to check days
    else if (getMonth() == other.getMonth())
      isLessThan = getDay()>=other.getDay();
  }
  return isLessThan;
}

bool Date::operator<=(Date other) {
  return (*this == other) || (*this < other);
}

bool Date::operator>(Date other) {
  return !(*this <= other);
}

bool Date::operator>=(Date other) {
  return !(*this < other);
}

bool Date::operator!=(Date other) {
  return !(*this == other);
}

// pre and post-increment

const Date Date::operator++() {
  switch (getArithmetic()) {
    case DAYS:
      setDay(getDay()+1);
      break;
    case YEARS:
      setYear(getYear()+1);
      break;
  }
  return *this;
}

const Date Date::operator++(int) {
  Date tmp = *this;
  switch (getArithmetic()) {
    case DAYS:
      setDay(getDay()+1);
      break;
    case YEARS:
      setYear(getYear()+1);
      break;
  }
  return tmp;
}

const Date Date::operator--() {
  switch (getArithmetic()) {
    case DAYS:
      setDay(getDay()-1);
      break;
    case YEARS:
      setYear(getYear()-1);
      break;
  }
  return *this;
}

const Date Date::operator--(int) {
  Date tmp = *this;
  
  switch (getArithmetic()) {
    case DAYS:
      setDay(getDay()-1);
      break;
    case YEARS:
      setYear(getYear()-1);
      break;
  }
  return tmp;
}

// do subtraction and addition


const Date Date::operator+(int other) const {
  Date tmp;
    
  switch (getArithmetic()) {
    case DAYS:
      tmp = Date(getMonth(), getDay() + other, getYear());
      break;
    case YEARS:
      tmp = Date(getMonth(), getDay(), getYear() + other);
      break;
  }
  return tmp;
}


const Date Date::operator-(int other) const {
  Date tmp;
    
  switch (getArithmetic()) {
    case DAYS:
      tmp = Date(getMonth(), getDay() - other, getYear());
      break;
    case YEARS:
      tmp = Date(getMonth(), getDay(), getYear() - other);
      break;
  }
  return tmp; 
}

int Date::operator-(const Date other) const {
  int diff, leapDays=0;
  int tmpYear = getYear();
 
  switch (getArithmetic()) {
    case DAYS:

      // difference in days of regular years
      diff = (getYear()-other.getYear())*365 + daysUntil(other);
      // add in leap year extra days
     while (tmpYear != other.getYear()) {
        if (tmpYear<other.getYear()) {
          if (leapyear(tmpYear)) 
            leapDays--;
          tmpYear++;
        } // end if
        else{
          if (leapyear(tmpYear)) 
            leapDays++;
          tmpYear--;
        } // end else
      } // end while
      diff = diff + leapDays;
      
      break;
    case YEARS:
      diff= getYear()-other.getYear();
      if (getMonth() < other.getMonth() && diff>0)
        diff--;
      else if (getMonth() > other.getMonth() && diff<0)
        diff++;
      else if (getMonth() == other.getMonth()) 
        if (getDay()<other.getDay() && diff>0) 
          diff--;
        else if (getDay()<other.getDay() && diff>0) 
          diff++; 
      break;
  }
  return diff;
}
    
const Date Date::Today() {
    //Note: Credit to Brekke's handout
  tm *current;
  time_t lt;
  lt = time('\0');
  current = localtime(&lt);
  int t_year = current->tm_year + 1900;
  int t_month = current->tm_mon+1;
  int t_day = current->tm_mday;
  
  return Date(t_month, t_day, t_year);
}

int Date::daysUntil(Date tmp) const {

  int feb_days = 28;
  // get year to check if it's a leap year, and then if so, put 29 in list
  if (leapyear(getYear())) 
    feb_days = 29;
  int month_diff = getMonth() - tmp.getMonth();
  int day_diff = getDay() - tmp.getDay();
  // array of number of days in each month
  int month_days[] = {31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
  if (month_diff >= 0) {
    for (int offset=0; offset <month_diff; offset++) { 
      day_diff += month_days[tmp.getMonth()-1 + offset]; }
  }
  else {
    for (int offset=0; offset >month_diff; offset--) { 
      day_diff -= month_days[getMonth()-1 + offset]; } 
  }

  return day_diff;
}

// format
void Date::outputFormat(outFormat tmp_format){
  format = tmp_format;
}

// format
outFormat Date::getFormat(){
  return format;
}

void Date::Arithmetic(arithmeticFormat tmp_format) {
  arithFormat = tmp_format;
}

arithmeticFormat Date::getArithmetic() {
  return arithFormat;
}

// Note: credit to Brekke's handout
bool Date::leapyear(int year) const
{
   if (year % 4 == 0 && year % 100 != 0)
      return true;
   if (year % 400 == 0)
      return true;
   return false;
}

 
} // end namespace

ostream& operator <<(ostream& out, DateNameSpace::Date self) {
  switch (self.getFormat()) {
    case DateNameSpace::TEXT:
      out << self.getMonthString() <<' ' << self.getDay() << ", " << self.getYear();
      break;
    case DateNameSpace::DAYTEXT:
      out << self.getDayOfWeek() << ", " << self.getMonthString() << ' '; 
      out << self.getDay() << ", " << self.getYear();
      break;
    case DateNameSpace::NUMERIC:
      out << self.getMonth() << '/' << self.getDay() << '/' << self.getYear();
      break;
    case DateNameSpace::DAYNUMERIC:
      out << self.getDayOfWeek() << ", " << self.getMonth() << '/' << self.getDay(); 
      out << '/' << self.getYear();
      break;
  };
  return out;
}

//Note: only accepts integers, which should be separated by characters
std::istream& operator>>(std::istream& in, DateNameSpace::Date self) {
  int t_month, t_day, t_year;
  in >> t_month >> t_day >> t_year;
  self.setMonth(t_month);
  self.setDay(t_day);
  self.setYear(t_year);
  return in;
}
