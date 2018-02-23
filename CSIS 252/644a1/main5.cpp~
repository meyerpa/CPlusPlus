// File: 	main5
// Name: 	Paige Meyer
// Class: 	CSIS 252
// Program: 	assignment 1
// Date 	1/16/2015

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*  Program Description:
    This program will calculate the monthly payment, total amount paid over the life
    of the loan, and the total interest paid on a loan. These amounts will be based 
    on the user's inputs for the loan amount, the length, and the annual percentage rate the 
    user enters.
*/

int main() {

    // Variables
    
    int month_length;			// the term of the loan, in months
    double starting_loan_amount;	// the amount of the loan taken out
    double final_loan_amount;		// the amount of the loan paid
    double apr; 			// the annual percentage rate
    double monthly_interest_rate; 	// the monthly interest rate
    double interest;	 		// the interest on the load over the length of time
    int ct;				// counter for the while loop for compounding monthly
    
    // Set output to two decimal places
    
    cout << fixed << showpoint << setprecision(2); 	// sets precision to 2 decimal places
    
    // Describe the process to the user
    
    cout << "\n\nThis program will ask user for the loan amount and the annual " <<endl;
    cout << "percentage rate. This program will then calculate the monthly payment, " <<endl;
    cout << "total amount paid over the life of the loan, and the total interest " <<endl;
    cout << "paid." <<endl;
    
    // Prompt the user for load amount and APR, an
    
    cout << "Enter the loan amount: "; cin >> starting_loan_amount; 	   //prompts for loan amount
    cout << "Enter the length of the loan, in months: ";
    cin >> month_length;						   //prompts for length
    cout << "Enter the Annual Percentage Rate on the loan: "; cin >> apr;  //prompts for apr
    cout << endl << endl; 
    
    
    //Calculate and report
    
    cout << "Please note that this calculates the interest rate compounded monthly. " <<endl;
    cout << "It uses the formula (1 + apr) ^ (1 / 12) - 1 to calculate " <<endl;
    cout << "the monthly interest rate. Then, it will compound for the number" << endl;
    cout << "of months given, multiplying the monthly interest rate each month. " <<endl;
    cout << "Please note: this calculator does not take monthly payments into " <<endl;
    cout << "calculation of the interest. " << endl;
    
    // Calculate montly interst rate on loan
    
    monthly_interest_rate = (pow((1 + (apr / 100)), ( 1 / 12.0))) - 1;
    
    // Increment the loan amount each month
    
    final_loan_amount = starting_loan_amount; 				//set ending amount equal to start before compounding
    ct = 0;
    while (ct < month_length) {
	final_loan_amount += final_loan_amount * monthly_interest_rate; //compounding per month
	ct += 1; 							//increment counter
    } // end while loop
    
    // Printing the report
    
    cout << "\nTotal monthly payment: " << (final_loan_amount) / month_length; 
    cout << "\nTotal amount paid over life of loan: " << final_loan_amount; 
    cout << "\nTotal interest paid on loan: " << final_loan_amount - starting_loan_amount;
    cout << endl << endl;
    

    return 0; // end program
    
} // end main
