#ifndef _BST_H_
#define _BST_H_

#include <iostream>
#include <fstream>
using namespace std;
#include "binarySearchTree.h"

/*
This file contains a derived class from the binary search tree (bSearchTreeType)
that contains a method (writefile) that will output the binary search tree
to a file using a preorder traversal
*/

template <class T>
class BST : public bSearchTreeType<T>
{
   public:
      // function: writefile
      // description: creates/overwrites a file containing all the items
      //              in the binary search tree using a preorder traversal
      // preconditions: user supplies the filename and the visit function 
      //                that outputs one item in the desired form
      // postconditions: file is created or overwritten
      // method input: C-string filename (like argv[1])
      //               visit function that takes an ostream and templated item
      // method output: none
      void writefile(char*, void (*visit) (ostream&, T&) );

   private:
      void preorderFile(nodeType<T> *p,ostream&,void (*visit) (ostream&, T&)) const;
};

template <class T>
void BST<T>::writefile(char* file, void (*visit) (ostream& f,T&))
{
   ofstream f;
   f.open(file);
   preorderFile(binaryTreeType<T>::root,f,visit);
   f.close();
}

template<class T>
void BST<T>::preorderFile(nodeType<T> *p,ostream& out, void (*visit) (ostream& f,T& item)) const
{
   if (p != NULL)
   {
      (*visit)(out,p->info);
      preorderFile(p->llink,out,*visit);
      preorderFile(p->rlink,out,*visit);
   }
}


#endif

