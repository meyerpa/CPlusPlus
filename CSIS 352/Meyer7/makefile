# File:     makefile
# Author:   Paige Meyer
# Date:     04/11/2016

EXE = prog7
CC = g++
OBJECTS = main.o

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
		
main.o: 	main.cpp binarySearchTree.h binaryTree.h 
		$(CC) -c main.cpp
		
clean:
		rm -rf $(OBJECTS) *~ $(EXE)

