#ifndef _MYSTACK_H_
#define _MYSTACK_H_
#include <list>

template <class T>
class stack : private list<T>
{
   public:
      bool empty() const;
      void push(const T&);
      T top() const;
      void pop();
};

template <class T>
bool stack<T>::empty() const
{
   return list<T>::empty();
}

template <class T>
void stack<T>::push(const T& item)
{
   list<T>::push_front(item);
}

template <class T>
T stack<T>::top() const
{
   return list<T>::front();
}

template <class T>
void stack<T>::pop()
{
   list<T>::pop_front();
}


   
#endif