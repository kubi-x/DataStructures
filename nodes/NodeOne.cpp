//
// Created by Kubilay Karapinar on 03.09.19.
//

#include "NodeOne.h"

template<class T>
NodeOne<T>::NodeOne(T data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;

}

template<class T>
NodeOne<T>::NodeOne(NodeOne<T> const &node) {
    this->data = node.data;
    this->next = node.next;
    this->prev = node.prev;
}

template<class T>
void NodeOne<T>::setNext(NodeOne *node) {
    this->next = node;
}

template<class T>
void NodeOne<T>::setPrev(NodeOne *node) {
    this->prev = node;
}

template<class T>
NodeOne<T> *NodeOne<T>::getNext() {
    return this->next;
}

template<class T>
NodeOne<T> *NodeOne<T>::getPrev() {
    return this->prev;
}

template<class T>
T NodeOne<T>::getData() {
    return this->data;
}
