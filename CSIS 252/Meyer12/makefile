# Paige Meyer
# CSIS 252
# Makefile -prog12
# date: 4/28/2015

# macros

EXE = prog12

CC = g++

OBJECTS = main.o read.o personType.o menu.o dateType.o phoneEntry.o description.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):			$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:			main.cpp prototypes.h phoneEntry.h bst.h
			$(CC) $(CFLAGS) -c main.cpp

read.o:			read.cpp bst.h phoneEntry.h
			$(CC) $(CFLAGS) -c read.cpp
				
dateType.o:		dateType.cpp dateType.h
			$(CC) $(CFLAGS) -c dateType.cpp
			
personType.o:		personType.cpp personType.h dateType.h
			$(CC) $(CFLAGS) -c personType.cpp
			
phoneEntry.o:		phoneEntry.cpp phoneEntry.h personType.h
			$(CC) $(CFLAGS) -c phoneEntry.cpp
			
menu.o:			menu.cpp phoneEntry.h
			$(CC) $(CFLAGS) -c menu.cpp

description.o:		description.cpp
			$(CC) $(CFLAGS) -c description.cpp

clean: 			
			rm -rf $(EXE) $(OBJECTS) *~