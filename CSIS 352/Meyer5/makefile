# file: makefile
# author: Paige Meyer
# class: CSIS 352

EXE = prog5
CFLAGS = 
OBJECTS = main.o

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS)
		
main.o:		main.cpp graph.h Vertex.h
		g++ -c main.cpp
clean:		
		rm -rf *~ $(OBJECTS) $(EXE)
