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
template <typename value_type>
class LinkedList {
public:
     LinkedList(); // constructor
    ~LinkedList(); // destructor

    //Precondition: None
    //Postcondition: data is written from the head to a new node (left to right)
    void addToHead(value_type data);

    //preconditon: none
    //postcondition: value is incremented to amount of vehicles of the same type of string that is passed to function
    const int getCount(const std::string type);

    //precondition: none
    //postcondition: value is added to totaliser from get charge
    const double getTotalIncome();

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
    //postcondition: the Node from the linkedlist has been removed, by comparing a string against a EToll licence
    void removeFromHead();

    //precondition: None
    //postcondition: Returns the size of the LinkedList
    int getSize();

    //precondition: That the head has been instantiated
    //postcondition: the heads data gets returned
    value_type returnHead();


private:
    Node<value_type>* head;
    Node<value_type>* tail;
    Node<value_type>* current;
    int size;

};
#include "LinkedList.hpp"

#endif //LinkedList_header


