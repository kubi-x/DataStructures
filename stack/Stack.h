//
// Created by Kubilay Karapinar on 04.09.19.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H


#include "../nodes/NodeZero.h"


template<class T>
class Stack {
public:
    Stack();

    ~Stack();

    void push(T elem);

    NodeZero <T> *pop();

    int getSize();

    void clear();

    bool isEmpty();

    void print();

private:
    NodeZero <T> *top;
    int size;

};

#endif //DATASTRUCTURES_STACK_H
