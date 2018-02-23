# Paige Meyer
# CSIS 252
# Makefile -prog8
# date: 3/25/2015

# macros

EXE = prog8

CC = g++

OBJECTS = main.o dateType.o description.o personType.o print.o read.o

TEXTFILES = people

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):				$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp constants.h prototypes.h personType.h sort.h
				$(CC) $(CFLAGS) -c main.cpp

read.o:				read.cpp constants.h
				$(CC) $(CFLAGS) -c read.cpp

personType.o:			personType.cpp personType.h
				$(CC) $(CFLAGS) -c personType.cpp
				
dateType.o:			dateType.cpp dateType.h
				$(CC) $(CFLAGS) -c dateType.cpp

description.o:			description.cpp
				$(CC) $(CFLAGS) -c description.cpp

print.o:			print.cpp constants.h personType.h dateType.h
				$(CC) $(CFLAGS)-c print.cpp

clean: 
			rm -rf $(EXE) $(OBJECTS) $(TEXTFILES) *~