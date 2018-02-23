// File: main
// Name: Paige Meyer
// Class: CSIS 252
// Program: Assignment 2
// Date: 1/26/2014

#include <iostream>
#include <iomanip>
using namespace std;

/* Program Description:
   
*/

// Constants

const int SENTINEL = -999;				// constant for when user wants to end values
const double A_PLUS_GRADE_LOW = .97;			// constant for lower boundary of A+
const double A_GRADE_LOW = .9;				// constant for lower boundary of A
const double A_MINUS_GRADE_LOW = .89;			// constant for lower boundary of A-
const double B_PLUS_GRADE_LOW = .87;			// constant for lower boundary of B+
const double B_GRADE_LOW = .8;				// constant for lower boundary of B
const double B_MINUS_GRADE_LOW = .79;			// constant for lower boundary of B-
const double C_PLUS_GRADE_LOW = .77;			// constant for lower boundary of C+
const double C_GRADE_LOW = .70;				// constant for lower boundary of C
const double C_MINUS_GRADE_LOW = .69;			// constant for lower boundary of C-
const double D_PLUS_GRADE_LOW = .67;			// constant for lower boundary of D+
const double D_GRADE_LOW = .60;				// constant for lower boundary of D
const double D_MINUS_GRADE_LOW = .59;			// constant for lower boundary of D-


int main() {

	// Variables
	
	int max_points;					// the maximum score possible
	int count_stu = 0;				// the count of the students
	int high_score;				// the high score for students
	int low_score;				// the low score for students
	double total_score;				// the total of all scores for students
//	double average_percentage;			// the average percent for students
	int count_stu_a = 0;				// the count of the students recieving A's
	int count_stu_b = 0;				// the count of the students recieving B's
	int count_stu_c = 0;				// the count of the students recieving C's
	int count_stu_d = 0;				// the count of the students recieving D's
	int count_stu_f = 0;				// the count of the students recieving F's
	int stu_score; 					// used for each student's score 
	
	// Set output to two decimal places
    
	cout << fixed << showpoint << setprecision(2); 	// sets precision to 2 decimal places
	
	// Describe process to user
	
	cout << "\n\nThis program will first take the maximum possible score and then ask for";
	cout << "\neach student's score. It will then output the the score, percentage and ";
	cout << "\nletter grade." << endl;
	
	// Prompt user
	
	cout << "Please enter the maximum score possible: ";
	cin >> max_points;
	
	
	cout << endl << "Please enter a student's score or -999 to quit: ";
	cin >> stu_score;
	// assign the first student score to high and low score for comparision later
	high_score = stu_score;
	low_score = stu_score;
	
	
	// while loop for asking for the students' scores
	
	while (stu_score != SENTINEL) {	
	  
	    // Printing information
	    
	    cout << endl << "Student's score: " << stu_score;
	    cout << endl << "Student's percentage: " << static_cast<double>(stu_score) / max_points *100;
	    cout << "%" << endl;
	    cout <<"Letter grade: ";
	    
	    // Check for high score and low score
	    if (stu_score > high_score) {
	      high_score = stu_score;
	    } // end if
	    if (stu_score < low_score) {
	      low_score = stu_score;
	    } // end if
	    
	    
	    // Checks for letter grade of each student's score
	    
	    // Check if student recieved an A+
	    if ((static_cast<double>(stu_score) / max_points) >= A_PLUS_GRADE_LOW) {
		 cout << "A+" <<endl;
		 count_stu_a ++;
	    } // end if A+
	    // Check if student recieved an A
	    else if ((static_cast<double>(stu_score) / max_points) >= A_GRADE_LOW) {
		 cout << "A" <<endl;
		 count_stu_a ++;
	    } // end if A
	    // Check if student recieved an A-
	    else if ((static_cast<double>(stu_score) / max_points) >= A_MINUS_GRADE_LOW) {
		 cout << "A-" <<endl;
		 count_stu_a ++;
	    } // end if A-
	    // Check if student recieved a B+
	    else if ((static_cast<double>(stu_score) / max_points) >= B_PLUS_GRADE_LOW) {
		 cout << "B+" <<endl;
		 count_stu_b ++;
	    } // end if B+
	    // Check if student recieved a B
	    else if ((static_cast<double>(stu_score) / max_points) >= B_GRADE_LOW) {
		 cout << "B" <<endl;
		 count_stu_b ++;
	    } // end if B
	    // Check if student recieved a B-
	    else if ((static_cast<double>(stu_score) / max_points) >= B_MINUS_GRADE_LOW) {
		 cout << "B-" <<endl;
		 count_stu_b ++;
	    } // end if B-
	    // Check if student recieved a C+
	    else if ((static_cast<double>(stu_score) / max_points) >= C_PLUS_GRADE_LOW) {
		 cout << "C+" <<endl;
		 count_stu_c ++;
	    } // end if C+
	    //Check if student recieved a C
	    else if ((static_cast<double>(stu_score) / max_points) >= C_GRADE_LOW) {
		 cout << "C" <<endl;
		 count_stu_c ++;
	    } // end if C
	    // Check if student recieved a C-
	    else if ((static_cast<double>(stu_score) / max_points) >= C_MINUS_GRADE_LOW) {
		 cout << "C-" <<endl;
		 count_stu_c ++;
	    } // end if C-
	    // Check if student recieved a D+
	    else if ((static_cast<double>(stu_score) / max_points) >= D_PLUS_GRADE_LOW) {
		 cout << "D+" <<endl;
		 count_stu_d ++;
	    } // end if D+
	    // Check if student recieved a D
	    else if ((static_cast<double>(stu_score) / max_points) >= D_GRADE_LOW) {
		 cout << "D" <<endl;
		 count_stu_d ++;
	    } // end if D
	    // Check if student recieved a D-
	    else if ((static_cast<double>(stu_score) / max_points) >= D_MINUS_GRADE_LOW) {
		 cout << "D-" <<endl;
		 count_stu_d ++;
	    } // end if D-
	    // Else, the student recieved a F
	    else {
		 cout << "F" <<endl;
		 count_stu_f ++;
	    } // end else F
	    
	    
	    
	    total_score = total_score + stu_score; //increment total score by student's score
	    count_stu ++;			    //increment student count each time through
	    
	    cout << endl << "Please enter a student's score or -999 to quit: ";
	    cin >> stu_score;
	    
	} // end while loop
	
	
	// Ending Summary
	
	cout << "\n\nSummary Report..." << endl;
	cout << "Maximum Score: " << max_points <<endl;
	cout << "Number of students processed: " << count_stu <<endl;
	cout << "High score: " << high_score <<endl;
	cout << "Low score: " << low_score <<endl;
	cout << "Average score: " << total_score / count_stu <<endl;
	cout << "Average percentage: " << (static_cast<double>(total_score) / count_stu / max_points) *100; 
	cout << "%" << endl;
	cout << "Number of students recieving A's: " << count_stu_a << endl;
	cout << "Number of students recieving B's: " << count_stu_b << endl;
	cout << "Number of students recieving C's: " << count_stu_c << endl;
	cout << "Number of students recieving D's: " << count_stu_d << endl;
	cout << "Number of students recieving F's: " << count_stu_f << endl;

} // end main
