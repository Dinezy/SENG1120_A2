// Course: SENG1120
// Assignment: A2
// Name: Toby Dines
// Student Number: c3328008
// Date:



//typedef Node::value_type value_type;
template <typename value_type>
Node<value_type>::Node(){
    //default constructor
    prev = NULL;        //initially setting nodes to null
    next = NULL;
}
template <typename value_type>
Node<value_type>::~Node(){
    //as data is not a pointer there is nothing to delete
}

template <typename value_type>
void Node<value_type>::setNextNode(Node<value_type>* next_){
    next = next_;               //moves requested next to next Node
}
template <typename value_type>
Node<value_type>* Node<value_type>::getNextNode() const{
    return next;                //returns next
}
template <typename value_type>
void Node<value_type>::setPrevNode(Node<value_type>* prev_){
    prev = prev_;               //moves requested prev to prev node
}
template <typename value_type>
Node<value_type>* Node<value_type>::getPrevNode() const{
    return prev;                //returns prev
}
template <typename value_type>
void Node<value_type>::setData(value_type& data_){
        data = data_;           //moves data into data node
}

template <typename value_type>
value_type Node<value_type>::getData() const{
    return data;                //returns data
}


