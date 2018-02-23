#include <iostream>
#include <list>
using namespace std;

template <class T>
class myClass
{
   public:
      void insert(const T&);
      void print() const;
      void traversal( void (*) (T&) );
   private:
      list<T> values;
};

template <class T>
void myClass<T>::print() const
{
   typename list<T>::const_iterator p;
   for (p=values.begin(); p!=values.end(); p++)
      cout << *p << ' ';
   cout << endl;
}

template <class T>
void myClass<T>::traversal( void (*fptr) (T&) )
{
   typename list<T>::iterator p;
   for (p=values.begin(); p!=values.end(); p++)
      fptr(*p);
}

template <class T>
void myClass<T>::insert(const T& item)
{
   values.insert(values.end(),item);
}

void output(int& num)
{
   cout << num << ' ';
}

void increment(int& num)
{
   num++;
}

int main()
{
   myClass<int> x;
   x.insert(4);
   x.insert(12);
   x.insert(7);
   x.insert(9);
   x.print();
   x.traversal(output);
   cout << endl;
   x.traversal(increment);
   x.traversal(output);
   cout << endl;
   return 0;
}

