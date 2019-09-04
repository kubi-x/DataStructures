//
// Created by Kubilay Karapinar on 03.09.19.
//

#include <iostream>
#include <stdexcept>
#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

template<class T>
void LinkedList<T>::insertEnd(T elem) {
    NodeZero<T> *tmp = new NodeZero<T>(elem);
    if (this->head == nullptr) {
        this->head = tmp;
        this->tail = tmp;
    } else {
        this->tail->setNext(tmp);
        this->tail = tmp;
    }
    this->size++;
}

template<class T>
void LinkedList<T>::insertBeg(T elem) {
    NodeZero<T> *tmp = new NodeZero<T>(elem);
    if (this->head == nullptr) {
        this->head = tmp;
        this->tail = tmp;
    } else {
        tmp->setNext(this->head);
        this->head = tmp;
    }
    this->size++;
}


template<class T>
void LinkedList<T>::removeWithValue(T elem) {
    NodeZero<T> *current = this->head;
    NodeZero<T> *prev = nullptr;
    while (current != nullptr) {

        if (current->getData() == elem) {
            NodeZero<T> *temp = current;
            if (prev == nullptr) {
                this->head = this->head->getNext();
                current = this->head;

            } else {
                prev->setNext(current->getNext());
                current = current->getNext();
            }
            this->size--;
            delete temp;
        } else {
            prev = current;
            current = current->getNext();
        }
    }
}

template<class T>
void LinkedList<T>::removeWithIndex(int index) {
    if (index < this->size) {
        NodeZero<T> *current = this->head;
        NodeZero<T> *prev = nullptr;

        for (int i = 0; i < index; i++) {
            prev = current;
            current = current->getNext();
        }
        if (prev == nullptr) {
            this->head = this->head->getNext();
        } else {
            prev->setNext(current->getNext());
        }
        this->size--;
        delete current;
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }


}


template<class T>
void LinkedList<T>::print() {
    NodeZero<T> *current = this->head;
    while (current != nullptr) {
        std::cout << "Value: " << current->getData() << std::endl;
        current = current->getNext();
    }
}

template<class T>
void LinkedList<T>::printTraverse() {
    printTraverse(this->head);
}

template<class T>
void LinkedList<T>::printTraverse(NodeZero<T> *node) {
    if (node != nullptr) {
        printTraverse(node->getNext());
        std::cout << "Value: " << node->getData() << std::endl;
    }
}

template<class T>
void LinkedList<T>::reverse() {
    reverse(this->head);
    this->head->setNext(nullptr);
    NodeZero<T> *tmp = this->head;
    this->head = this->tail;
    this->tail = tmp;
}

template<class T>
void LinkedList<T>::reverse(NodeZero<T> *node) {
    if (node->getNext() != nullptr) {
        reverse(node->getNext());
        node->getNext()->setNext(node);
    }
}

template<class T>
NodeZero<T> *LinkedList<T>::getHead() {
    return this->head;
}

template<class T>
NodeZero<T> *LinkedList<T>::getTail() {
    return this->tail;
}

template<class T>
int LinkedList<T>::getSize() {
    return this->size;
}

template<class T>
void LinkedList<T>::replaceWithValue(T elem, T elemReplace) {
    NodeZero<T> *current = this->head;
    while (current != nullptr) {
        if (current->getData() == elem) {
            current->setData(elemReplace);
        }
        current = current->getNext();
    }

}

template<class T>
void LinkedList<T>::replaceWithIndex(int index, T elemReplace) {
    if (index < this->size) {
        NodeZero<T> *current = this->head;
        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        current->setData(elemReplace);
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }
}


template<class T>
LinkedList<T>::~LinkedList() {
    NodeZero<T> *current = this->head;

    while (current != nullptr) {
        NodeZero<T> *next = current->getNext();
        delete current;
        current = next;
    }
}

template<class T>
NodeZero<T> *LinkedList<T>::getNode(int index) {
    if (index < this->size) {
        NodeZero<T> *current = this->head;
        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        return current;
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }
}




