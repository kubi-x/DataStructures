//
// Created by Kubilay Karapinar on 04.09.19.
//

#ifndef DATASTRUCTURES_QUEUE_H
#define DATASTRUCTURES_QUEUE_H


#include "../nodes/NodeZero.h"

template<class T>
class Queue {
public:
    Queue();

    ~Queue();

    void push(T elem);

    NodeZero<T> *pop();

    T getFront();

    T getRear();

    bool isEmpty();

    int getSize();

    void print();

    void clear();

private:
    NodeZero<T> *rear;
    NodeZero<T> *front;
    int size;

};


#endif //DATASTRUCTURES_QUEUE_H
