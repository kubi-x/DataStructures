//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_NODEZERO_H
#define DATASTRUCTURES_NODEZERO_H

template<class T>
class NodeZero {
public:
    NodeZero(T data);

    NodeZero(NodeZero<T> const &node);

    void setNext(NodeZero *node);

    NodeZero<T> *getNext();

    T getData();

    void setData(T data);

private:
    T data;
    NodeZero<T> *next;

};

#include "NodeZero.ipp"

#endif //DATASTRUCTURES_NODEZERO_H
