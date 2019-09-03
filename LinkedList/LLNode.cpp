//
// Created by Kubilay Karapinar on 03.09.19.
//

#include "LLNode.h"

template<class T>
LLNode<T>::LLNode(T data) {
    this->data = data;
    this->next = nullptr;
}

template<class T>
LLNode<T>::LLNode(const LLNode<T> &node) {
    this->data = node.data;
    this->next = node.next;
}


template<class T>
void LLNode<T>::setNext(LLNode *node) {
    this->next = node;

}

template<class T>
LLNode<T> *LLNode<T>::getNext() {
    return this->next;
}

template<class T>
T LLNode<T>::getData() {
    return this->data;
}

template<class T>
void LLNode<T>::setData(T data) {
    this->data = data;
}

