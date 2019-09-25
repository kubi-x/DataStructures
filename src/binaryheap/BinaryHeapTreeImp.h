//
// Created by Kubilay Karapinar on 05.09.19.
//

#ifndef DATASTRUCTURES_BINARYHEAPTREEIMP_H
#define DATASTRUCTURES_BINARYHEAPTREEIMP_H


#include "BinaryHeap.h"
#include "../nodes/NodeTwo.h"
#include "../doublylinkedlist/DoublyLinkedList.h"

template<class T>
class BinaryHeapTreeImp : public BinaryHeap<T> {
public:
    BinaryHeapTreeImp();

    ~BinaryHeapTreeImp();

    void push(const T &elem);

    T pop();

    T getTop();

    int getSize();

    bool isEmpty();


private:
    void heapify_up(NodeTwo<T> *node);

    void heapify_down(NodeTwo<T> *node);

    NodeTwo<T> *root;

    DoublyLinkedList<NodeTwo<T> *> leafList;

    int size;

};

#include "BinaryHeapTreeImp.ipp"

#endif //DATASTRUCTURES_BINARYHEAPTREEIMP_H
