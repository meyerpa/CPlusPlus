//Header File Binary Search Tree
#ifndef H_binaryTree
#define H_binaryTree

#include <iostream>
#include <stdlib.h> 

using namespace std;

// Tree Error
class TreeError {
  public:
    TreeError(const string& m="") { msg = m; }
    string what() { return msg; }
  private:
    string msg;
};

	//Definition of the Node
template <class elemType>
struct nodeType
{
	elemType			info;
	nodeType<elemType>  *llink;
	nodeType<elemType>  *rlink;
};
	//Definition of the class
template <class elemType>
class binaryTreeType
{
public:
    bool search(const elemType& searchItem) const;
      //Function to determine if searchItem is in the binary 
      //search tree.
      //Postcondition: Returns true if searchItem is found in the 
      //               binary search tree; otherwise, returns false.
  
    const binaryTreeType<elemType>& operator=
                 (const binaryTreeType<elemType>&); 
      //Overload the assignment operator.
    bool isEmpty() const;
      //Function to determine whether the binary tree
	  //is empty.
	  //Postcondition: Returns true if the binary tree is empty;
      //               otherwise, returns false.
    void inorderTraversal() const;
      //Function to do an inorder traversal of the binary tree.
	  //Postcondition: Nodes are printed in inorder sequence.
    void preorderTraversal() const;
      //Function to do a preorder traversal of the binary tree.
	  //Postcondition: Nodes are printed in preorder sequence.
    void postorderTraversal() const;
      //Function to do a postorder traversal of the binary tree.
	  //Postcondition: Nodes are printed in postorder sequence.

	void inorderTraversal(void (*visit) (elemType&)) const;
	  //Function to do an inorder traversal of the binary tree.
	  //The parameter visit, which is a function, specifies
	  //the action to be taken at each node.
	  //Postcondition: The action specified by the function visit
	  //               is applied to each node of the binary tree.

    int treeHeight() const;
      //Funtion to determine the height of a binary tree.
	  //Postcondition: Returns the height of the binary tree.
    int treeNodeCount() const;
      //Funtion to determine the number of nodes in a 
	  //binary tree.
      //Postcondition: Returns the number of nodes in the 
	  //               binary tree.
    int treeLeavesCount() const;
      //Funtion to determine the number of leaves in a 
	  //binary tree.
      //Postcondition: Returns the number of leaves in the 
	  //               binary tree.
    
    int nonLeavesCount() const;
      //Funtion to determine the number of nonleaves in a 
	  //binary tree.
      //Postcondition: Returns the number of nonleaves in the 
	  //               binary tree.
   
   int oneChildCount() const;
      //Function to return number of nodes with one child
      //Input: none
      //Output: the number of nodes with one child
      //Precondition:  none
      //Postcondition: none

   int twoChildrenCount() const;
      //Function to return number of nodes with two children
      //Input: none
      //Output: the number of nodes with two children
      //Precondition:  none
      //Postcondition: none
   
   bool balanced() const;
      //Function to return whether the tree is balanced (by definition) or not
      //Input: none
      //Output: whether tree is balanced or not (bool)
      //Precondition:  none
      //Postcondition: Returns true if tree is balanced, false otherwise
      //NOTE: YOU MAY USE ANY OTHER METHOD
    
    void destroyTree();
      //Function to destroy the binary tree.
	  //Postcondition: Memory space occupied by each node 
	  //               is deallocatd.
      //               root = NULL;
    
   
   bool full() const;
      //Input: none
      //Output: whether tree is full or not (bool)
      //Function to return whether the tree is full (by definition) or not
      //Precondition:  none
      //Postcondition: Returns true if tree is full, false otherwise
      //NOTE: You may NOT use treeNodecount == 2^height-1 
   
   bool complete() const;
      //Input: none
      //Output: whether tree is complete or not (bool)
      //Function to return whether the tree is complete (by definition) or not
      //Precondition:  none
      //Postcondition: Returns true if tree is complete, false otherwise
    
    binaryTreeType(const binaryTreeType<elemType>& otherTree); 
      //copy constructor
   
    binaryTreeType();   
      //default constructor

    ~binaryTreeType();   
      //destructor

protected:
    nodeType<elemType>  *root;

private:
    void copyTree(nodeType<elemType>* &copiedTreeRoot,
                  nodeType<elemType>* otherTreeRoot);
      //Makes a copy of the binary tree to which 
      //otherTreeRoot points. 
	  //Postcondition: The pointer copiedTreeRoot points to
      //               the root of the copied binary tree.
    
    
    bool searchNode(const nodeType<elemType>* p,const elemType&) const;
      //Function to delete the node to which p points is deleted
      //from the binary search tree.
      //Postcondition: The node to which p points is deleted
      //               from the binary search tree.
    void destroy(nodeType<elemType>* &p);
      //Function to destroy the binary tree to which p points. 
      //Postcondition: Memory space occupied by each node, in the
	  //               binary tree to which p points, is deallocatd.
      //               p = NULL;

    void inorder(nodeType<elemType> *p) const;
      //Function to do an inorder traversal of the binary
      //tree to which p points.  
	  //Postcondition: Nodes of the binary tree, to which p
	  //               points, are printed in inorder sequence.
    void preorder(nodeType<elemType> *p) const;
      //Function to do a preorder traversal of the binary
      //tree to which p points.  
	  //Postcondition: Nodes of the binary tree, to which p
	  //               points, are printed in preorder sequence.
    void postorder(nodeType<elemType> *p) const;
      //Function to do a postorder traversal of the binary
      //tree to which p points.  
	  //Postcondition: Nodes of the binary tree, to which p
	  //               points, are printed in postorder sequence.
    
    void inorder(nodeType<elemType> *p, void (*visit) (elemType&)) const;
      //Function to do an inorder traversal of the binary
      //tree starting at the node specified by the parameter p. 
      //The parameter visit, which is a function, specifies the
      //action to be taken at each node.
      //Postcondition: The action specified by the function visit
      //               is applied to each node of the binary tree
      //               to which p points.

    int height(nodeType<elemType> *p) const;
      //Function to determine the height of the binary tree
      //to which p points. 
	  //Postcondition: Height of the binary tree to which 
	  //               p points is returned.
    int max(int x, int y) const;
      //Function to determine the larger of x and y.
	  //Postcondition: Returns the larger of x and y.
    int nodeCount(nodeType<elemType> *p) const;
      //Function to determine the number of nodes in 
      //the binary tree to which p points. 
  	  //Postcondition: The number of nodes in the binary 
	  //               tree to which p points is returned.
    int leavesCount(nodeType<elemType> *p) const;
      //Function to determine the number of leaves in  
      //the binary tree to which p points 
 	  //Postcondition: The number of leaves in the binary 
	  //               tree to which p points is returned.
    
    int nodeOneChildCount(nodeType<elemType> *p) const;
      //Function to determine the number of node with one child
      // of the binary tree to which p points 
 	  //Postcondition: <none>
    
    int nodeTwoChildrenCount(nodeType<elemType> *p) const;
      //Function to determine the number of two children nodes of
      //the binary tree to which p points 
 	  //Postcondition: <none>
    
    int nodeNonLeavesCount(nodeType<elemType> *p) const;
      //Function to determine the number of non-leaves in  
      //the binary tree to which p points 
 	  //Postcondition: The number of non-leaves in the binary 
	  //               tree to which p points is returned.
    
    int nodeLevel(nodeType<elemType> *p, const elemType& item) const;
      //Function to determine the level item is on of
      //the binary tree to which p points 
 	  //Postcondition: <none>
    
    bool fullNode(nodeType<elemType> *p) const;
      //Function to determine if
      //the binary tree to which p points is full
 	  //Postcondition: <none>
    
    bool balancedNode(nodeType<elemType> *p) const;
      //Function to determine whether
      //the binary tree to which p points is full
 	  //Postcondition: <none>
    
    bool completeNode(nodeType<elemType> *p) const;
      //Function to determine if 
      //the binary tree to which p points is complete
 	  //Postcondition: <none>
  
};

	//Definition of member functions

template<class elemType>
binaryTreeType<elemType>::binaryTreeType()
{
	root = NULL;
}

template<class elemType>
bool binaryTreeType<elemType>::isEmpty() const
{
	return (root == NULL);
}

template<class elemType>
void binaryTreeType<elemType>::inorderTraversal() const
{
	inorder(root);
}

template<class elemType>
void binaryTreeType<elemType>::preorderTraversal() const
{
	preorder(root);
}

template<class elemType>
void binaryTreeType<elemType>::postorderTraversal() const
{
	postorder(root);
}

template<class elemType>
int binaryTreeType<elemType>::treeHeight() const
{
	return height(root);
}

template<class elemType>
int binaryTreeType<elemType>::treeNodeCount() const
{
	return nodeCount(root);
}

template<class elemType>
bool binaryTreeType<elemType>::full() const {
  return fullNode(root);
}

template<class elemType>
bool binaryTreeType<elemType>::fullNode(nodeType<elemType> *p) const {
  if (p==NULL) 
    return true;
  else if ((p->llink==NULL&&p->rlink!=NULL) || (p->llink!=NULL&&p->rlink==NULL))
    return false;
  else if (height(p->rlink)==height(p->llink))
    return (fullNode(p->llink) && fullNode(p->rlink));
  else 
    return false;
}

template<class elemType>
bool binaryTreeType<elemType>::complete() const {
  return completeNode(root);
}

template<class elemType>
bool binaryTreeType<elemType>::completeNode(
      nodeType<elemType> *p) const {
  if (p==NULL)
    return true;
  else if (height(p->llink) < height(p->rlink)) 
    return false;
  else
    return completeNode(p->llink) && completeNode(p->rlink);
}

template<class elemType>
int binaryTreeType<elemType>::treeLeavesCount() const
{
	return leavesCount(root);
}

template<class elemType>
int binaryTreeType<elemType>::oneChildCount() const
{
	return nodeOneChildCount(root);
}

template<class elemType>
int binaryTreeType<elemType>::twoChildrenCount() const
{
	return nodeTwoChildrenCount(root);
}

template<class elemType>
bool binaryTreeType<elemType>::balanced() const
{
   return balancedNode(root);
}

template<class elemType>
bool binaryTreeType<elemType>::balancedNode(nodeType<elemType> *p) const {
  
  if (p==NULL)
    return true;
  int rheight = height(p->llink);	// height of right subtree
  int lheight = height(p->rlink);	// height of right subtree
  if (abs(rheight-lheight) <=1)
    return (balancedNode(p->llink) && balancedNode(p->llink));
  else
    return false;
}

template<class elemType>
int binaryTreeType<elemType>::nonLeavesCount() const
{
	return nodeNonLeavesCount(root);
}

template<class elemType>
bool binaryTreeType<elemType>::search(const elemType& searchItem) const
{
  
    //nodeType<elemType> *current;
    //bool found = false;

    if (root == NULL)
        cout << "Cannot search an empty tree." << endl;
    else
    { 
       return searchNode(root, searchItem);
    } /*

       while (current != NULL && !found)
       {
             if (current->info == searchItem)
                 found = true;
              else
                  if (current->info > searchItem)
                      current = current->llink;
                  else
                      current = current->rlink;
       }//end while
    }//end else

    return found;
    */
      // base case: node is null -> return 0
	//    node == tmp -> return 1;
    // general case: return (search(p->llink) || search(p->rlink));
    /*if (current==NULL) 
      return 0;
    else if (current->info == searchItem) 
      return 1;
    else
      search(current->llink) + search(current->rlink);*/
}//end search

template<class elemType>
bool binaryTreeType<elemType>::searchNode(const nodeType<elemType>* p, 
					   const elemType& item) const
{
    if (p==NULL) 
      return 0;
    else if (p->info == item) 
      return 1;
    else
      searchNode(p->llink, item) || searchNode(p->rlink, item);
}
/*
// level //NOTE: should go in the BinarySearch Tree class
template<class elemType>
int binaryTreeType<elemType>::level(const elemType& item) const
{
  if (!search(item)) 
    return -1;
  else
    return nodeLevel(root, item);
}
*/

template<class elemType>
int binaryTreeType<elemType>::nodeLevel(nodeType<elemType> *p, 
					const elemType& item) const {
    // base case: node is null -> return 0;
	//    node == tmp -> return 1;
   // NOTE: make sure in main part, should call search to ensure is in graph
    //cout << "in level .. ";
    if (p == NULL) 
      return 0;
    else if (p->info == item) 
      return 1;
    else if ((nodeLevel(p->llink, item) == 0 && nodeLevel(p->rlink, item) == 0))
      return 0;
    else if (nodeLevel(p->llink, item)<nodeLevel(p->rlink, item))
      return (1 + nodeLevel(p->llink, item));
    else
      return (1 + nodeLevel(p->rlink, item));
}
    
template <class elemType>
void  binaryTreeType<elemType>::copyTree
                      (nodeType<elemType>* &copiedTreeRoot,
		               nodeType<elemType>* otherTreeRoot)
{
	if (otherTreeRoot == NULL)
		copiedTreeRoot = NULL;
	else
	{
		copiedTreeRoot = new nodeType<elemType>;
		copiedTreeRoot->info = otherTreeRoot->info;
		copyTree(copiedTreeRoot->llink, otherTreeRoot->llink);
		copyTree(copiedTreeRoot->rlink, otherTreeRoot->rlink);
	}
} //end copyTree

template<class elemType>
void binaryTreeType<elemType>::inorder(nodeType<elemType> *p) const
{
	if (p != NULL)
	{
		inorder(p->llink);
		cout << p->info << " ";
		inorder(p->rlink);
	}
}

template<class elemType>
void binaryTreeType<elemType>::preorder(nodeType<elemType> *p) const
{
	if (p != NULL)
	{
		cout << p->info << " ";
		preorder(p->llink);
		preorder(p->rlink);
	}
}

template<class elemType>
void binaryTreeType<elemType>::postorder(nodeType<elemType> *p) const
{
	if (p != NULL)
	{
		postorder(p->llink);
		postorder(p->rlink);
		cout << p->info << " ";
	}		
}



   //Overload the assignment operator
template<class elemType>
const binaryTreeType<elemType>& binaryTreeType<elemType>::
           operator=(const binaryTreeType<elemType>& otherTree)
{ 
	if (this != &otherTree) //avoid self-copy
	{
		if (root != NULL)  //if the binary tree is not empty, 
			              //destroy the binary tree
			destroy(root);

		if (otherTree.root == NULL) //otherTree is empty
			root = NULL;
		else
			copyTree(root, otherTree.root);
	}//end else

   return *this; 
}

template <class elemType>
void  binaryTreeType<elemType>::destroy(nodeType<elemType>* &p)
{
	if (p != NULL)
	{
		destroy(p->llink);
		destroy(p->rlink);
		delete p;
		p = NULL;
	}
}

template <class elemType>
void  binaryTreeType<elemType>::destroyTree()
{
	destroy(root);
}

	//copy constructor
template <class elemType>
binaryTreeType<elemType>::binaryTreeType
              (const binaryTreeType<elemType>& otherTree)
{
	if (otherTree.root == NULL) //otherTree is empty
		root = NULL;
	else
		copyTree(root, otherTree.root);
}

template <class elemType>
binaryTreeType<elemType>::~binaryTreeType()
{
	destroy(root);
}

template<class elemType>
int binaryTreeType<elemType>::height(nodeType<elemType> *p) const
{
    // base case: node is null thus, empty, so return 0;
    // general case: if (height(left)>height(right)) -> return 1+height(left);
	//	  else: return 1+height(right);
	//or 1+ max(height(p->llink), height(p->rlink));
    if (p == NULL)
      return 0;
    else if (height(p->llink) > height(p->rlink))
      return 1 + height(p->llink);
    else
      return 1 + height(p->rlink);
}

template<class elemType>
int binaryTreeType<elemType>::max(int x, int y) const
{
	if (x >= y)
		return x;
	else
		return y;
}

template<class elemType>
int binaryTreeType<elemType>::nodeCount(nodeType<elemType> *p) const
{
	// base case -> is null thus, empty->return 0;
	// general case: 1+ count(right) +count(left)
	if (p==NULL)
	  return 0;
	else
	  return 1 + nodeCount(p->rlink) + nodeCount(p->llink);
}

template<class elemType>
int binaryTreeType<elemType>::leavesCount(nodeType<elemType> *p) const
{
    //base case: if p is null, return 0;
    //      if p doesn't have any children, return 1
    //general case:
	//      return leafcount(right)+leafcount(left);
    if (p==NULL)
      return 0;
    else if (p->rlink == NULL && p->llink == NULL)
      return 1;
    else
      return leavesCount(p->rlink)+leavesCount(p->llink);
}

template<class elemType>
int binaryTreeType<elemType>::nodeNonLeavesCount(nodeType<elemType> *p) const
{
    //base case: if p is null, return 0;
    //      if p doesn't have any children, return 1
    //general case:
	//      return leafcount(right)+leafcount(left);
    if (p==NULL)
      return 0;
    else if (p->llink !=NULL || p->rlink!=NULL) 
      return 1 + nodeNonLeavesCount(p->llink) + nodeNonLeavesCount(p->rlink);
    else
      return 0 + nodeNonLeavesCount(p->llink) + nodeNonLeavesCount(p->rlink);
}

template<class elemType>
int binaryTreeType<elemType>::nodeOneChildCount(nodeType<elemType> *p) const
{
    // base case: node is null -> return 0;
    // general case: (llink==NULL && rlink!=NULL) + (llink!=NULL && rlink==NULL) +
	// oneChildCount(llink) + oneChildCount(rlink);
    if (p==NULL) 
      return 0;
    else if (((p->llink) ==NULL && (p->rlink)!=NULL) || ((p->llink)!=NULL && (p->rlink)==NULL))
      return 1 + nodeOneChildCount(p->llink) + nodeOneChildCount(p->rlink);
    else
      return 0 + nodeOneChildCount(p->llink) + nodeOneChildCount(p->rlink);
}

template<class elemType>
int binaryTreeType<elemType>::nodeTwoChildrenCount(nodeType<elemType> *p) const
{
    // base case: node is null -> return 0;
    // general case (llink!=NULL && rlink!=NULL) + twoChildrenCount(llink) + twoChildrenCount(rlink)
    if (p==NULL) 
      return 0;
    else if ((p->llink !=NULL) && (p->rlink!=NULL))
      return 1 + nodeTwoChildrenCount(p->llink) + nodeTwoChildrenCount(p->rlink);
    else
      return 0 + nodeTwoChildrenCount(p->llink) + nodeTwoChildrenCount(p->rlink);
}

template <class elemType>
void binaryTreeType<elemType>::inorderTraversal
			                  (void (*visit) (elemType& item)) const
{ 
	inorder(root, *visit);
}

template <class elemType>
void binaryTreeType<elemType>::inorder(nodeType<elemType>* p,
							   void (*visit) (elemType& item)) const
{
	if (p != NULL)
	{
		inorder(p->llink, *visit);
		(*visit)(p->info);
		inorder(p->rlink, *visit);
	}
}

#endif

