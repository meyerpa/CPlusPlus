OBJECTS=main.o
CC=g++
CFLAGS=
LFLAGS=

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS) $(LFLAGS)

main.o:		main.cpp stack.h
		$(CC) $(CFLAGS) -c main.cpp

clean:
		rm -rf $(OBJECTS) *~ prog
