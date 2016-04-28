//Header File Binary Search Tree

#ifndef H_binarySearchTree
#define H_binarySearchTree
#include <iostream>
#include <cassert>
#include "binaryTree.h"
#include <stack>
using namespace std;

template<class elemType>
class bSearchTreeType: public binaryTreeType<elemType>
{
public:

    void insert(const elemType& insertItem);
      //Function to insert insertItem in the binary search tree.
      //Postcondition: If there is no node in the binary search
      //               tree that has the same info as insertItem,
      //               a node with the info insertItem is created
      //               and inserted in the binary search tree.


    void deleteNode(const elemType& deleteItem);
      //Function to delete deleteItem from the binary search tree 
      //Postcondition: If a node with the same info as deleteItem 
      //               is found, it is deleted from the binary 
      //               search tree.
	  //               If the binary tree is empty or deleteItem
      //               is not in the binary tree, an appropriate
      //               message is ptinted.
    
    void path(const elemType& item);
      //Function to output the path from the item to the root with each
      //     item separated with a blank
      //Input: item to find the path
      //Output: none
      //Precondition:  item must be in the tree
      //Postcondition: the path is output
    
    int level(const elemType& item) const;
      //Function to return the level of the tree where item is.
      //     The level is the number of branches from the root to the node. 
      //     The root is at level 0.
      //Input: item to find the level where it's at
      //Output: level where item is
      //Precondition:  item must be in the tree
      //Postcondition: Returns the level where item is
    
    void generation(const elemType& item) const;
      //Function to output all items at the same level as item 
      //     (including the item itself) separated with a blank
      //Input: item to find the generation
      //Output: none
      //Precondition:  item must be in the tree
      //Postcondition: the items at the same level as item are output
    
    bool siblings(const elemType& item1, const elemType& item2) const;
      //Function to return whether the items are siblings (by definition) or not
      //Input: two items of the type stored in the tree
      //Output: true if the items are siblings, otherwise false
      //Precondition: none 
      //Postcondition: whether items are siblings is returned
    
    void breadthFirstTraversal(void (*visit) (elemType&)) const;
      //Function to do a breadth first traversal of the tree
      //Input: a pointer to a function to execute on each item
      //Output: none
      //Precondition:  none
      //Postcondition: the traversal visits each node
      //NOTE: YOU PROBABLY WILL WANT TO WRITE AN ITERATIVE SOLUTION FOR THIS

private:
    void deleteFromTree(nodeType<elemType>* &p);
      //Function to delete the node to which p points is deleted
      //from the binary search tree.
      //Postcondition: The node to which p points is deleted
      //               from the binary search tree.
    
    stack<elemType> addPath(nodeType<elemType>* &p, const elemType& item, 
			    stack<elemType> path);
      //Function to add each the node in the path until reaches item  
      //the binary tree to which p points 
 	  //Postcondition: The number of leaves in the binary 
	  //               tree to which p points is returned.
    
    int nodeLevel(nodeType<elemType> *p, const elemType& item) const;
      //Function to determine the level item is at in
      //the binary tree to which p points 
 	  //Postcondition: <none>
          // Output: The number of leaves in the binary 
	  //               tree to which p points is returned.
       
    void generation(nodeType<elemType> *p, int level) const;
      //Function to output all nodes from
      //the binary tree to which p points at the level
 	  //Postcondition: <none>
    
    bool siblings(nodeType<elemType> *p,const elemType&,const elemType&) const;
      //Function to determine if two elements are siblings in
      //the binary tree to which p points 
 	  //Postcondition: <none>
    void nodeBreadthFirst(nodeType<elemType> *p,
		int, void (*visit) (elemType&)) const;
      //Function to determine the number of leaves in  
      //the binary tree to which p points 
 	  //Postcondition: The number of leaves in the binary 
	  //               tree to which p points is returned.
};

template<class elemType>
void bSearchTreeType<elemType>::breadthFirstTraversal(void (*visit) (elemType&)) const {
  for(int curr = 0; curr < this->treeHeight(); curr++){
    nodeBreadthFirst(binaryTreeType<elemType>::root, curr, visit);
  }
}

template<class elemType>
void bSearchTreeType<elemType>::nodeBreadthFirst(nodeType<elemType> *p,
		int level, void (*visit) (elemType&)) const {
  if (p==NULL)
    return;		// if null, return to caller
  else if (this->level(p->info) == level)
    visit(p->info);
  else {
    if (p->llink!=NULL)
      nodeBreadthFirst(p->llink, level, visit);
    if (p->rlink!=NULL)
      nodeBreadthFirst(p->rlink, level, visit);
  }
}

template<class elemType>
bool bSearchTreeType<elemType>::siblings(const elemType& item1, const elemType& item2) const {
  return siblings(binaryTreeType<elemType>::root,item1,item2);
}

template<class elemType>
bool bSearchTreeType<elemType>::siblings(nodeType<elemType> *p,
		const elemType& item1, const elemType& item2) const {
  if (p == NULL || (p->rlink == NULL && p->llink ==NULL)) {
    return false;
  }
  else if (p->llink == NULL) {
    return siblings(p->rlink, item1, item2);
  }
  else if (p->rlink == NULL) {
    return siblings(p->llink, item1, item2);
  }
  else if ((p->rlink->info ==item1) &&  (p->llink->info == item2)) {
    return true;
  }
  else if ((p->rlink->info ==item2) &&  (p->llink->info == item1)) {
    return true;
  }
  else {
    return (siblings(p->llink, item1, item2) || siblings(p->rlink, item1, item2));
  }
}

template<class elemType>
void bSearchTreeType<elemType>::generation(const elemType& item) const {
  // get level of item
  int lvl = level(item);
  generation(binaryTreeType<elemType>::root, lvl);
  cout << endl;
}

template<class elemType>
void bSearchTreeType<elemType>::generation(nodeType<elemType> *p,int level) const {
  if (p==NULL)
    return;		// if null, return to caller
  else if (this->level(p->info) == level)
    cout << p->info << ' ';
  else {
    if (p->llink!=NULL)
      generation(p->llink, level);
    if (p->rlink!=NULL)
      generation(p->rlink, level);
  }
}

// level //NOTE: should go in the BinarySearch Tree class
template<class elemType>
int bSearchTreeType<elemType>::level(const elemType& item) const {
  if (!this->search(item))  // Ensure if part of the graph
    return -1;
  else
    return nodeLevel(binaryTreeType<elemType>::root, item);
}

template<class elemType>
int bSearchTreeType<elemType>::nodeLevel(nodeType<elemType> *p, const elemType& item) const {
    if (p == NULL || p->info == item) {
      return 0;
    }
    else if (p->info < item) {
      return (1 + nodeLevel(p->rlink,item));
    }
    else {
      return (1 + nodeLevel(p->llink, item));
    }
}

template<class elemType>
void bSearchTreeType<elemType>::insert(const elemType& insertItem)
{
    nodeType<elemType> *current;  //pointer to traverse the tree
    nodeType<elemType> *trailCurrent; //pointer behind current
    nodeType<elemType> *newNode;  //pointer to create the node

    newNode = new nodeType<elemType>;
    assert(newNode != NULL);
    newNode->info = insertItem;
    newNode->llink = NULL;
    newNode->rlink = NULL;

    if (binaryTreeType<elemType>::root == NULL)
       binaryTreeType<elemType>::root = newNode;
    else
    {
       current = binaryTreeType<elemType>::root;
 
       while (current != NULL)
       {
           trailCurrent = current;

           if (current->info == insertItem)
           {
               cout << "The item to be inserted is already in ";
               cout << "the list -- duplicates are not allowed."
                    << endl;
               return;
           }
           else
               if (current->info > insertItem)
                   current = current->llink;
               else
                   current = current->rlink;
       }//end while

       if (trailCurrent->info > insertItem)
           trailCurrent->llink = newNode;
       else
           trailCurrent->rlink = newNode;
   }
}//end insert

template<class elemType>
void bSearchTreeType<elemType>::deleteNode(const elemType& deleteItem)
{
	nodeType<elemType> *current;  //pointer to traverse the tree
	nodeType<elemType> *trailCurrent; //pointer behind current
	bool found = false;

	if (binaryTreeType<elemType>::root == NULL)
		cout << "Cannot delete from an empty tree." 
		     << endl;
	else
	{
		current = binaryTreeType<elemType>::root;
		trailCurrent = binaryTreeType<elemType>::root;

		while (current != NULL && !found)
		{
			if (current->info == deleteItem)
				found = true;
			else
			{
				trailCurrent = current;

				if (current->info > deleteItem)
					current = current->llink;
				else
					current = current->rlink;
			}
		}//end while

		if (current == NULL)
			cout << "The item to be deleted is not in the tree." 
			     << endl;
		else
			if (found)
			{
				if (current == binaryTreeType<elemType>::root)
					deleteFromTree(binaryTreeType<elemType>::root);
				else
					if (trailCurrent->info > deleteItem)
						deleteFromTree(trailCurrent->llink);
					else
						deleteFromTree(trailCurrent->rlink);
			}//end if
	}
}//end deleteNode

template<class elemType>
void bSearchTreeType<elemType>::path(const elemType& item) {
  if (this->search(item)==false) 
    cout << "no node has " << item << " in tree\n";
  else {
    stack<elemType> path;
    path = addPath(binaryTreeType<elemType>::root, item, path);
    elemType num;
    while (!path.empty()) {
      num = path.top();  
      path.pop();
      cout << num << ' ';
     }
     cout << endl;
  }     
}

template<class elemType>
stack<elemType> bSearchTreeType<elemType>::addPath(nodeType<elemType>* &p,
	const elemType& item, stack<elemType> path) {
  if (p->info == item) {
    path.push(p->info);
    return path;
  }
  else if (p->info<item) {
    path.push(p->info);
    path = addPath(p->rlink, item, path);
    return path;
  }
  else {
    path.push(p->info);
    path = addPath(p->llink,item, path);
    return path;
  }
}

template<class elemType>
void bSearchTreeType<elemType>::deleteFromTree
                                 (nodeType<elemType>* &p)
{
     nodeType<elemType> *current;    //pointer to traverse 
                                     //the tree
     nodeType<elemType> *trailCurrent;   //pointer behind current
     nodeType<elemType> *temp;        //pointer to delete the node

     if (p == NULL)
         cout << "Error: The node to be deleted is NULL."
              << endl;
     else if (p->llink == NULL && p->rlink == NULL)
          {
             temp = p;
             p = NULL;
             delete temp;
          }
     else if (p->llink == NULL)
          {
             temp = p;
             p = temp->rlink;
             delete temp;
          }
     else if (p->rlink == NULL)
          {
             temp = p;
             p = temp->llink;
             delete temp;
          }
     else
     {
        current = p->llink;
        trailCurrent = NULL;

        while (current->rlink != NULL)
        {
            trailCurrent = current;
            current = current->rlink;
        }//end while

        p->info = current->info;

        if (trailCurrent == NULL) //current did not move; 
                                  //current == p->llink; adjust p
            p->llink = current->llink;
        else
            trailCurrent->rlink = current->llink;
 
        delete current;
     }//end else
}//end deleteFromTree

#endif
