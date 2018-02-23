// BONUS - I wrote the methods without any assistance

// file: main.cpp
// author: Paige Meyer
// class: CSIS 352
// Description: This program tests the copy constructor,
// operator=, and destructor

#include <iostream>
#include <exception>
#include "linkedQueue.h"
using namespace std;

void func1(linkedQueueType<int> tmp) {
  tmp.addQueue(23);
}

int main()
{
  linkedQueueType<int> test1, test2, test3;
  // adding five queues
  test1.addQueue(12);
  test1.addQueue(-13);
  test1.addQueue(-79);
  test1.addQueue(30);
  test1.addQueue(39);
//  cout << "\n\nTesting destroyQueue...\n"
//  test1.destroyQueue();
  
  cout << "\n\nTesting operator=...\n";
  test2 = test1;
  test3 = test1; 
// tested  different addresses inside the class
// is commented out
  test1.addQueue(34);
  while (!(test1.isEmptyQueue())) {
    cout << test1.front() << ' ';
    test1.deleteQueue();
  }
  cout << "should be: 12 -13 -79 30 39 34\n";
  
  while (!test2.isEmptyQueue()) {
    cout << test2.front() << ' ';
    test2.deleteQueue();
  }
  cout << "should be: 12 -13 -79 30 39\n";
  
  cout << "\nTesting destructor...\n";
  func1(test3);
//  cout << tmp.front();  // SHOULD RAISE AN ERROR
  cout << "\nTesting copy constructor...\n";
  while (!test3.isEmptyQueue()) {
    cout << test3.front() << ' ';
    test3.deleteQueue();
  }
  cout << "should be: 12 -13 -79 30 39\n";
  return 0;
  
  // making sure can use with differnt type, e.g. char
  linkedQueueType<char> testChar;
  testChar.addQueue('a');
}
   
   
