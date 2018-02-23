#include <iostream>
#include <list>
using namespace std;

template <class T>
class myClass
{
   public:
      void insert(const T&);
   private:
      list<T> values;
};

template <class T>
void myClass<T>::insert(const T& item)
{
   values.insert(values.end(),item);
}

int main()
{
   myClass<int> x;
   x.insert(4);
   x.insert(12);
   x.insert(7);
   x.insert(9);
   return 0;
}

