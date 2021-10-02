// Course: SENG1120
// Assignment: A2
// Name: Toby Dines
// Student Number: c3328008
// Date:

#include <string>
#include <cstdlib>
#include <iostream>
#include <string>
#include "Node.h"

#ifndef LinkedList_header
#define LinkedList_header

class LinkedList {
public:
    typedef Node::value_type value_type;

    LinkedList(); // constructor
    ~LinkedList(); // destructor

    //Precondition: None
    //Postcondition: data is written from the head to a new node (left to right)
    void addToHead(value_type data);

    //precondtion: None
    //postcondition: data is written from the tail to a new node (right to left)
    void addToTail(value_type data);

    //precondition: that the size of the linkedlist is > 0
    //postcondition: the Node from the linkedlist has been removed, by comparing a string against a EToll licence
    void remove(const string plate);

    //preconditon: none
    //postcondition: value is incremented to amount of vehicles of the same type of string that is passed to function
    const int count(const string count);

    //precondition: none
    //postcondition: value is added to totaliser from get charge
    const double totalIncome();

    //precondition: linkedlist thats being passed/ referenced must exist/ be initialised
    //postcondition: concats 2 linked lists
    void operator+=(LinkedList &tollBooth);

    //precondition: LinkedList must exist thats being passed to function
    //postcondition: removes passed linked list from another list
    void operator-=(LinkedList &tollBooth);

    //precondition: none
    //postcondition: sets current to head
    void setCurrent();

    //precondtion: none
    //postcondition: returns bool pending if list is empty or not
    const bool isNULL() const;

    //precondition: next node after current must exist
    //postcondition: current is set to the next node
    void setNewCurrent();

    //precondition: current must have data
    //postcondition: queries data from current
    value_type getData() const;

    //precondition: none
    //postcondition: returns bool pending if list is empty or not
    const bool emptyList() const;

    //precondition: none
    //postcondition: bubble sorts linkedlist
    void order();




private:
    Node* head;
    Node* tail;
    Node* current;
    int size;

    //precondition: curr_->getNextNode() == next_ && next->getPrevNode() == curr_
    //postcondition: the 2 nodes are swapped
    void swap(Node* curr_, Node* next_);



};
    //precondition: passed linkedlist must exist/ be initialised
    //postcondition: prints linkedlist to console
    std::ostream &operator<<(std::ostream &out, LinkedList &tollBooth);

#endif //LinkedList_header




