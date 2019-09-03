//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_DLLNODE_H
#define DATASTRUCTURES_DLLNODE_H

template<class T>
class DLLNode {

public:

    DLLNode(T data);

    DLLNode(DLLNode<T> const &node);

    void setNext(DLLNode *node);

    void setPrev(DLLNode *node);

    DLLNode<T> *getNext();

    DLLNode<T> *getPrev();

    T getData();


private:
    T data;
    DLLNode<T> *next;
    DLLNode<T> *prev;

};

#endif //DATASTRUCTURES_DLLNODE_H
