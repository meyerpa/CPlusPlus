CC=g++
CFLAGS=
LFLAGS=
OBJECTS=	main.o groceryitem.o menu.o additem.o deleteitem.o \
                total.o totalitem.o
EXE=prog
$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o:		main.cpp arrayListType.h groceryitem.h prototypes.h
		$(CC) $(CFLAGS) -c main.cpp
menu.o:		menu.cpp 
		$(CC) $(CFLAGS) -c menu.cpp
groceryitem.o:	groceryitem.h groceryitem.cpp
		$(CC) $(CFLAGS) -c groceryitem.cpp
additem.o:	additem.cpp arrayListType.h groceryitem.h
		$(CC) $(CFLAGS) -c additem.cpp
deleteitem.o:	deleteitem.cpp arrayListType.h groceryitem.h
		$(CC) $(CFLAGS) -c deleteitem.cpp
total.o:	total.cpp arrayListType.h groceryitem.h
		$(CC) $(CFLAGS) -c total.cpp
totalitem.o:	totalitem.cpp arrayListType.h groceryitem.h
		$(CC) $(CFLAGS) -c totalitem.cpp
clean:
		rm -rf $(OBJECTS) $(EXE) *~

