//
// Created by TobyD on 1/10/2021.
//

#include <iostream>
#include <cstdlib>

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
value_type LStack<value_type>::pop(){
    value_type tempList = peek();
    list.removeFromHead();
    return tempList;
}

//return head (current)
template <typename value_type>
value_type LStack<value_type>::peek(){
    return list.returnHead();
}

// already have this function
template <typename value_type>
bool LStack<value_type>::isEmpty(){
    return list.emptyList();
}

template <typename value_type>
void LStack<value_type>::remove(const std::string plate){

        LStack<value_type> tempStack;                                //create a temperary stack
        while (!isEmpty()){

            if(peek().get_licence() == plate) {
                pop();
            }else {
                tempStack.push(pop());
            }
        }

        while(!tempStack.isEmpty()){
            push(tempStack.pop());
        }
}

template <typename value_type>
void LStack<value_type>::operator+=(LStack<value_type> &tollBooth) {

    LStack <value_type> tempStack1;
    LStack <value_type> tempStack2;

    while (!isEmpty()) {
        tempStack1.push(pop());          //inverts the stack
    }

    while(!tollBooth.isEmpty()){
        push(tollBooth.peek());
        tempStack2.push(tollBooth.pop());
    }

    while (!tempStack2.isEmpty()) {
        tollBooth.push(tempStack2.pop());
    }
    while (!tempStack1.isEmpty()) {
        push(tempStack1.pop());
    }
}


template <typename value_type>
void LStack<value_type>::operator-=(LStack<value_type> &tollBooth){
    LStack <value_type> tempStack;

    while(!tollBooth.isEmpty()){
        remove(tollBooth.peek().get_licence());
        tempStack.push(tollBooth.pop());
    }
    while(!tempStack.isEmpty()){
        tollBooth.push(tempStack.pop());
    }
}


template <typename value_type>
std::ostream &operator<<(std::ostream &out, LStack<value_type> &tollBooth){

    LStack<value_type> tempStack;


    if (tollBooth.isEmpty()) {                                                                //if the list in requested list is empty (edge case)
        out << "List is empty.";                                                                // print List is empty
    } else {                                                                                    //otherwise
        //TODO: why cant you access LinkedList fns
        //move to temp stack and output at the same time, then move back to tollbooth


        while(!tollBooth.isEmpty()){

            out << tollBooth.peek();

            tempStack.push(tollBooth.pop());
       }

       while(!tempStack.isEmpty()){
            tollBooth.push(tempStack.pop());
        }

    }
    return out;                                                                                //returns object to be printed to screen
}

template <typename value_type>
const int LStack<value_type>::count(const std::string type){
/*
    LStack <value_type> tempStack;
    int count = 0;
    while(!isEmpty()){
        if(peek().get_type() == type){
            count++;
        }
        tempStack.push(pop());
    }

    while(!tempStack.isEmpty()){
        push(tempStack.pop());
    }
*/



    return list.getCount(type); //getCount(type);
}

template <typename value_type>
const int LStack<value_type>::totalIncome(){
    return list.getTotalIncome(); //getTotalIncome();
}



#endif //SENG1120_A2_LSTACK_HPP
