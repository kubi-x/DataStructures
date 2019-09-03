//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

#include "LLNode.h"

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

    LLNode<T> *getNode(int index);

    LLNode<T> *getHead();

    LLNode<T> *getTail();

    int getSize();


private:
    void printTraverse(LLNode<T> *node);

    void reverse(LLNode<T> *node);

    LLNode<T> *head;
    LLNode<T> *tail;
    int size;
};

#endif //DATASTRUCTURES_LINKEDLIST_H
