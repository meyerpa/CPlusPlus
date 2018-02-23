# File:     makefile
# Author:   Paige Meyer
# Date:     04/22/2016

EXE = prog8
CC = g++
OBJECTS = main.o symbol.o

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
		
main.o: 	main.cpp symbol.cpp
		$(CC) -c main.cpp
		
symbol.o:	symbol.cpp
		$(CC) -c symbol.cpp
		
clean:
		rm -rf $(OBJECTS) *~ $(EXE)

