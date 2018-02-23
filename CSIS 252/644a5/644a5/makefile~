# Paige Meyer
# CSIS 252
# Makefile -prog5
# date: 2/27/2015

# macros

EXE = prog5

CC = g++

OBJECTS = main.o average_value.o count_less_average.o index_count_less_average.o \
          input_integers_to_array.o median_value.o print_array_ascending.o \
          print_array_descending.o program_description.o separate_even_odd_arrays.o \
          even_odd_counts.o

LFLAGS = 

CFLAGS = 

# dependencies

$(EXE):				$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp
				$(CC) $(CFLAGS) -c main.cpp

count_less_average.o:		count_less_average.cpp
				$(CC) $(CFLAGS) -c count_less_average.cpp

index_count_less_average.o:	index_count_less_average.cpp
				$(CC) $(CFLAGS) -c index_count_less_average.cpp

input_integers_to_array.o:	input_integers_to_array.cpp
				$(CC) $(CFLAGS) -c input_integers_to_array.cpp

median_value.o:			median_value.cpp
				$(CC) $(CFLAGS) -c median_value.cpp

print_array_ascending.o: 	print_array_ascending.cpp
				$(CC) $(CFLAGS) -c print_array_ascending.cpp

print_array_descending.o:	print_array_descending.cpp
				$(CC) $(CFLAGS) -c print_array_descending.cpp

program_description.o:		program_description.cpp
				$(CC) $(CFLAGS) -c program_description.cpp

separate_even_odd_arrays.o:	separate_even_odd_arrays.cpp
				$(CC) $(CFLAGS) -c separate_even_odd_arrays.cpp

even_odd_counts.o:		even_odd_counts.cpp
				$(CC) $(CFLAGS) -c even_odd_counts.cpp 



# remove unnessary files from directory

clean:				
				rm -rf $(EXE) $(OBJECTS) *~
				
				
