// File: 	main3
// Name: 	Paige Meyer
// Class: 	CSIS 252
// Program: 	Assignment 1
// Date: 	1/16/2015

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*  Program Description:
    This program will ask for three sides of a triangle. It will then compute
    and display the area of that triangle.
*/

main() {
    
    // Variables
    
    double s1;		// the first side of the triangle
    double s2; 		// the second side of the triangle
    double s3;		// the third side of the triangle
    
    // Set output to two decimal places
    
    cout << fixed << showpoint << setprecision(2); 	// sets precision to 2 decimal places
    
    // Describes the process to the user
    
    cout << "\n\nThis program will ask for three sides of a trangle, all floating points. Using Heron's ";
    cout << "\nformula it will then compute and display the area of that triangle. " <<endl; 

    // Prompt the user for the sides of the triangle

    cout << "\nEnter side 1 of the triangle: "; cin >> s1; //prompts and gets side 1 from user
    cout << "Enter side 2 of the triangle: "; cin >> s2; //prompts and gets side 2 from user
    cout << "Enter side 3 of the triangle: "; cin >> s3; //prompts and gets side 3 from user

    // Calculate and report
    
    cout << "\n\nThe area of your triangle is: ";
    // computing the area of the triangle
    cout << sqrt((s1 + s2 + s3) * (-s1 + s2 + s3) * (s1 - s2 + s3) * (s1 + s2 -s3)) / 4;
    cout << " units cubed. " << endl << endl;
    
    
    return 0;
    
} // end main
    