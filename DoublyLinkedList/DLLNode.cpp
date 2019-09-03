//
// Created by Kubilay Karapinar on 03.09.19.
//

#include "DLLNode.h"

template<class T>
DLLNode<T>::DLLNode(T data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;

}

template<class T>
DLLNode<T>::DLLNode(DLLNode<T> const &node) {
    this->data = node.data;
    this->next = node.next;
    this->prev = node.prev;
}

template<class T>
void DLLNode<T>::setNext(DLLNode *node) {
    this->next = node;
}

template<class T>
void DLLNode<T>::setPrev(DLLNode *node) {
    this->prev = node;
}

template<class T>
DLLNode<T> *DLLNode<T>::getNext() {
    return this->next;
}

template<class T>
DLLNode<T> *DLLNode<T>::getPrev() {
    return this->prev;
}

template<class T>
T DLLNode<T>::getData() {
    return this->data;
}
