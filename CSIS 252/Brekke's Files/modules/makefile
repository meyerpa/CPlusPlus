# File:    makefile
# Author:  Dan Brekke
# Program: class example

# This makefile will compile and link the program producing an
# executable called prog.

# macros
EXE=prog
OBJECTS=main.o output.o read.o sort.o
CFLAGS=-Wall
LFLAGS=
CC=g++

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h
		$(CC) $(CFLAGS) -c main.cpp

output.o:	output.cpp
		$(CC) $(CFLAGS) -c output.cpp

read.o:		read.cpp constants.h
		$(CC) $(CFLAGS) -c read.cpp

sort.o:		sort.cpp
		$(CC) $(CFLAGS) -c sort.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) *~
		
