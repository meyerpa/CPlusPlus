# Paige Meyer
# CSIS 252
# Makefile -prog10
# date: 4/16/2015

# macros

EXE = prog10

CC = g++

OBJECTS = main.o dateType.o description.o studentType.o print.o read.o personType.o openfiles.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):			$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:			main.cpp constants.h prototypes.h studentType.h orderedList.h arrayListType.h 
			$(CC) $(CFLAGS) -c main.cpp

read.o:			read.cpp constants.h studentType.h orderedList.h arrayListType.h
			$(CC) $(CFLAGS) -c read.cpp

studentType.o:		studentType.cpp studentType.h personType.h dateType.h
			$(CC) $(CFLAGS) -c studentType.cpp

personType.o:		personType.cpp personType.h dateType.h
			$(CC) $(CFLAGS) -c personType.cpp
				
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