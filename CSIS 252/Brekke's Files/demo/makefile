# File:    makefile
# Author:  Dan Brekke
# Program: class example

# This makefile will compile and link the program producing an
# executable called prog.

# macros
EXE=prog
OBJECTS=main.o demo.o
CFLAGS=
LFLAGS=
CC=g++

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp 
		$(CC) $(CFLAGS) -c main.cpp

demo.o:		demo.cpp demo.h
		$(CC) $(CFLAGS) -c demo.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) *~ 
