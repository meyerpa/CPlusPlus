// File: 	prototypes.h
// Author: 	Paige Meyer
// Assignment: 	6
// Class: 	CSIS 252
// Date: 	3/5/2015

#include <fstream>
using namespace std;

// Function prototypes

double average(const int numbers[], int ct);
void mode(const int numbers[], int ct, int& mode, int& mode_count);
int read(int numbers[], ifstream& file_name);
double median(const int numbers[], int ct);
void sort(int numbers[], int n);
void file_print(const int numbers[], int ct, ofstream& file_name);
