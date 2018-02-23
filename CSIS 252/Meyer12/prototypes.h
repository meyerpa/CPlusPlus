// File: prototypes.h
// Name: Paige Meyer
// Date: 04/28/2014
// Assignment: 12

// Description: will have functions prototypes

#include "bst.h"
#include "phoneEntry.h"
#include <fstream>
using namespace std;

void menu();
void menu(BST<phoneEntry> phonebook, int argc, char *argv[]);
bool openfiles(int argc,char *argv[],ifstream &ifs,ofstream &ofs);
void read(BST<phoneEntry>& tree, ifstream& file);