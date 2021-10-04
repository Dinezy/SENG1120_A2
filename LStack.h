//
// Created by TobyD on 1/10/2021.
//
#include <iostream>
#include <cstdlib>
#include "LinkedList.h"

#ifndef LStack_Header
#define LStack_Header
template <typename value_type>
class LStack {
public:

    LStack(); // constructor
    ~LStack(); // destructor

    //Precondition: none
    //Postcondition: requested data has been added to the head / top of the LStack
    void push(value_type data);

    //Precondition: None
    //Postcondition: If there is data present in LStack, the object will be removed from the head of the LStack and will be returned
    value_type pop();

    //Precondition: There is data currently in the object at the time of quering
    //Postcondition: The queried data from the top of the LStack will be returned
    value_type peek();

    //Precondition: None
    //Postcondition: Returns BOOL output if the LStack is empty. T if empty, F if > 0
    bool isEmpty();

    //precondition: LStacks thats being passed/ referenced must exist/ be initialised
    //postcondition: concats 2 LStacks
    void operator+=(LStack<value_type> &tollBooth);


protected:
    LinkedList<value_type> list;
};

//precondition: passed LStack must exist / be initialised
//postcondition: prints LStack to console
template <typename value_type>
std::ostream &operator<<(std::ostream &out, LStack<value_type> &tollBooth);
#include "LStack.hpp"
#endif //end of LStack header
