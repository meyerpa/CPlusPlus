#include <iostream>
#include <list>
using namespace std;

template <class T>
class myList : public list<T>
{
   public:
      void print() const;
      void insert(const T&);  // insert at the end of the list
};

template <class T>
void myList<T>::insert(const T& item)
{
   list<T>::insert(this->end(),item);
}

template <class T>
void myList<T>::print() const
{
   typename list<T>::const_iterator p;
//    for (p=list<T>::begin(); p!=list<T>::end(); p++)
   for (p=this->begin(); p!=this->end(); p++)
      cout << *p << ' ';
   cout << endl;
}

int main()
{
   myList<int> x;
   x.push_back(43);
   x.push_back(12);
   x.push_back(28);
   x.insert(36);
   x.print();
   return 0;
}
