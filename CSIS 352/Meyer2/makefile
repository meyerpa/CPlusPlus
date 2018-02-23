# Paige Meyer
# CSIS 352
# Makefile prog2
# date: 02/02/2016

# macros

EXE = prog2

CC = g++

OBJECTS = main.o date.o dateException.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):				$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp date.h date.cpp 
				$(CC) $(CFLAGS) -c main.cpp

date.o:				date.cpp date.h dateException.cpp
				$(CC) $(CFLAGS) -c date.cpp

dateException.o:		dateException.cpp
				$(CC) $(CFLAGS) -c dateException.cpp
clean: 
				rm -rf $(EXE) $(OBJECTS) $(TEXTFILES) *~
