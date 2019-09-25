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

    void insertEnd(const T &elem);

    void insertBeg(const T &elem);

    bool isEmpty();

    T popEnd();

    T popBeg();

    void removeWithValue(const T &elem);

    void removeWithIndex(int index);

    void print();

    void printTraverse();

    void reverse();

    void replaceWithValue(const T &elem, const T &elemReplace);

    void replaceWithIndex(int index, const T &elemReplace);

    NodeOne<T> *getNode(int index);

    NodeOne<T> *getHead();

    NodeOne<T> *getTail();

    int getSize();

private:
    NodeOne<T> *head;
    NodeOne<T> *tail;
    int size;


};

#include "DoublyLinkedList.ipp"

#endif //FUCK_DOUBLYLINKEDLIST_H
