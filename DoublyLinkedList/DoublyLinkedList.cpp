//
// Created by Kubilay Karapinar on 03.09.19.
//
#include <iostream>
#include "DoublyLinkedList.h"

template<class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;

}

template<class T>
void DoublyLinkedList<T>::insertEnd(T elem) {
    DLLNode<T> *tmp = new DLLNode<T>(elem);
    if (this->head == nullptr) {
        this->head = tmp;
        this->tail = tmp;
    } else {
        this->tail->setNext(tmp);
        tmp->setPrev(this->tail);
        this->tail = tmp;
    }
    this->size++;
}

template<class T>
void DoublyLinkedList<T>::insertBeg(T elem) {
    DLLNode<T> *tmp = new DLLNode<T>(elem);
    if (this->head == nullptr) {
        this->head = tmp;
        this->tail = tmp;
    } else {
        tmp->setNext(this->head);
        this->head->setPrev(tmp);
        this->head = tmp;
    }
    this->size++;
}

template<class T>
void DoublyLinkedList<T>::removeWithValue(T elem) {
    DLLNode<T> *current = this->head;
    while (current != nullptr) {

        if (current->getData() == elem) {
            DLLNode<T> *temp = current;
            if (current->getPrev() == nullptr) {
                this->head = this->head->getNext();
                current = this->head;
            } else {
                current->getPrev()->setNext(current->getNext());
                current->getNext()->setPrev(current->getPrev());
                current = current->getNext();
            }
            this->size--;
            delete temp;
        } else {
            current = current->getNext();
        }
    }
}

template<class T>
void DoublyLinkedList<T>::removeWithIndex(int index) {
    if (index < this->size) {
        DLLNode<T> *current = this->head;

        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        if (current->getPrev() == nullptr) {
            this->head = this->head->getNext();
            this->head->setPrev(nullptr);
        } else {
            current->getPrev()->setNext(current->getNext());
            current->getNext()->setPrev(current->getPrev());
        }
        this->size--;
        delete current;
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }

}

template<class T>
int DoublyLinkedList<T>::getSize() {
    return this->size;
}

template<class T>
void DoublyLinkedList<T>::print() {
    DLLNode<T> *current = this->head;
    while (current != nullptr) {
        std::cout << "Value: " << (*current).getData() << std::endl;
        current = current->getNext();
    }
}

template<class T>
void DoublyLinkedList<T>::printTraverse() {
    DLLNode<T> *current = this->tail;
    while (current != nullptr) {
        std::cout << "Value: " << (*current).getData() << std::endl;
        current = current->getPrev();
    }
}

template<class T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    DLLNode<T> *current = this->head;

    while (current != nullptr) {
        DLLNode<T> *next = current->getNext();
        delete current;
        current = next;
    }
}

template<class T>
DLLNode<T> *DoublyLinkedList<T>::getHead() {
    return this->head;
}

template<class T>
DLLNode<T> *DoublyLinkedList<T>::getTail() {
    return this->tail;
}

template<class T>
void DoublyLinkedList<T>::reverse() {
    if (this->head != nullptr) {
        DLLNode<T> *current = this->head;
        while (current != nullptr) {
            DLLNode<T> *tmp = current->getNext();
            current->setNext(current->getPrev());
            current->setPrev(tmp);
            current = tmp;
        }
        DLLNode<T> *tmp = this->head;
        this->head = this->tail;
        this->tail = tmp;
    }
}

template<class T>
void DoublyLinkedList<T>::replaceWithValue(T elem, T elemReplace) {
    DLLNode<T> *current = this->head;
    while (current != nullptr) {
        if (current->getData() == elem) {
            current->setData(elemReplace);
        }
        current = current->getNext();
    }
}

template<class T>
void DoublyLinkedList<T>::replaceWithIndex(int index, T elemReplace) {
    if (index < this->size) {
        DLLNode<T> *current = this->head;
        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        current->setData(elemReplace);
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }
}

template<class T>
DLLNode<T> *DoublyLinkedList<T>::getNode(int index) {
    if (index < this->size) {
        DLLNode<T> *current = this->head;
        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        return current;
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }
}

