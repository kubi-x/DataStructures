//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_DOUBLYLINKEDLIST_H
#define DATASTRUCTURES_DOUBLYLINKEDLIST_H


#include "DLLNode.h"

template<class T>
class DoublyLinkedList {
public:
    DoublyLinkedList();

    ~DoublyLinkedList();

    void insertEnd(T elem);

    void insertBeg(T elem);

    void removeWithValue(T elem);

    void removeWithIndex(int index);

    void print();

    void printTraverse();

    void reverse();

    void replaceWithValue(T elem, T elemReplace);

    void replaceWithIndex(int index, T elemReplace);

    DLLNode<T> *getNode(int index);

    DLLNode<T> *getHead();

    DLLNode<T> *getTail();

    int getSize();

private:
    DLLNode<T> *head;
    DLLNode<T> *tail;
    int size;
};


#endif //FUCK_DOUBLYLINKEDLIST_H
