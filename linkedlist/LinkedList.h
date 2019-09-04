//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

#include "../nodes/NodeZero.h"

template<class T>
class LinkedList {
public:
    LinkedList();

    ~LinkedList();

    void insertEnd(T elem);

    void insertBeg(T elem);

    void removeWithValue(T elem);

    void removeWithIndex(int index);

    void print();

    void printTraverse();

    void reverse();

    void replaceWithValue(T elem, T elemReplace);

    void replaceWithIndex(int index, T elemReplace);

    NodeZero<T> *getNode(int index);

    NodeZero<T> *getHead();

    NodeZero<T> *getTail();

    int getSize();


private:
    void printTraverse(NodeZero<T> *node);

    void reverse(NodeZero<T> *node);

    NodeZero<T> *head;
    NodeZero<T> *tail;
    int size;
};

#endif //DATASTRUCTURES_LINKEDLIST_H
