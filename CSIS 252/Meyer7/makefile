# Paige Meyer
# CSIS 252
# Makefile -prog7
# date: 3/13/2015

# macros

EXE = prog7

CC = g++

OBJECTS = main.o read.o sort_age.o print_array.o

TEXTFILES = data

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):				$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp constants.h prototypes.h decl.h
				$(CC) $(CFLAGS) -c main.cpp

read.o:				read.cpp constants.h decl.h
				$(CC) $(CFLAGS) -c read.cpp

sort_age.o:			sort_age.cpp decl.h
				$(CC) $(CFLAGS) -c sort_age.cpp
				
print_array.o:			print_array.cpp decl.h constants.h
				$(CC) $(CFLAGS) -c print_array.cpp

clean: 
			rm -rf $(EXE) $(OBJECTS) $(TEXTFILES) *~




