// Course: SENG1120
// Assignment: A2
// Name: Toby Dines
// Student Number: c3328008
// Date:

#include "Node.h"
typedef Node::value_type value_type;

Node::Node(){
    //default constructor
    prev = NULL;        //initially setting nodes to null
    next = NULL;
}

Node::~Node(){
    //as data is not a pointer there is nothing to delete
}


//
//      getters and setters
//

void Node::setNextNode(Node* next_){
    next = next_;               //moves requested next to next Node
}

Node* Node::getNextNode() const{
    return next;                //returns next
}

void Node::setPrevNode(Node* prev_){
    prev = prev_;               //moves requested prev to prev node
}

Node* Node::getPrevNode() const{
    return prev;                //returns prev
}

void Node::setData(value_type& data_){
        data = data_;           //moves data into data node
}

value_type Node::getData() const{
    return data;                //returns data
}

