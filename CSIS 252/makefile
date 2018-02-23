# Paige Meyer
# CSIS 252
# Makefile -prog12
# date: 4/28/2015

# macros

EXE = prog11

CC = g++

OBJECTS = main.o print.o read.o personType.o openfiles.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):			$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:			main.cpp constants.h prototypes.h studentType.h orderedList.h arrayListType.h 
			$(CC) $(CFLAGS) -c main.cpp

read.o:			read.cpp constants.h studentType.h orderedList.h arrayListType.h
			$(CC) $(CFLAGS) -c read.cpp
				
dateType.o:		dateType.cpp dateType.h
			$(CC) $(CFLAGS) -c dateType.cpp

description.o:		description.cpp
			$(CC) $(CFLAGS) -c description.cpp

openfiles.o:		openfiles.cpp
			$(CC) $(CFLAGS) -c openfiles.cpp

print.o:		print.cpp constants.h studentType.h orderedList.h arrayListType.h
			$(CC) $(CFLAGS)-c print.cpp

clean: 			
			rm -rf $(EXE) $(OBJECTS) *~