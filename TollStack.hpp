//
// Created by TobyD on 1/10/2021.
//
#include <iostream>
#include "LStack.h"

template <typename value_type>
void TollStack<value_type>::remove(const std::string plate){
    TollStack<value_type> tempStack;                                //create a temporary stack
    while (!LStack<value_type>::isEmpty()){                                          //while the stack is not empty
        if(LStack<value_type>::peek().get_licence() == plate) {                     //get the top of the stacks licence, if its equal to queried plate
            LStack<value_type>::pop();                                              //remove that member from the LStack
        }else {
            tempStack.LStack<value_type>::push(LStack<value_type>::pop());                              //move the next Stack to the temporary stack, and keep indexing through the LStack
        }
    }

    while(!tempStack.LStack<value_type>::isEmpty()){
        LStack<value_type>::push(tempStack.LStack<value_type>::pop());                                  //moves everything from the temporary stack back to the LStack
    }
}

template <typename value_type>
void TollStack<value_type>::operator-=(TollStack<value_type> &tollBooth){
    TollStack <value_type> tempStack;                          //create a temporary stack

    while(!tollBooth.LStack<value_type>::isEmpty()){                            //loop till queried stack is not empty
        remove(tollBooth.LStack<value_type>::peek().get_licence());             //remove the queried stack by checking it against its own licences
        tempStack.LStack<value_type>::push(tollBooth.LStack<value_type>::pop());                    //move the current stack to a temp stack to index to next object
    }
    while(!tempStack.LStack<value_type>::isEmpty()){                            //loop till temp stack is empty
        tollBooth.LStack<value_type>::push(tempStack.LStack<value_type>::pop());                    //moves back the queried stack back to its original object
    }
}

template <typename value_type>
std::ostream &operator<<(std::ostream &out, TollStack<value_type> &tollBooth){

    TollStack<value_type> tempStack;                                                              //create a temporary stack

    if (tollBooth.LStack<value_type>::isEmpty()) {                                                                //if the stack in requested list is empty (edge case)
        out << "List is empty.";                                                                // print List is empty
    } else {                                                                                    //otherwise
        while(!tollBooth.LStack<value_type>::isEmpty()){                                                            // loop till queried stack is empty
            out << tollBooth.peek();                                                            //move top of stack to out object
            tempStack.LStack<value_type>::push(tollBooth.LStack<value_type>::pop());                                                    //move the top of stack to the temporary stack to index to next object
        }
        while(!tempStack.isEmpty()){                                                             //loop till temp stack is empty
            tollBooth.LStack<value_type>::push(tempStack.LStack<value_type>::pop());                                                    //move the stack from the temporary stack back to its original stack / object
        }
    }
    return out;                                                                                //returns object to be printed to screen
}


template <typename value_type>
const int TollStack<value_type>::count(const std::string type){

    TollStack <value_type> tempStack;              //creates temporary stack
    int count = 0;                              //initialise count as 0
    while(!LStack <value_type>::isEmpty()){                          //loop till current stack is empty
        if(LStack <value_type>::peek().get_type() == type){          //if the top of the stacks type is == to the queried type
            count++;                            //increment count
        }
        tempStack.LStack <value_type>::push(LStack <value_type>::pop());                  //move the top of stack to temp stack to index to next object
    }

    while(!tempStack.LStack <value_type>::isEmpty()){                //loop till temp stack is empty
        LStack<value_type>::push(tempStack.LStack <value_type>::pop());                  //moves temp stack back to original stack
    }


    return count; //  queries get count in linkedList
}

template <typename value_type>
const int TollStack<value_type>::totalIncome(){

    int total = 0;                                                                      //total is initially 0
    TollStack tempStack;

    while(!LStack <value_type> :: isEmpty()){                                                //loop till end of the Stack
        total += LStack <value_type> :: peek().get_charge();
        tempStack.LStack <value_type>::push(LStack <value_type>:: pop());
    }
    while(!tempStack.LStack <value_type>::isEmpty()){
        LStack<value_type>::push(tempStack.LStack <value_type>::pop());                  //moves temp stack back to original stack
    }

    return total; //queries getTotalIncome in LinkedList
}