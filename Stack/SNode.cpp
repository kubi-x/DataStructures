//
// Created by Kubilay Karapinar on 04.09.19.
//

#include "SNode.h"

template<class T>
SNode<T>::SNode(T data) {
    this->data = data;
    this->next = nullptr;
}

template<class T>
SNode<T>::SNode(const SNode<T> &node) {
    this->data = node.data;
    this->next = node.next;
}

template<class T>
void SNode<T>::setNext(SNode *node) {
    this->next = node;
}

template<class T>
SNode<T> *SNode<T>::getNext() {
    return this->next;
}

template<class T>
T SNode<T>::getData() {
    return this->data;
}

template<class T>
void SNode<T>::setData(T data) {
    this->data = data;
}
