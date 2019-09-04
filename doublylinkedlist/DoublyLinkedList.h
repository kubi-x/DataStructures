//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_DOUBLYLINKEDLIST_H
#define DATASTRUCTURES_DOUBLYLINKEDLIST_H


#include "../nodes/NodeOne.h"

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

    NodeOne<T> *getNode(int index);

    NodeOne<T> *getHead();

    NodeOne<T> *getTail();

    int getSize();

private:
    NodeOne<T> *head;
    NodeOne<T> *tail;
    int size;
};


#endif //FUCK_DOUBLYLINKEDLIST_H
