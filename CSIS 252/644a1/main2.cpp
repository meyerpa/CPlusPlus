// File: 	main2
// Name: 	Paige Meyer
// Class: 	CSIS 252
// Program: 	assignment 2
// Date: 	1/16/2014

#include <iostream>
#include <iomanip>
using namespace std;

/* Program Description:
   This program will take a radius input from the user and 
   then compute and output the diameter, circumference and area of a circle
*/

// Constants

const double PI = 3.14159;	// constant for Pi



int main() {
    
    // Variables
    
    double radius; 		// the double for radius of the circle

    // Set output to five decimal places
    
    cout << fixed << showpoint << setprecision(5); 	// sets precision to 5 decimal places
    
    
    // Describes the process to the user
    
    cout << "\n\nThis program will ask the user to input a floating point for a radius " << endl;
    cout << "from the user's input of the radius, it will then compute and display the " <<endl;
    cout << "diameter, circumference, and the area of that circle." <<endl;
    
    //Prompt the user to enter the radius
    
    cout << "\nPlease enter the radius: ";
    cin >> radius;
    
    // Calcuate and report
    cout << "Using diameter is twice the radius, circumference equal Pi, " << PI;
    cout << ", times the radius, \nand area equal Pi times the radius squared. ";
    cout << "I computed these numbers..." <<endl;
    
    cout << setprecision(2); 				// sets precision to 2decimal places
    
    cout << "\nDiameter: " << (2 * radius); 			//displaying results for diameter
    cout << "\nCircumference: " << (2 * PI * radius); 		//displaying results for circumference
    cout << "\nArea: " << (PI * radius * radius) <<endl <<endl; //displaying results for area
    
    
    return 0; // end program
    
    
} //end main