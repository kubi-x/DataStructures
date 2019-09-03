//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_LLNODE_H
#define DATASTRUCTURES_LLNODE_H

template<class T>
class LLNode {

public:
    LLNode(T data);

    LLNode(LLNode<T> const &node);

    void setNext(LLNode *node);

    LLNode<T> *getNext();

    T getData();

    void setData(T data);

private:
    T data;
    LLNode<T> *next;

};


#endif //DATASTRUCTURES_LLNODE_H
