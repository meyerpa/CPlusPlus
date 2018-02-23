// name: Paige Meyer
// assignment: 4
// class: CSIS 252
// date: 2/13/2015


#include <iomanip>
#include <iostream>
using namespace std;

/* Program Description:
  This program will take integers the user inputs, up to 10 integers long.
  It will then output:
         1. The integers separated in ascending order
         2. The integers separated by spaces in descending order
         3. Average value
         4. Median value
         5. Number of integers that is equivalent or less than or greater than the average
         6. Same as previous using a different algorithm
         7. Information for:  even integers equal or less than the average, even integers greater
                 than the average, odd integer equal to or less than the average, and even integers
                 greater than the average
         8. Separate and display two arrays, one for evens and another for the odds and then display those arrays.
*/

// Constants

const int array_size = 10;				// have array size to be 10 initially
const int sentinel = 0;

int main() {

  // Variables
  
  int integers[array_size];			// create array of integers
  int tmp_number;				// temporary value for user input to the array
  int count = 0;				// create count for each time a value is added to the array for error-checking
  int tmp_index = 0;                    	// to save index where number shoudl be placed
  int sum;					// make a sum for calculating average
  double average = 0;					// create average for saving average of the array
  int ct_less_avg = 0;				// create a count for numbers less than or equal to the average
  int ct_greater_avg = 0;			// create a count for numbers greater than the average
  int index_less_avg; 				// create holder for the index of the list where the average separates list
  int ct_even_less_avg = 0;			// create a count for even numbers less than or equal to the average
  int ct_even_greater_avg = 0;			// create a count for  even numbers greater than the average
  int ct_odd_less_avg = 0;			// create a count for odd numbers less than or equal to the average
  int ct_odd_greater_avg = 0;			// create a count for odd numbers greater than the average
  int even_integers[array_size];		//initalizing even integer
  int odd_integers[array_size];		//instantiating odd integers arrar
  int index_even_integers = 0;		//instantiation count for index of even integers array
  int index_odd_integers = 0;		//instantiation count for index of odd integers array

  
  // Format to two decimal places
  
  cout << fixed << showpoint << setprecision(2);
  
  // Describe to user what program does
  
  cout << "\n\nThis program will take integers the user inputs, up to " << array_size << " integers long. \n";
  cout << "It will then output: \n \t 1. The integers separated in ascending order \n \t 2. ";
  cout << "The integers separated by spaces in descending order \n \t 3. Average value \n \t ";
  cout << "4. Median value \n \t 5. Number of integers that is equivalent or less than or greater than ";
  cout << "the average \n \t 6. Same as previous using a different algorithm \n \t 7. Information for: ";
  cout << " even integers equal or less than the average, even integers greater \n \t \t than the average, ";
  cout << "odd integer equal to or less than the average, and even integers \n \t \t greater than the average";
  cout << " \n \t 8. Separate and display two arrays, one for evens and another for the odds.";
  cout << endl << endl;
  
  // Ask user for input
  
  cout << "Please enter an integer for the array: ";
  cin >> tmp_number;
  
  // loop for verifying input and inserting into the array
  while (tmp_number != sentinel && count <= array_size) {
     if (tmp_number > 0) {
      tmp_index = count;
      for (int i = count; (i>0) && (integers[i-1] > tmp_number); i--) {
	integers[i] = integers[(i-1)];
	tmp_index = i-1;
      } // end for
      integers[tmp_index] = tmp_number;    // insert number into its right place
     }
     else { 
       cout << "\nYou entered a negative number!\n";
    
    
      // asking for a new number
      cout << "\nPlease enter another integer for the list: ";
      cin >> tmp_number;
      tmp_index++;
      count++;                		// incrementing count each time through
    
  } // end while loop
  
  // inform user they are done entering numbers
  if (tmp_number = 0) { 
	  cout << "Finished entering, you entered 0." << endl << endl;
  } //end if
  else {
	  cout << "Finished entering, you exceeded ten integers." << endl << endl;
  } // end else
  
  
  // Number 1
  // iterate through the list and print values in ascending order
  
  cout << "1. Integer List in ascending order: ";
  for (int i = 0 ; i < count; i++) {
    cout << integers[i] <<" ";		// prints each number in the array separated by spaces
  } // end for loop
  cout << endl;
  
  // Number 2
  // iterate through the list and print values in descending order
  
  cout << "2. Integer List in descending order: ";
  for (int i = count; i > 0; i--) {
    cout << integers[i-1] <<" ";	// prints each number in the array separated by spaces
  } // end for loop
  cout << endl;
  
  // Number 3
  // calculating the average value in the array
  
  cout << "3. Average Value: ";
  sum = 0;
  for (int i = 0 ; i < count; i++) {
    sum += integers[i];
  } // end for loop
  if (count!=0) {
    cout << (static_cast<double>(sum)/count);
  } // end if loop
  cout << endl;
  
  // Number 4
  // calculating the median value in the array

  cout << "4. Median Value: ";

  // format to one decimal place
  cout << fixed << showpoint << setprecision(1);

  // if odd number of integers, print one in middle
  if (count%2 ==1) {
    cout << static_cast<double>(integers[count/2]) <<endl;
  } // end if
  // if even number, add up the two middle values and divide by two
  else {
    cout << (static_cast<double>(integers[(count+1)/2]) + integers[(count-1)/2]) / 2 <<endl; 
  } //end else
    
  
  // Number 5
  //Calculate the number of values less than or equal to the average
  //and numbers greater than average
  
  //calculate average
  sum = 0;
  for (int i = 0 ; i < count; i++) {
    sum += integers[i];
  } // end for loop
  if (count!=0) {
	  average = static_cast<double>(sum) / count;
  } // end if loop
  
  // check if the intger is less than or equal to the average and increment count
  for (int i = 0 ; i < count; i++) {
	// if less than or equal to the average, increment count of average
    if (integers[i] <= average) {
      ct_less_avg++;
    } // end if loop
	// else, increment count greater than the average
	else {
		ct_greater_avg++;
	} // end else loop
  } // end for loop

  // printing values for number 5
  cout << "5. Number of values less than or equal to the average: ";
  cout << ct_less_avg << endl;
  cout << "   Number of values greater than the average: ";
  cout << ct_greater_avg << endl;
  
  
  // Number 6:
  // Calculate the number of values less than or equal to the average
  // and numbers greater than average using different algorithm
   
  // calculate average
  sum = 0;
  for (int i = 0 ; i < count; i++) {
    sum += integers[i];
  } // end for loop
  if (count!=0) {
	  average = static_cast<double>(sum) / count;
  } // end if loop
  
  // check if the intger is greater than the average and have index saved to variable
  for (int i = 0 ; i < count; i++) {
    // check if the integer we are on is greater than the average
    // and the one after is less than or equal the average
    if (integers[i] > average && integers[i-1] <= average) {
      index_less_avg = i;
    } // end if loop
  } // end for loop
  
  // printing output for number 6
  cout << "6. Number of values less than or equal to the average: ";
  cout << index_less_avg <<endl;
  cout << "   Number of values greater than the average: ";
  cout << count - index_less_avg << endl;
  
  
  // Number 7.
  // Output information about even and odds
  
  // calculate average
  sum = 0;
  for (int i = 0 ; i < count; i++) {
    sum += integers[i];
  } // end for loop
  if (count!=0) {
	  average = static_cast<double>(sum)/ count;
  } // end if loop
  
  // iterate through the integer array and check if even, off, less than or equal to, or greater than the average
  for (int i = 0 ; i < count; i++) {
	// check if the integer is less than or equal to the average and even, then increment count
    if (integers[i] <= average && integers[i]%2 ==0) {
      ct_even_less_avg++;
    } //end if loop
	// check if the integer is greater than the average and even, then increment count
	else if (integers[i] > average && integers[i] % 2 == 0) {
		ct_even_greater_avg++;
	} //end else if loop
	// check if the integer is less than or equal to the average and odd, then increment count
	else if (integers[i] <= average && integers[i] % 2 == 1) {
			ct_odd_less_avg++;
	} // end else if loop
	// else increment count for integers greater than the average and odd
	else {
		ct_odd_greater_avg++;
	} //end else statement
  } //end for loop
  
  //printing output for number 7
  cout << "7. Information about even and odd intgers: " << endl;
  cout << "\tNumber of even values less than or equal to the average: ";
  cout << ct_even_less_avg <<endl;
  cout << "\tNumber of even values greater than the average: ";
  cout << ct_even_greater_avg <<endl;
  cout << "\tNumber of odd values less than or equal to the average: ";
  cout << ct_odd_less_avg <<endl;
  cout << "\tNumber of odd values greater than the average: ";
  cout << ct_odd_greater_avg <<endl;


  // Number 8.
  // putting even and odd integers into to separate arrays and displaying

  //separating into an even and odd array
  for (int index = 0; index < count; index++) {
	//if even add integer to even_integers array
	if (integers[index] % 2 == 0) {
	  even_integers[index_even_integers] = integers[index];
	  index_even_integers++;	// increment index each time value is added
	} //end if 
	//else, it's an odd integer so add to odd integer array
	else {
	  odd_integers[index_odd_integers] = integers[index];
	  index_odd_integers++;	// increment index each time value is added
	} // end else
  } //end for statement

  //display arrays
  cout << "8. Even array: ";
  //iterate through the even array and display
  for (int ct_even = 0; ct_even < index_even_integers; ct_even++) {
	  cout << even_integers[ct_even] << " ";
  } //end for loop
  cout << endl << "   Odd array: ";			//new line for odd integer array
  for (int ct_odd = 0; ct_odd < index_odd_integers; ct_odd++) {
	  cout << odd_integers[ct_odd] << " ";
  } // end for loop
  cout << endl << endl << "---End of Program---" << endl;

  return 0; 					//end program
  
} //end main