// File: prototypes.h
// Author: Paige Meyer
// Assignment: 5
// Date: 2/27/2015

// function prototypes

void program_description();
int input_integers_to_array(int integers[]);
void print_array_ascending(const int array[], int ct);
void print_array_descending(const int array[], int ct);
double average_value(const int numbers[], int ct);
double median_value(const int numbers[], int ct);
void count_less_average(const int numbers[], int ct, double avg, int& ct_less_avg, int& ct_greater_avg);
void index_count_less_average(const int numbers[], int ct, double avg, int& index_less_avg, int& index__greater_avg);
int even_less_equal_average(const int numbers[], int ct, double avg);
int even_greater_average(const int numbers[], int ct, double avg);
int odd_less_equal_average(const int numbers[], int ct, double avg);
int odd_greater_average(const int numbers[], int ct, double avg);
void separate_even_odd_arrays(const int numbers[], int, int even[], int& count_even, int odd[], int& count_odd) ;
void even_odd_counts(const int numbers[], int ct, double avg, int& ct_even_less,
      int& ct_even_greater, int& ct_odd_less, int& ct_odd_greater);
