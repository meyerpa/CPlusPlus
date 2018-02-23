prog:         main.o output.o biggest.o search.o read.o
	      g++ -o prog main.o output.o biggest.o search.o read.o
	      
main.o:       main.cpp constants.h
	      g++ -c main.cpp
	      
output.o:     output.cpp
	      g++ -c output.cpp
	      
biggest.o:    biggest.cpp
	      g++ -c biggest.cpp
	      
search.o:     search.cpp
	      g++ -c search.cpp
	      
read.o:       read.cpp constants.h
	      g++ -c read.cpp
	      
clean:
	      rm -rf *.o prog *~
	      
	      
	      
		

	