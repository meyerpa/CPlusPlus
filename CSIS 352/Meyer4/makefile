# file: makefile
# author: Paige Meyer
# class: CSIS 352

EXE = prog4
CFLAGS = 
OBJECTS = main.o

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS)
		
main.o:		main.cpp linkedQueue.h
		g++ -c main.cpp

clean:		
		rm -rf *~ $(OBJECTS) $(EXE)