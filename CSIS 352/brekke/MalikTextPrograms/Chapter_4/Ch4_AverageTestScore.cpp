//Program: Average test score.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream inFile;  //input file stream variable
	ofstream outFile; //output file stream variable

	int test1, test2, test3, test4, test5;
	double average;
	char studentId;

	inFile.open("a:\\test.txt"); //open the input file

	if (!inFile)
	{
        cout << "Cannot open the input file. "
			 << "The program terminates." << endl;
        return 1;
	}
	
	outFile.open("a:\\testavg.out"); //open the output file

	outFile << fixed << showpoint;
	outFile << setprecision(2);

	cout << "Processing data" << endl;

	inFile >> studentId;

	outFile << "Student Id: " << studentId << endl;

	inFile >> test1 >> test2 >> test3 >> test4 >> test5;

	outFile << "Test scores: " << setw(4) << test1
		    << setw(4) << test2 << setw(4) << test3
		    << setw(4) << test4 << setw(4) << test5 << endl;

	average = static_cast<double>(test1 + test2 + 
							test3 + test4 + test5) / 5.0;

	outFile << "Average test score: " << setw(6)
		    << average << endl;

	inFile.close();
	outFile.close();

	return 0;
}
