// Author: Paige Meyer
// Date: 03/26/2016
// Description: graph class

#ifndef __GRAPH_H__
#define __GRAPH_H__


#include <iostream>
#include <string>
#include <list>
#include "Vertex.h"
#include <map>
#include <iterator>
#include <iomanip>
using namespace std;


enum directed {DIRECTED, UNDIRECTED};
enum weighted {WEIGHTED, UNWEIGHTED};

namespace GraphNameSpace {
  
template<class Type> class Graph {
  public:
    // method - constructor
    // description - construct a new graph object
    // preconditions - <none>
    // postconditions - Graph object created and initialized to values provided
    // method input - directed and weighted
    // method output - <none>
    Graph(directed, weighted);

    // method - constructor
    // description - construct a new graph object
    // preconditions - <none>
    // postconditions - Graph object created and initialized to values provided
    // method input - weighted and directed
    // method output - <none>
    Graph(weighted, directed);
    
    // method - constructor
    // description - construct a new graph object
    // preconditions - <none>
    // postconditions - Graph object created and initialized to values provided
    // method input - directed
    // method output - <none>
    Graph(directed);
    
    // method - constructor
    // description - construct a new graph object
    // preconditions - <none>
    // postconditions - Graph object created and initialized to values provided
    // method input - weighted
    // method output - <none>
    Graph(weighted);
    
    // method - constructor
    // description - construct a new graph object
    // preconditions - <none>
    // postconditions - Graph object created and initialized to default values
    // method input - <none>
    // method output - <none>
    Graph();
    
    // method - destroy
    // description - deletes all edges and vertices
    // preconditions - <none>
    // postconditions - Graph object deletes all the edges and vert
    // method input - <none>
    // method output - <none>
    void destroy();
    
    // method - isEmpty
    // description - returns true if the graph is empty
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - if the grpah is empty (boolean)
    bool isEmpty() const;
    
    // method - isFull
    // description - returns true if is the graph is full
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - if the graph is full (boolean)
    bool isFull() const;
        
    // method - isAdjacentTo
    // description - returns true if the cities are adjacent
    // preconditions - <none>
    // postconditions - <none>
    // method input - fromVertex (Type), toVertex (Type)
    // method output - if the city is adjacent to another (boolean)
    bool isAdjacentTo(Type fromVertex, Type toVertex) const;
    
    // method - edgeWeight
    // description - returns the edge weight between two cities, -1 if it doesn't exist
    // preconditions - <none>
    // postconditions - <none>
    // method input - fromVertex (Type), toVertex (Type)
    // method output - the edge weight (int)
    int edgeWeight(Type fromVertex, Type toVertex) const;
     
    // method - edgeCount
    // description - returns the number of edges in the graph
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - the edge count (int)
    int edgeCount() const;

    // method - vertexCount
    // description - returns the number of vert in the graph
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none>
    // method output - the vertex count (int)
    int vertexCount() const;
    
    // method - insertVertex
    // description - inserts a vertex into the graph
    // preconditions - <none>
    // postconditions - a vertex is inserted into the graph
    // method input - tmp_vertex (Type)
    // method output - <none>
    void insertVertex(Type tmp_vertex);
 
    // method - insertEdge
    // description - inserts an edge into the graph
    // preconditions - <none>
    // postconditions - an edge is inserted into the graph
    // method input - fromVertex (Type), toVertex (Type), and weight (int) 
    // method output - <none>
    void insertEdge(Type fromVertex, Type toVertex, int weight=1);

    // method - deleteEdge
    // description - deletes an edge from the graph
    // preconditions - <none>
    // postconditions - an edge is delete from the graph
    // method input - fromVertex (Type) and toVertex (Type) 
    // method output - <none>
    void deleteEdge(Type fromVertex, Type toVertex);

    // method - deleteVertex
    // description - deletes a vertex from the graph
    // preconditions - <none>
    // postconditions - a vertex is delete from the graph
    // method input - tmp_vertex (Type) 
    // method output - <none>
    void deleteVertex(Type tmp_Vertex);

    // method - findVertex
    // description - returns the index of a vertex in the graph
    // preconditions - <none>
    // postconditions - <none>
    // method input - tmp_vertex (Type) 
    // method output - the vertex(int)
    int findVertex(Type tmp_Vertex) const;
    
    // method - find
    // description - returns the iterator of a vertex in the graph
    // preconditions - <none>
    // postconditions - <none>
    // method input - tmp_vertex (Type) 
    // method output - the iterotator(typename list< Vertex<Type> >::iterator)
    typename list< Vertex<Type> >::const_iterator find(Type tmp_vertex) const;

    // method - dump
    // description - dumps out the graph contents
    // preconditions - <none>
    // postconditions - <none>
    // method input - <none> 
    // method output - <none>
    void dump() const;
    
    
  private:
    weighted edgeWeighted; 		// defaults to UNWEIGHTED
    directed edgeDirected; 		// defaults to UNDIRECTED
    list< Vertex<Type> > vert;		// holds information about vert 
};

// instantiating default of format


template<class Type> Graph<Type>::Graph(directed t_direct, weighted t_weight) {
  edgeDirected = t_direct;
  edgeWeighted = t_weight;
} 

template<class Type> Graph<Type>::Graph(weighted t_weight, directed t_direct) {
  edgeDirected = t_direct;
  edgeWeighted = t_weight;
}

template<class Type> Graph<Type>::Graph(directed t_direct) {
  edgeDirected = t_direct;
  edgeWeighted = UNWEIGHTED;
}

template<class Type> Graph<Type>::Graph(weighted t_weight) {
  edgeDirected = UNDIRECTED;
  edgeWeighted = t_weight;
}

template<class Type> Graph<Type>::Graph() {
  edgeDirected = UNDIRECTED;
  edgeWeighted = UNWEIGHTED;
}

template<class Type>  bool Graph<Type>::isEmpty() const {
  return (vert.empty());
}
 
template<class Type> 
void Graph<Type>::deleteEdge(Type fromVertex, Type toVertex) {
  for (typename list< Vertex<Type> >::iterator it = vert.begin(); it != vert.end(); it++)
    if (it->getName()==fromVertex)
      it->deleteEdgesTo(toVertex);    
  // do the same for the other side if undirected
  for (typename list< Vertex<Type> >::iterator it = vert.begin(); it != vert.end(); it++)
    if (it->getName()==toVertex)
      it->deleteEdgesTo(fromVertex); 
}

template<class Type> void Graph<Type>::insertVertex(Type tmp_vertex) {
  // std::cout << vertToInd.find(tmp_vertex.getValue()) << endl;
  // see if name is in container
  for (typename list< Vertex<Type> >::iterator it = vert.begin(); it != vert.end(); it++)
    if (it->getName()==tmp_vertex)
      throw GraphException("Cannot add duplicate Verticies");
  vert.push_back(Vertex<Type>(tmp_vertex)); // otherwise, add to list of vert 
}

// function to determine if the vertex matches

template<class Type> void Graph<Type>::deleteVertex(Type tmp_vertex) {
  // delete Edges to the extra vertex and deleted the vertex
  for (typename list< Vertex<Type> >::iterator it = vert.begin(); it != vert.end(); ) {
    if (it->getName() != tmp_vertex) { // delete (if any) edges to the vertex 
      it->deleteEdgesTo(tmp_vertex);
      it++;
    }
    else
      it = vert.erase(it);
  }
}

// Note: will not add an edge if the vert do not exist
// NOTE: need to clean-up
template<class Type> 
void Graph<Type>::insertEdge(Type fromVertex, Type toVertex, int weight) {
  // if unweighted, change the weight to 1
  if (edgeWeighted == UNWEIGHTED)
    weight=1;
  if (findVertex(fromVertex) != -1) {
    for (typename list< Vertex<Type> >::iterator it = vert.begin(); 
	 it != vert.end(); it++) {
      if (it->getName() == fromVertex)
	it->addEdge(toVertex, weight);
    } // end for
    // check if Undirected, if so add other side as well
    if (edgeDirected == UNDIRECTED) {
      for (typename list< Vertex<Type> >::iterator it = vert.begin(); 
	 it != vert.end(); it++) {
      if (it->getName() == toVertex)
	it->addEdge(fromVertex, weight);
      } // end for
    } // end inner if
  } // end outer if
}

template<class Type> 
int Graph<Type>::findVertex(Type tmp_vertex) const {
  int index=0;
  for (typename list< Vertex<Type> >::const_iterator it = vert.begin(); it != vert.end(); it++) {
    if (it->getName() == tmp_vertex)  
      return index;
    index++;
  }
  return -1;
}

// My apologies about the code, needs to be fixed this one is the non-const
template<class Type> 
typename list< Vertex<Type> >::const_iterator Graph<Type>::find(Type tmp_vertex) const{
  for (typename list< Vertex<Type> >::const_iterator it = vert.begin(); it != vert.end(); it++) {
    if (it->getName() == tmp_vertex)  
      return it;
  }
}

template<class Type> 
bool Graph<Type>::isAdjacentTo(Type fromVertex, Type toVertex) const{
  if (findVertex(fromVertex) != -1)
    (find(fromVertex))->isAdjacentTo(toVertex);
}
    

template<class Type> bool Graph<Type>::isFull() const {
  return (vert.size()==vert.max_size());
}

template<class Type> int Graph<Type>::vertexCount() const {
  return vert.size();
}

template<class Type> int Graph<Type>::edgeWeight(Type fromVertex, Type toVertex) const {
  if (findVertex(fromVertex)!=-1)
    (find(fromVertex))->getWeight(toVertex);
}

template<class Type> int Graph<Type>::edgeCount() const {
  int ct=0;
  for (typename list< Vertex<Type> >::const_iterator it = vert.begin(); it != vert.end(); it++) 
    ct += it->countEdges();
  return ct;
}


template<class Type> 
void Graph<Type>::destroy() {
  vert.clear();
}

template<class Type> void Graph<Type>::dump() const {
  // TODO: create a map to map the vert to numbers
  cout << "dumping graph:  " ;
  if (edgeDirected) 
    cout << "UNDIRECTED   ";
  else  
    cout << "DIRECTED   ";
  if (edgeWeighted)
    cout << "UNWEIGHTED   ";
  else 
    cout << "WEIGHTED   ";
  cout << "   vert:" << this->vertexCount() << "   edges:" ;
  cout << this->edgeCount() << "\nVERTEX              ADJACENT VERTICES\n";
  cout << "-----------------   --------------------------------------------\n";
  for (typename list< Vertex<Type> >::const_iterator it = vert.begin(); 
       it != vert.end(); it++) {
    cout << setw(16) << it->getName()  << "   ";
    it->dump();
    cout << endl;
  }
}


} // end namespace

#endif


