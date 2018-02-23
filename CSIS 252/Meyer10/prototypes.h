// File: 	prototypes.h
// Author: 	Paige Meyer
// Assignment: 	10
// Class: 	CSIS 252
// Date: 	4/16/2015

// Description: this file contains function prototypes

#include "studentType.h"
#include "orderedList.h"
#include <fstream>
using namespace std;

void description();
void read(orderedList<studentType>& stu, ifstream& file);
void print(const orderedList<studentType>& stu, ofstream& file);
bool openfiles(int argc, char *argv[], ifstream &ifs, ofstream &ofs);

