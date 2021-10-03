//
// Created by TobyD on 1/10/2021.
//

#include <iostream>
#include <cstdlib>
//#include "LinkedList.h"


#ifndef SENG1120_A2_LSTACK_HPP
#define SENG1120_A2_LSTACK_HPP
template <typename value_type>

LStack<value_type>::LStack(){
    //default constructor initialising private variables

}

template <typename value_type>
LStack<value_type>::~LStack(){



}


// add to head
template <typename value_type>
void LStack<value_type>::push(value_type data){
    list.addToHead(data);
}


//remove head... ez
template <typename value_type>
void LStack<value_type>::pop(){
    list.removeFromHead();
}

//return head (current)
template <typename value_type>
void LStack<value_type>::peek(){
    list.returnHead();
}

// already have this function
template <typename value_type>
bool LStack<value_type>::isEmpty(){
    return list.emptyList();
}
template <typename value_type>
void LStack<value_type>::remove(const std::string plate){
    //edge case if there is only 1 item in list



    if(list.getSize() == 1){
        pop();
    }else{
        LStack<value_type> tempStack;                                //create a temperary stack
        while (!list.isEmpty() || list.getPlate() == plate){
            tempStack.push(pop());
        }

        pop();  //remove current index

        while(!tempStack.isEmpty()){
            list.push(tempStack.pop());
        }
        delete tempStack;
        tempStack = NULL;
    }
}

template <typename value_type>
void LStack<value_type>::operator+=(LStack<value_type> &tollBooth){

    while(!tollBooth.isEmpty() && tollBooth != NULL){
        tempStack.push(pop());
    }
    tollBooth.push();
    tollBooth.push(tempStack.pop());

    /*




    for(tollBooth.setCurrent(); !tollBooth.isNULL(); tollBooth.setNewCurrent()) {           //loop till end of the list
        addToTail(tollBooth.getData());                                                     //passes another list to the tail of current list being read from
    }*/
}

template <typename value_type>
void LStack<value_type>::operator-=(LStack<value_type> &tollBooth){
    /*for(tollBooth.setCurrent(); !tollBooth.isNULL(); tollBooth.setNewCurrent()) {       // loops till at the end of the list
        remove(tollBooth.current->getData().get_licence());                             //calls remove fn and passes the vehicles license plate
    }
    setCurrent();*/
}


template <typename value_type>
std::ostream &operator<<(std::ostream &out, LStack<value_type> &tollBooth){
    //enters linkedlist

    //indexes through list

    //gets data

    //prints data
    if (tollBooth.isEmpty()) {                                                                //if the list in requested list is empty (edge case)
        out << "List is empty.";                                                                // print List is empty
    } else {                                                                                    //otherwise
        //TODO: why cant you access LinkedList fns
        for (tollBooth.setCurrent(); !tollBooth.isNULL(); tollBooth.setNewCurrent()) {              //loop till end of list
            out << tollBooth.getData();                                                             //move data to "out" object  << is declared in EToll.cpp
        }                                                                                           // NOTE: only license and type is moved
        tollBooth.setCurrent();                                                                     //sets current to head in requested list
    }
    return out;                                                                                 //returns object to be printed to screen
}

template <typename value_type>
const int LStack<value_type>::count(const std::string type){
    return getCount(type);
}

int LStack<value_type>::totalIncome(){
    return getTotalIncome();
}



#endif //SENG1120_A2_LSTACK_HPP
