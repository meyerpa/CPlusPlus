// File:	main1
// Name:	Paige Meyer
// Class:	CSIS 252
// Program:	assignment 1
// Date:	1/16/2015

#include <iostream>
#include <iomanip>
using namespace std;


/*  Program Description:
    This Program will ask for input for the number of kilometers and the liters used,
    from that it will compute and output the miles per gallon used on that trip.
*/


// Contants

const double KM_PER_LITER_TO_MILES_PER_GALLON = 2.35215583;  // amount for changing KM per liter to mpg

int main() {

    // Variables

    double kilometers_traveled;         // the float input from the keyboard for kilometers traveled
    double liters_used;                 // the float input from the keyboard for liters used
    double miles_per_gallon;            // will calulate the float for the miles per gallon 

    // Set output to eight decimal places
    
    cout << fixed << showpoint << setprecision(8); 	// sets precision to eight decimal places
    
    // Describes the process to the user
    
    cout << "\n\nThis Program will ask for input for the number of kilometers " << endl;
    cout << "and the liters used, from that it will compute and output the " << endl;
    cout << "miles per gallon used on that trip." << endl ;

    // Prompts the user for kilometers and liters
    
    cout << "Enter the floating point for the kilometers traveled: ";
    cin >> kilometers_traveled;
    cout << "\nEnter the floating point for the liters used during that period: ";
    cin >> liters_used;
    
    // Explains calcuations
    
    cout << "\nUsing one kilometer per liter is equal to " << KM_PER_LITER_TO_MILES_PER_GALLON; 
    cout << " it will display the miles \nper gallon based on your inputs before. " << endl;
    
    // Change length of precision
    
    cout << fixed << showpoint << setprecision(2); 	// sets precision to two decimal places
    
    // Calcuates and report
    
    //to find miles per gallon, computes the km per liter and multiplies by the 
    //constant for km per liter to miles per gallon
    miles_per_gallon = ((kilometers_traveled  * KM_PER_LITER_TO_MILES_PER_GALLON) / liters_used);
    cout << "\n\nMiles per gallon on trip: " << miles_per_gallon << endl <<endl;
    
    
    return 0; // end program

  
} //end main