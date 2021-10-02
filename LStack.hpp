//
// Created by TobyD on 1/10/2021.
//

#include <iostream>
#include <cstdlib>
#include "LinkedList.h"


#ifndef SENG1120_A2_LSTACK_HPP
#define SENG1120_A2_LSTACK_HPP


// add to head
void push(value_type data){
    addToHead(data);
}


//remove head... ez
void pop(){
    removeFromHead();
}

//return head (current)
void peek(){
    returnHead();
}

// already have this function
bool isEmpty(){
    return emptyList();
}

void remove(){

}






#endif //SENG1120_A2_LSTACK_HPP
