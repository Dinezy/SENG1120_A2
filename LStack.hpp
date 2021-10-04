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
void LStack<value_type>::remove(const std::string plate){
        LStack<value_type> tempStack;                                //create a temporary stack
        while (!isEmpty()){                                          //while the stack is not empty
            if(peek().get_licence() == plate) {                     //get the top of the stacks licence, if its equal to queried plate
                pop();                                              //remove that member from the LStack
            }else {
                tempStack.push(pop());                              //move the next Stack to the temporary stack, and keep indexing through the LStack
            }
        }

        while(!tempStack.isEmpty()){
            push(tempStack.pop());                                  //moves everything from the temporary stack back to the LStack
        }
}

template <typename value_type>
void LStack<value_type>::operator+=(LStack<value_type> &tollBooth) {

    //Creating temporary Stacks
    LStack <value_type> tempStack1;
    LStack <value_type> tempStack2;

    while (!isEmpty()) {
        tempStack1.push(pop());                 //moves the current stack to a temporary stack
    }

    while(!tollBooth.isEmpty()){                //loop while the requested stack is not empty
        push(tollBooth.peek());                 //push the top of the queried stack to current stack object
        tempStack2.push(tollBooth.pop());       //push queried stack to another stack object to index to next object
    }

    while (!tempStack2.isEmpty()) {             //loop while the temporary stack is not empty
        tollBooth.push(tempStack2.pop());       //move the temporary stack back to the original LStack object
    }
    while (!tempStack1.isEmpty()) {             //loop while the temporary stack is not empty
        push(tempStack1.pop());                 //moves back the original LStack back to the object. Now the objects are concatenated
    }
}

template <typename value_type>
void LStack<value_type>::operator-=(LStack<value_type> &tollBooth){
    LStack <value_type> tempStack;                          //create a temporary stack

    while(!tollBooth.isEmpty()){                            //loop till queried stack is not empty
        remove(tollBooth.peek().get_licence());             //remove the queried stack by checking it against its own licences
        tempStack.push(tollBooth.pop());                    //move the current stack to a temp stack to index to next object
    }
    while(!tempStack.isEmpty()){                            //loop till temp stack is empty
        tollBooth.push(tempStack.pop());                    //moves back the queried stack back to its original object
    }
}

template <typename value_type>
std::ostream &operator<<(std::ostream &out, LStack<value_type> &tollBooth){

    LStack<value_type> tempStack;                                                              //create a temporary stack

    if (tollBooth.isEmpty()) {                                                                //if the stack in requested list is empty (edge case)
        out << "List is empty.";                                                                // print List is empty
    } else {                                                                                    //otherwise
        while(!tollBooth.isEmpty()){                                                            // loop till queried stack is empty
            out << tollBooth.peek();                                                            //move top of stack to out object
            tempStack.push(tollBooth.pop());                                                    //move the top of stack to the temporary stack to index to next object
       }
       while(!tempStack.isEmpty()){                                                             //loop till temp stack is empty
            tollBooth.push(tempStack.pop());                                                    //move the stack from the temporary stack back to its original stack / object
        }
    }
    return out;                                                                                //returns object to be printed to screen
}

template <typename value_type>
const int LStack<value_type>::count(const std::string type){
/*
    LStack <value_type> tempStack;              //creates temporary stack
    int count = 0;                              //initialise count as 0
    while(!isEmpty()){                          //loop till current stack is empty
        if(peek().get_type() == type){          //if the top of the stacks type is == to the queried type
            count++;                            //increment count
        }
        tempStack.push(pop());                  //move the top of stack to temp stack to index to next object
    }

    while(!tempStack.isEmpty()){                //loop till temp stack is empty
        push(tempStack.pop());                  //moves temp stack back to original stack
    }
*/

    return list.getCount(type); //  queries get count in linkedList
}

template <typename value_type>
const int LStack<value_type>::totalIncome(){
    return list.getTotalIncome(); //queries getTotalIncome in LinkedList
}
