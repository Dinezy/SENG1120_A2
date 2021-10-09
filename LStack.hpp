//
// Created by TobyD on 1/10/2021.
//

#include <iostream>
#include <cstdlib>

template <typename value_type>
LStack<value_type>::LStack(){
    //none of the private variable need to be initially instantiated
}

template <typename value_type>
LStack<value_type>::~LStack(){
    //due to list being stored on the stack, once it goes out of scope the compiler removes it from memory
    //however dan wants me to do this :(
    while(!isEmpty()){
        pop();              //empties the stack
    }
}

// add to head
template <typename value_type>
void LStack<value_type>::push(value_type data){
    list.addToHead(data);                      // pushes data to add to Head function in LinkedList
}

template <typename value_type>
value_type LStack<value_type>::pop(){
    value_type tempList = peek();           //adds top of stack to a temperary list
    list.removeFromHead();                  //removes the head from the LinkedList
    return tempList;                        //returns the top of stack that is now stored in tempList
}

template <typename value_type>
value_type LStack<value_type>::peek(){
    return list.returnHead();                       //queries return head in LinkedList class
}

template <typename value_type>
bool LStack<value_type>::isEmpty(){
    return list.emptyList();                        //queries size in LinkedList, returns a boolean value T if empty, F if > 0
}



template <typename value_type>
void LStack<value_type>::operator+=(LStack<value_type> &tollBooth) {

    //Creating temporary Stacks
    LStack <value_type> tempStack1;

    while(!tollBooth.isEmpty()){                        //loop while the this stack is not empty
        tempStack1.push(tollBooth.peek());              //moves the current stack to a temporary stack
        push(tollBooth.pop());                          //concats to top of stack
    }
    while(!tempStack1.isEmpty()){                       //loop while the temporary stack is not empty
        tollBooth.push(tempStack1.pop());               //move the temporary stack back to the original LStack object
    }
}








