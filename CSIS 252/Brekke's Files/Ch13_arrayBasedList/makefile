CC=g++
CFLAGS=
LFLAGS=
OBJECTS=	main.o arrayListTypeImp.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o:		main.cpp arrayListType.h 
		$(CC) $(CFLAGS) -c main.cpp
arrayListTypeImp.o:	arrayListType.h arrayListTypeImp.cpp
		$(CC) $(CFLAGS) -c arrayListTypeImp.cpp
clean:
		rm -rf $(OBJECTS) $(EXE) *~

