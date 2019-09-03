//
// Created by Kubilay Karapinar on 04.09.19.
//

#ifndef DATASTRUCTURES_SNODE_H
#define DATASTRUCTURES_SNODE_H

template<class T>
class SNode {
public:
    SNode(T data);

    SNode(SNode<T> const &node);

    void setNext(SNode *node);

    SNode<T> *getNext();

    T getData();

    void setData(T data);

private:
    T data;
    SNode<T> *next;

};



#endif //DATASTRUCTURES_SNODE_H
