// Course: SENG1120
// Assignment: A2
// Name: Toby Dines
// Student Number: c3328008
// Date:

#include <iostream>
#include <cstdlib>
#include <string>


template <typename value_type>
LinkedList<value_type>::LinkedList(){
    //default constructor initialising private variables
    head = NULL;
    tail = NULL;
    current = NULL;
    size = 0;

}

template <typename value_type>
LinkedList<value_type>::~LinkedList(){

   while(head != NULL){
       current = current->getNextNode();
       delete head;
       head = current;
   }

}

template <typename value_type>
void LinkedList<value_type>::addToHead(value_type data){
    //if the linked list is empty
    if(size == 0){
        Node<value_type>* temp_Head = new Node<value_type>;     //create a new temporary head node
        temp_Head->setData(data);   //move data to temp head node
        head = temp_Head;               //move data from temp variable to Head
        temp_Head->setNextNode(NULL);   //initialise next and previous Nodes to be linked
        temp_Head->setPrevNode(NULL);
        tail = head;                    //only one Node in linked list ==> that tail and head are the same
        size++;                         //size increases to 1
        current = head;                 //reseting current to head
        temp_Head = NULL;               //"reseting temporary variable"

    }else if(size > 0){                 //if the linkedlist has objects in it
        Node<value_type>* temp_Head = new Node<value_type>;     //create a temp Head Node
        temp_Head->setData(data);   //move data to temp head
        temp_Head->setNextNode(head);   //create link to new nodes
        temp_Head->setPrevNode(NULL);   //
        head->setPrevNode(temp_Head);   //reset head to start of list
        head = temp_Head;
        size++;                         //increment size
        temp_Head = NULL;               //reset "temp var"
    }
}

template <typename value_type>
void LinkedList<value_type>::removeFromHead(){
    setCurrent();

    if(size == 0){          //edge case if entering with no objects in list
        return;
    }else if (size == 1) {  //edge case when there is only 1 object left in list
        delete head;    //remove head
        head = NULL;    //set to null
        tail = NULL;    //set to null
        size--;         //size now = 0      list is now empty
    }else{
        Node<value_type> *temp_prev = current->getPrevNode();                   //assign current nodes to temp vars
        Node<value_type> *temp_next = current->getNextNode();

        head = temp_next;                                       //head is now the next index in list
        temp_next->setPrevNode(NULL);                           //the NEW heads prev is null
        delete current;                                         //delete current
        temp_prev = NULL;                                       //reset temp vars
        temp_next = NULL;
        setCurrent();                                           //reset current to head
        size--;
        }
}

template <typename value_type>
void LinkedList<value_type>::setCurrent(){
    current = head;         //sets current to head
}

template <typename value_type>
const bool LinkedList<value_type>::isNULL() const{
    if(current == NULL){                //if current node is null
        return true;                    //return true
    }else{
        return false;                   //if it isnt return false
    }
}

template <typename value_type>
void LinkedList<value_type>::setNewCurrent(){
    current = current->getNextNode();               //moves current node to next node in list
}

template <typename value_type>
value_type LinkedList<value_type>::getData() const{
    return current->getData();              //returns data of current node
}

template <typename value_type>
const bool LinkedList<value_type>::emptyList() const {
    if(size > 0){                       //if list is not empty return false
        return false;
    }else{
        return true;                    //otherwise return true (empty)
    }
}

template <typename value_type>
const int LinkedList<value_type>::getCount(const std::string type){
    int i = 0;                                                      //counter
    for (setCurrent(); !isNULL(); setNewCurrent()) {                //loops through list till its at the end
        if(current->getData().get_type() == type){                  //if the vehicle type at current matches requested vehicle
            i++;                                                    //increment counter
        }
    }
    setCurrent();                                                   //sets current to head
    return i;                                                       //returns value of counter
}

template <typename value_type>
const double LinkedList<value_type>::getTotalIncome(){
    int total = 0;                                              //total is initially 0
    for (setCurrent(); !isNULL(); setNewCurrent()) {            //loop till end of the list
        total += current->getData().get_charge();               //total is added from current vehicle toll
    }
    setCurrent();                                               //sets current to head
    return total;                                               //returns total
}

template <typename value_type>
int LinkedList<value_type>::getSize(){
    return size; // returns size of LinkedList
}


template <typename value_type>
value_type LinkedList<value_type>::returnHead(){
    return head->getData();     //returns the data at the head of the list
}




