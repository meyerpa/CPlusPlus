# File:     makefile
# Author:   Dan Brekke

# Description
# This makefile will make the example program of a circle class

CC=g++
OBJECTS=main.o circle.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o: 	main.cpp circle.h
		$(CC) -c main.cpp
circle.o:	circle.cpp circle.h
		$(CC) -c circle.cpp
clean:
		rm -rf prog *~ $(OBJECTS) $(EXE)

