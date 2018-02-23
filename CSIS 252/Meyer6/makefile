# Paige Meyer
# CSIS 252
# Makefile -prog6
# date: 3/5/2015

# macros

EXE = prog6

CC = g++

OBJECTS = main.o average.o median.o mode.o file_print.o read.o sort.o

TEXTFILES = input output

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):				$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp constants.h prototypes.h
				$(CC) $(CFLAGS) -c main.cpp

average.o:			average.cpp
				$(CC) $(CFLAGS) -c average.cpp

median.o: 			median.cpp
				$(CC) $(CFLAGS) -c median.cpp

mode.o:				mode.cpp
				$(CC) $(CFLAGS) -c mode.cpp

file_print.o:			file_print.cpp
				$(CC) $(CFLAGS) -c file_print.cpp

read.o:				read.cpp constants.h
				$(CC) $(CFLAGS) -c read.cpp

sort.o:				sort.cpp
				$(CC) $(CFLAGS) -c sort.cpp

# remove unnessary files from directory

clean:				
				rm -rf $(EXE) $(OBJECTS) $(TEXTFILES) *~
