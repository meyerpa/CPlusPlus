CC=g++
CFLAGS=
LFLAGS=
OBJECTS=	main.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o:		main.cpp
		$(CC) $(CFLAGS) -c main.cpp
clean:
		rm -rf $(OBJECTS) $(EXE) *~

