// Course: SENG1120
// Assignment: A2
// Name: Toby Dines
// Student Number: c3328008
// Date:
#include <cstdlib>
#ifndef Node_header
#define Node_header
template <typename value_type>

class Node
{
    public:

        Node(); // constructor

        ~Node(); // destructor

        void setNextNode(Node<value_type>* next_);

        Node<value_type>* getNextNode() const;

        void setPrevNode(Node<value_type>* prev_);

        Node<value_type>* getPrevNode() const;

        void setData(value_type& data_);

        value_type getData() const;

    private:
        value_type data; // the data the Node holds
        Node* next; // a pointer to the next Node
        Node* prev; // a pointer to the previous Node

};

#include "Node.hpp"
#endif //Node_header

