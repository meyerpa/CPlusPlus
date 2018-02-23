# Paige Meyer
# CSIS 352
# Makefile prog1
# date: 02/01/2016

# macros

EXE = prog1

CC = g++

OBJECTS = main.o currency.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):				$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp currency.h currency.cpp
				$(CC) $(CFLAGS) -c main.cpp

currency.o:			currency.cpp currency.h
				$(CC) $(CFLAGS) -c currency.cpp

clean: 
			rm -rf $(EXE) $(OBJECTS) $(TEXTFILES) *~