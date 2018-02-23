# Paige Meyer
# CSIS 352
# Makefile prog3
# date: 02/17/2016

# macros

EXE = prog3

CC = g++

OBJECTS = main.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):				$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
				
main.o:				main.cpp array.h 
				$(CC) $(CFLAGS) -c main.cpp

test:				test.o
				$(CC) $(CFLAGS) -o test test.o $(LFLAGS)
				
test.o: 			test.cpp array.h
				$(CC) $(CFLAGS) -c test.cpp
				
clean: 
				rm -rf $(EXE) $(OBJECTS) test.o $(TEXTFILES) *~
