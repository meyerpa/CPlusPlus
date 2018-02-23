// Description: DateException class is designed for raising an error of 
//		type DateException
// file: dateException.cpp
// author:  Paige Meyer
// class: CSIS 352
// date: 02/02/2016

#include <string>
using namespace std;

class DateException {
   public:
      DateException(const string& error="") { 
	errormsg = error; 
      }

      string what() {
	return errormsg;
      }

   private:
      string errormsg;
};
