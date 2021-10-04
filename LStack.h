//
// Created by TobyD on 1/10/2021.
//
#include <iostream>
#include <cstdlib>
#include "LinkedList.h"

#ifndef LStack Header
#define LStack Header
template <typename value_type>
class LStack {
public:


    LStack(); // constructor
    ~LStack(); // destructor

    void push(value_type data);

    value_type pop();

    value_type peek();

    bool isEmpty();

    void remove(const std::string plate);

    void operator+=(LStack<value_type> &tollBooth);

    void operator-=(LStack<value_type> &tollBooth);

    const int count(const std::string count);

    const int totalIncome();


private:
    LinkedList<value_type> list;


};
template <typename value_type>
std::ostream &operator<<(std::ostream &out, LStack<value_type> &tollBooth);
#include "LStack.hpp"
#endif //end of LStack header
