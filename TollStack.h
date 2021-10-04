//
// Created by TobyD on 1/10/2021.
//

#ifndef TollStack_Header
#define TollStack_Header
#include "LStack.h"
template <typename value_type>

class TollStack : public LStack<value_type>{

public:

    //Precondition: The input argument is of type string
    //Postcondition: Removes Queried plate from LStack
    void remove(const std::string plate);

    //precondition: LStack must exist thats being passed to function
    //postcondition: removes passed LStack from another LStack
    void operator-=(TollStack<value_type> &tollBooth);

    //preconditon: none
    //postcondition: Queries getCount from LinkedList and returns value
    const int count(const std::string count);

    //precondition: none
    //postcondition: Queries getTotalincome from LinkedList and returns value
    const int totalIncome();


};
#include "TollStack.hpp"
#endif //End of TollStack_Header
