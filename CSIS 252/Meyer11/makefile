# Paige Meyer
# CSIS 252
# Makefile -prog11
# date: 4/20/2015

# macros

EXE = prog11

CC = g++

OBJECTS = main.o read.o toPostFix.o isShouldAddOperator.o print.o isOperator.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):			$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:			main.cpp prototypes.h constants.h queueType.h 
			$(CC) $(CFLAGS) -c main.cpp

read.o:			read.cpp stackType.h
			$(CC) $(CFLAGS) -c read.cpp

toPostFix.o:		toPostFix.cpp queueType.h stackType.h prototypes.h isOperator.o
			$(CC) $(CFLAGS) -c toPostFix.cpp

isShouldAddOperator.o:	isShouldAddOperator.cpp
			$(CC) $(CFLAGS) -c isShouldAddOperator.cpp

print.o:			print.cpp stackType.h
			$(CC) $(CFLAGS) -c print.cpp

isOperator.o:		isOperator.cpp
			$(CC) $(CFLAGS) -c isOperator.cpp

clean:
			rm -rf $(EXE) $(OBJECTS) *~