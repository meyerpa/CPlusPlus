// Author: Paige Meyer
// Date:  03/26/2016
// Description: Vertex class for holding vertex information

#ifndef _VERTEX_H_
#define _VERTEX_H_

#include <string>
#include <stdexcept> 
#include <iterator>
#include <list>
//#include <sstream>
#include <iostream>
using namespace std;

// Note: adapted from Dr. Brekke's original vertex class
namespace GraphNameSpace {
  
class GraphException
{
   public:
      GraphException(const string& m="")
      { msg = m; }

      string what()
      { return msg; }

   private:
      string msg;
};  

  
  
template<class Type> class Vertex{
  public:
    Vertex() {}  				// default constructor
    Vertex(const Type& s) : name(s) {}  // constructor with argument
    const Type getName() const {return name;}
    bool operator==(const Vertex& v) const {return getName()==v.getName();}
    bool operator!=(const Vertex& v) const {return getName()!=v.getName();}
    bool operator<(const Vertex& v) const {return getName()<v.getName();}
    bool operator<=(const Vertex& v) const {return getName()<=v.getName();}
    bool operator>(const Vertex& v) const {return getName()>v.getName();}
    bool operator>=(const Vertex& v) const {return getName()>=v.getName();}
    bool isAdjacentTo(Type toVertex) const {
      for (typename list<info>::const_iterator it = adjList.begin(); it!=adjList.end(); it++)
        if ((it->otherVert)==toVertex) 
          return true;
      return false; }
    void addEdge(const Type toVertex, int tmp_weight) {
      info tmp; tmp.otherVert = toVertex; tmp.weight = tmp_weight;
      if (this->isAdjacentTo(toVertex)) // make sure not added numerous of the same edges
         throw GraphException("Did not create another edge");
      adjList.push_back(tmp); // TODO: make sure that not adding same edge
    } // end add Edge
    void deleteEdgesTo(const Type& toVertex) {
      for (typename list<info>::iterator it = adjList.begin(); it!=adjList.end();)
        if ((it->otherVert)==toVertex) 
          it = adjList.erase(it);
	else it++;
    } // end deleteEdgesTo	
    int getWeight(const Type& toVertex) const {
      for (typename list<info>::const_iterator it = adjList.begin(); it!=adjList.end(); it++)
        if ((it->otherVert)==toVertex) 
          return it->weight;
      return -1;
    } // end getWeight	
    int countEdges() const {
      return adjList.size();
    } // end getWeight	
    void dump() const {
      for (typename list<info>::const_iterator it = adjList.begin(); it!=adjList.end(); ++it)
	cout << it->otherVert << '(' << it->weight <<") ";
      
    }
   
   private:
     struct info {
	Type otherVert;
	int weight;
     };
     Type name;
     list<info> adjList;
     // function for removing edges to a Vertex
     
};

// instead could make a friends because not sure how to declare type when templated
/*ostream& operator<<(ostream& out, const Vertex<Type>& v)

{
   out << "Fix output";
   return out;
}*/

} // end namespace

#endif


