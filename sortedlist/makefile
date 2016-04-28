# file: makefile
# author: Paige Meyer
# class: CSIS 352
# date: 04/02/2016

EXE = prog6
CFLAGS = 
OBJECTS = main.o

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS)
		
main.o:		main.cpp 
		g++ -c main.cpp
		
clean:		
		rm -rf *~ $(OBJECTS) $(EXE)
